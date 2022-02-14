
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int index; } ;
struct tblentry {int cmdtype; int special; TYPE_1__ param; } ;
struct cmdentry {int cmdtype; int special; TYPE_1__ u; } ;
struct alias {int val; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 struct tblentry* FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,int ) ;
 scalar_t__ FUNC_3 (char const* const,char*) ;
 int VAR_3 ;
 int FUNC_4 (char*,struct cmdentry*,int ,char const*) ;
 struct alias* FUNC_5 (char*,int) ;
 int VAR_4 ;
 int FUNC_6 (char*,char*,...) ;
 int FUNC_7 (int ) ;
 int VAR_5 ;
 int FUNC_8 (char,int ) ;
 int FUNC_9 (int ,char*,char*,...) ;
 char* FUNC_10 (char const**,char const**,char*) ;
 char** VAR_6 ;
 char const* FUNC_11 () ;
 int * FUNC_12 (char*,char) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (char*) ;

int
FUNC_15(int VAR_7, char **VAR_8, int VAR_9, const char *VAR_10)
{
 struct cmdentry VAR_11;
 struct tblentry *VAR_12;
 const char *const *VAR_13;
 struct alias *VAR_14;
 int VAR_15;
 int VAR_16 = 0;

 if (VAR_10 != FUNC_11())
  FUNC_0();

 for (VAR_15 = 1; VAR_15 < VAR_7; VAR_15++) {

  for (VAR_13 = VAR_6; *VAR_13; VAR_13++)
   if (**VAR_13 == *VAR_8[VAR_15] && FUNC_3(*VAR_13, VAR_8[VAR_15]))
    break;

  if (*VAR_13) {
   if (VAR_9 == VAR_0)
    FUNC_6("%s\n", VAR_8[VAR_15]);
   else
    FUNC_6("%s is a shell keyword\n", VAR_8[VAR_15]);
   continue;
  }


  if ((VAR_14 = FUNC_5(VAR_8[VAR_15], 1)) != ((void*)0)) {
   if (VAR_9 == VAR_0) {
    FUNC_6("alias %s=", VAR_8[VAR_15]);
    FUNC_7(VAR_14->val);
    FUNC_8('\n', VAR_4);
   } else
    FUNC_6("%s is an alias for %s\n", VAR_8[VAR_15],
        VAR_14->val);
   continue;
  }


  if ((VAR_12 = FUNC_1(VAR_8[VAR_15], 0)) != ((void*)0)) {
   VAR_11.cmdtype = VAR_12->cmdtype;
   VAR_11.u = VAR_12->param;
   VAR_11.special = VAR_12->special;
  }
  else {

   FUNC_4(VAR_8[VAR_15], &VAR_11, 0, VAR_10);
  }

  switch (VAR_11.cmdtype) {
  case 128: {
   if (FUNC_12(VAR_8[VAR_15], '/') == ((void*)0)) {
    const char *VAR_17 = VAR_10;
    const char *VAR_18;
    char *VAR_19;
    int VAR_20 = VAR_11.u.index;
    do {
     VAR_19 = FUNC_10(&VAR_17, &VAR_18, VAR_8[VAR_15]);
     FUNC_14(VAR_19);
    } while (--VAR_20 >= 0);
    if (VAR_9 == VAR_0)
     FUNC_6("%s\n", VAR_19);
    else
     FUNC_6("%s is%s %s\n", VAR_8[VAR_15],
         (VAR_12 && VAR_9 == VAR_1) ?
      " a tracked alias for" : "",
         VAR_19);
   } else {
    if (FUNC_2(VAR_8[VAR_15], VAR_2) == 0) {
     if (VAR_9 == VAR_0)
      FUNC_6("%s\n", VAR_8[VAR_15]);
     else
      FUNC_6("%s is %s\n", VAR_8[VAR_15],
          VAR_8[VAR_15]);
    } else {
     if (VAR_9 != VAR_0)
      FUNC_9(VAR_5, "%s: %s\n",
          VAR_8[VAR_15], FUNC_13(VAR_3));
     VAR_16 |= 127;
    }
   }
   break;
  }
  case 129:
   if (VAR_9 == VAR_0)
    FUNC_6("%s\n", VAR_8[VAR_15]);
   else
    FUNC_6("%s is a shell function\n", VAR_8[VAR_15]);
   break;

  case 130:
   if (VAR_9 == VAR_0)
    FUNC_6("%s\n", VAR_8[VAR_15]);
   else if (VAR_11.special)
    FUNC_6("%s is a special shell builtin\n",
        VAR_8[VAR_15]);
   else
    FUNC_6("%s is a shell builtin\n", VAR_8[VAR_15]);
   break;

  default:
   if (VAR_9 != VAR_0)
    FUNC_9(VAR_5, "%s: not found\n", VAR_8[VAR_15]);
   VAR_16 |= 127;
   break;
  }
 }

 if (VAR_10 != FUNC_11())
  FUNC_0();

 return VAR_16;
}
