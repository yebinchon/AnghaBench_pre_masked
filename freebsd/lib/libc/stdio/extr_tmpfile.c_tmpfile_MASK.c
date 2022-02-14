
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sigset_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 int FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char**,char*,char const*,char*,int ) ;
 int VAR_4 ;
 int * FUNC_3 (int,char*) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char*) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char const*) ;
 int FUNC_10 (char*) ;

FILE *
FUNC_11(void)
{
 sigset_t VAR_5, VAR_6;
 FILE *VAR_7;
 int VAR_8, VAR_9;

 char *VAR_10;
 const char *VAR_11;

 VAR_11 = ((void*)0);
 if (FUNC_6() == 0)
  VAR_11 = FUNC_5("TMPDIR");
 if (VAR_11 == ((void*)0))
  VAR_11 = VAR_3;

 (void)FUNC_2(&VAR_10, "%s%s%d", VAR_11,
     (VAR_11[FUNC_9(VAR_11) - 1] == '/') ? "" : "/", "tmp.XXXXXX");
 if (VAR_10 == ((void*)0))
  return (((void*)0));

 FUNC_8(&VAR_5);
 (void)FUNC_0(VAR_0, &VAR_5, &VAR_6);

 VAR_8 = FUNC_7(VAR_10);
 if (VAR_8 != -1)
  (void)FUNC_10(VAR_10);

 FUNC_4(VAR_10);

 (void)FUNC_0(VAR_1, &VAR_6, ((void*)0));

 if (VAR_8 == -1)
  return (((void*)0));

 if ((VAR_7 = FUNC_3(VAR_8, "w+")) == ((void*)0)) {
  VAR_9 = VAR_4;
  (void)FUNC_1(VAR_8);
  VAR_4 = VAR_9;
  return (((void*)0));
 }
 return (VAR_7);
}
