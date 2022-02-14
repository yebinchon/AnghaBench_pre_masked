
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* res_state ;
typedef int buf ;
struct TYPE_3__ {int options; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (char*,int,int *) ;
 int * FUNC_2 (char*,char*) ;
 char* FUNC_3 (char*) ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 (unsigned char) ;
 int FUNC_6 (char*,char const*) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (char*,char*,size_t) ;

const char *
FUNC_9(const res_state VAR_2, const char *VAR_3, char *VAR_4, size_t VAR_5) {
 char *VAR_6, *VAR_7, *VAR_8;
 char VAR_9[VAR_0];
 FILE *VAR_10;

 if (VAR_2->options & VAR_1)
  return (((void*)0));
 if (FUNC_4())
  return (((void*)0));
 VAR_6 = FUNC_3("HOSTALIASES");
 if (VAR_6 == ((void*)0) || (VAR_10 = FUNC_2(VAR_6, "re")) == ((void*)0))
  return (((void*)0));
 FUNC_7(VAR_10, ((void*)0));
 VAR_9[sizeof(VAR_9) - 1] = '\0';
 while (FUNC_1(VAR_9, sizeof(VAR_9), VAR_10)) {
  for (VAR_7 = VAR_9; *VAR_7 && !FUNC_5((unsigned char)*VAR_7); ++VAR_7)
   ;
  if (!*VAR_7)
   break;
  *VAR_7 = '\0';
  if (FUNC_6(VAR_9, VAR_3) == 1) {
   while (FUNC_5((unsigned char)*++VAR_7))
    ;
   if (!*VAR_7)
    break;
   for (VAR_8 = VAR_7 + 1; *VAR_8 &&
        !FUNC_5((unsigned char)*VAR_8); ++VAR_8)
    ;
   *VAR_8 = '\0';
   FUNC_8(VAR_4, VAR_7, VAR_5 - 1);
   VAR_4[VAR_5 - 1] = '\0';
   FUNC_0(VAR_10);
   return (VAR_4);
  }
 }
 FUNC_0(VAR_10);
 return (((void*)0));
}
