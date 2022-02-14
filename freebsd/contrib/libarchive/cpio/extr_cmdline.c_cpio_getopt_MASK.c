
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {char* name; int equivalent; scalar_t__ required; } ;
struct cpio {char* argument; char** argv; int argc; } ;


 struct option* VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 char* VAR_1 ;
 char* FUNC_1 (char*,char) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 size_t FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char*,char*,size_t) ;

int
FUNC_5(struct cpio *VAR_2)
{
 enum { state_start = 0, state_next_word, state_short, state_long };
 static int VAR_3 = state_start;
 static char *VAR_4;

 const struct option *VAR_5, *VAR_6 = ((void*)0), *VAR_7 = ((void*)0);
 const char *VAR_8, *VAR_9 = "--";
 size_t VAR_10;
 int VAR_11 = '?';
 int VAR_12 = 0;

 VAR_2->argument = ((void*)0);


 if (VAR_3 == state_start) {

  ++VAR_2->argv;
  --VAR_2->argc;
  VAR_3 = state_next_word;
 }




 if (VAR_3 == state_next_word) {

  if (VAR_2->argv[0] == ((void*)0))
   return (-1);

  if (VAR_2->argv[0][0] != '-')
   return (-1);

  if (FUNC_2(VAR_2->argv[0], "--") == 0) {
   ++VAR_2->argv;
   --VAR_2->argc;
   return (-1);
  }

  VAR_4 = *VAR_2->argv++;
  --VAR_2->argc;
  if (VAR_4[1] == '-') {

   VAR_3 = state_long;
   VAR_4 += 2;
  } else {

   VAR_3 = state_short;
   ++VAR_4;
  }
 }




 if (VAR_3 == state_short) {

  VAR_11 = *VAR_4++;
  if (VAR_11 == '\0') {

   VAR_3 = state_next_word;
   return FUNC_5(VAR_2);
  }


  VAR_8 = FUNC_1(VAR_1, VAR_11);
  if (VAR_8 == ((void*)0))
   return ('?');
  if (VAR_8[1] == ':')
   VAR_12 = 1;


  if (VAR_12) {

   if (VAR_4[0] == '\0') {

    VAR_4 = *VAR_2->argv;
    if (VAR_4 == ((void*)0)) {
     FUNC_0(0,
         "Option -%c requires an argument",
         VAR_11);
     return ('?');
    }
    ++VAR_2->argv;
    --VAR_2->argc;
   }
   if (VAR_11 == 'W') {
    VAR_3 = state_long;
    VAR_9 = "-W ";
   } else {
    VAR_3 = state_next_word;
    VAR_2->argument = VAR_4;
   }
  }
 }


 if (VAR_3 == state_long) {

  VAR_3 = state_next_word;


  VAR_8 = FUNC_1(VAR_4, '=');
  if (VAR_8 != ((void*)0)) {
   VAR_10 = (size_t)(VAR_8 - VAR_4);
   VAR_2->argument = (char *)(uintptr_t)(VAR_8 + 1);
  } else {
   VAR_10 = FUNC_3(VAR_4);
  }


  for (VAR_5 = VAR_0; VAR_5->name != ((void*)0); VAR_5++) {

   if (VAR_5->name[0] != VAR_4[0])
    continue;

   if (FUNC_4(VAR_4, VAR_5->name, VAR_10) == 0) {
    VAR_7 = VAR_6;
    VAR_6 = VAR_5;

    if (FUNC_3(VAR_5->name) == VAR_10) {
     VAR_7 = ((void*)0);
     break;
    }
   }
  }


  if (VAR_6 == ((void*)0)) {
   FUNC_0(0,
       "Option %s%s is not supported",
       VAR_9, VAR_4);
   return ('?');
  }
  if (VAR_7 != ((void*)0)) {
   FUNC_0(0,
       "Ambiguous option %s%s (matches --%s and --%s)",
       VAR_9, VAR_4, VAR_6->name, VAR_7->name);
   return ('?');
  }


  if (VAR_6->required) {

   if (VAR_2->argument == ((void*)0)) {
    VAR_2->argument = *VAR_2->argv;
    if (VAR_2->argument == ((void*)0)) {
     FUNC_0(0,
         "Option %s%s requires an argument",
         VAR_9, VAR_6->name);
     return ('?');
    }
    ++VAR_2->argv;
    --VAR_2->argc;
   }
  } else {

   if (VAR_2->argument != ((void*)0)) {
    FUNC_0(0,
        "Option %s%s does not allow an argument",
        VAR_9, VAR_6->name);
    return ('?');
   }
  }
  return (VAR_6->equivalent);
 }

 return (VAR_11);
}
