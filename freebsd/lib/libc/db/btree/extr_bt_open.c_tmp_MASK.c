
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sigset_t ;
typedef int path ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int *,int *) ;
 int VAR_5 ;
 char* FUNC_1 (char*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int,char*,char*) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int
FUNC_7(void)
{
 sigset_t VAR_6, VAR_7;
 int VAR_8, VAR_9;
 char *VAR_10 = ((void*)0);
 char VAR_11[VAR_1];

 if (FUNC_2() == 0)
  VAR_10 = FUNC_1("TMPDIR");
 VAR_9 = FUNC_5(VAR_11,
     sizeof(VAR_11), "%s/bt.XXXXXXXXXX", VAR_10 ? VAR_10 : "/tmp");
 if (VAR_9 < 0 || VAR_9 >= (int)sizeof(VAR_11)) {
  VAR_5 = VAR_0;
  return(-1);
 }

 (void)FUNC_4(&VAR_6);
 (void)FUNC_0(VAR_3, &VAR_6, &VAR_7);
 if ((VAR_8 = FUNC_3(VAR_11, VAR_2)) != -1)
  (void)FUNC_6(VAR_11);
 (void)FUNC_0(VAR_4, &VAR_7, ((void*)0));
 return(VAR_8);
}
