
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sigfunc ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int*,char***,char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (char*) ;
 int VAR_7 ;
 int VAR_8 ;
 char* FUNC_5 (char**,int ,int *) ;
 scalar_t__ FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int ) ;

void
FUNC_8(int VAR_9, char *VAR_10[])
{
 sigfunc VAR_11;
 int VAR_12;
 char *VAR_13;

 if (VAR_9 == 0 ||
     (VAR_9 == 1 && !FUNC_1(&VAR_9, &VAR_10, "remote-files"))) {
  FUNC_0("usage: %s [remote-files]\n", VAR_10[0]);
  VAR_2 = -1;
  return;
 }
 VAR_7 = 1;
 VAR_11 = FUNC_7(VAR_1, VAR_8);
 if (FUNC_6(VAR_6, 1))
  FUNC_4(VAR_10[0]);
 while ((VAR_13 = FUNC_5(VAR_10, 0, ((void*)0))) != ((void*)0)) {
  if (*VAR_13 == '\0') {
   VAR_7 = 0;
   continue;
  }
  if (VAR_7 && FUNC_3(VAR_10[0], VAR_13)) {
   if (FUNC_2("DELE %s", VAR_13) == VAR_0)
    VAR_3 = 1;
   if (!VAR_7 && VAR_4) {
    VAR_12 = VAR_5;
    VAR_5 = 1;
    if (FUNC_3(VAR_10[0], ((void*)0))) {
     VAR_7++;
    }
    VAR_5 = VAR_12;
   }
  }
 }
 (void)FUNC_7(VAR_1, VAR_11);
 VAR_7 = 0;
}
