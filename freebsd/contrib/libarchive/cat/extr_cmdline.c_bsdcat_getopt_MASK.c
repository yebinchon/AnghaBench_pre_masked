
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bsdcat_option {char const* name; int equivalent; scalar_t__ required; } ;
struct bsdcat {char* argument; int getopt_state; char** argv; char* getopt_word; int argc; } ;


 int FUNC_0 (int ,char*,...) ;
 char* VAR_0 ;
 char* FUNC_1 (char*,char) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 size_t FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (char const*,char const*,size_t) ;
 struct bsdcat_option* VAR_1 ;

int
FUNC_5(struct bsdcat *VAR_2)
{
 enum { state_start = 0, state_old_tar, state_next_word,
        state_short, state_long };

 const struct bsdcat_option *VAR_3, *VAR_4 = ((void*)0), *VAR_5 = ((void*)0);
 const char *VAR_6, *VAR_7 = "--";
 size_t VAR_8;
 int VAR_9 = '?';
 int VAR_10 = 0;

 VAR_2->argument = ((void*)0);


 if (VAR_2->getopt_state == state_start) {

  ++VAR_2->argv;
  --VAR_2->argc;
  if (*VAR_2->argv == ((void*)0))
   return (-1);

  VAR_2->getopt_state = state_next_word;
 }




 if (VAR_2->getopt_state == state_next_word) {

  if (VAR_2->argv[0] == ((void*)0))
   return (-1);

  if (VAR_2->argv[0][0] != '-')
   return (-1);

  if (FUNC_2(VAR_2->argv[0], "--") == 0) {
   ++VAR_2->argv;
   --VAR_2->argc;
   return (-1);
  }

  VAR_2->getopt_word = *VAR_2->argv++;
  --VAR_2->argc;
  if (VAR_2->getopt_word[1] == '-') {

   VAR_2->getopt_state = state_long;
   VAR_2->getopt_word += 2;
  } else {

   VAR_2->getopt_state = state_short;
   ++VAR_2->getopt_word;
  }
 }




 if (VAR_2->getopt_state == state_short) {

  VAR_9 = *VAR_2->getopt_word++;
  if (VAR_9 == '\0') {

   VAR_2->getopt_state = state_next_word;
   return FUNC_5(VAR_2);
  }


  VAR_6 = FUNC_1(VAR_0, VAR_9);
  if (VAR_6 == ((void*)0))
   return ('?');
  if (VAR_6[1] == ':')
   VAR_10 = 1;


  if (VAR_10) {

   if (VAR_2->getopt_word[0] == '\0') {

    VAR_2->getopt_word = *VAR_2->argv;
    if (VAR_2->getopt_word == ((void*)0)) {
     FUNC_0(0,
         "Option -%c requires an argument",
         VAR_9);
     return ('?');
    }
    ++VAR_2->argv;
    --VAR_2->argc;
   }
   if (VAR_9 == 'W') {
    VAR_2->getopt_state = state_long;
    VAR_7 = "-W ";
   } else {
    VAR_2->getopt_state = state_next_word;
    VAR_2->argument = VAR_2->getopt_word;
   }
  }
 }


 if (VAR_2->getopt_state == state_long) {

  VAR_2->getopt_state = state_next_word;


  VAR_6 = FUNC_1(VAR_2->getopt_word, '=');
  if (VAR_6 != ((void*)0)) {
   VAR_8 = (size_t)(VAR_6 - VAR_2->getopt_word);
   VAR_2->argument = (char *)(uintptr_t)(VAR_6 + 1);
  } else {
   VAR_8 = FUNC_3(VAR_2->getopt_word);
  }


  for (VAR_3 = VAR_1; VAR_3->name != ((void*)0); VAR_3++) {

   if (VAR_3->name[0] != VAR_2->getopt_word[0])
    continue;

   if (FUNC_4(VAR_2->getopt_word, VAR_3->name, VAR_8) == 0) {
    VAR_5 = VAR_4;
    VAR_4 = VAR_3;

    if (FUNC_3(VAR_3->name) == VAR_8) {
     VAR_5 = ((void*)0);
     break;
    }
   }
  }


  if (VAR_4 == ((void*)0)) {
   FUNC_0(0,
       "Option %s%s is not supported",
       VAR_7, VAR_2->getopt_word);
   return ('?');
  }
  if (VAR_5 != ((void*)0)) {
   FUNC_0(0,
       "Ambiguous option %s%s (matches --%s and --%s)",
       VAR_7, VAR_2->getopt_word, VAR_4->name, VAR_5->name);
   return ('?');
  }


  if (VAR_4->required) {

   if (VAR_2->argument == ((void*)0)) {
    VAR_2->argument = *VAR_2->argv;
    if (VAR_2->argument == ((void*)0)) {
     FUNC_0(0,
         "Option %s%s requires an argument",
         VAR_7, VAR_4->name);
     return ('?');
    }
    ++VAR_2->argv;
    --VAR_2->argc;
   }
  } else {

   if (VAR_2->argument != ((void*)0)) {
    FUNC_0(0,
        "Option %s%s does not allow an argument",
        VAR_7, VAR_4->name);
    return ('?');
   }
  }
  return (VAR_4->equivalent);
 }

 return (VAR_9);
}
