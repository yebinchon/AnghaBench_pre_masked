
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
typedef int token_t ;
struct auditinfo_addr {int ai_termid; } ;
typedef int pid_t ;
typedef int aia ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char**,char*,int ) ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 () ;
 int * FUNC_3 (char*) ;
 int * FUNC_4 (int ,int ) ;
 int * FUNC_5 (int ,int ,int ,int ,int ,int ,int ,int *) ;
 int * FUNC_6 (char*) ;
 int FUNC_7 (int,int *) ;
 int FUNC_8 (struct auditinfo_addr*,int) ;
 int FUNC_9 (char*) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 () ;

int
FUNC_16(int VAR_8, char *VAR_9)
{
 int VAR_10;
 uid_t VAR_11;
 pid_t VAR_12;
 char *VAR_13 = ((void*)0);
 token_t *VAR_14;
 struct auditinfo_addr VAR_15;

 if (VAR_8 == VAR_7)
  FUNC_0(&VAR_13, "%d::Audit startup", FUNC_14());
 else if (VAR_8 == VAR_6)
  FUNC_0(&VAR_13, "%d::Audit shutdown", FUNC_14());
 else if (VAR_8 == VAR_5)
  FUNC_0(&VAR_13, "%d::Audit recovery", FUNC_14());
 else
  return (VAR_2);
 if (VAR_13 == ((void*)0))
  return (VAR_4);

 if ((VAR_10 = FUNC_2()) == -1) {
  FUNC_9(VAR_13);
  return (VAR_1);
 }
 FUNC_8(&VAR_15, sizeof(VAR_15));
 VAR_11 = FUNC_15(); VAR_12 = FUNC_13();
 if ((VAR_14 = FUNC_5(VAR_11, FUNC_11(), FUNC_10(), VAR_11, FUNC_12(),
     VAR_12, VAR_12, &VAR_15.ai_termid)) != ((void*)0))
  FUNC_7(VAR_10, VAR_14);
 if ((VAR_14 = FUNC_6(VAR_13)) != ((void*)0))
  FUNC_7(VAR_10, VAR_14);
 FUNC_9(VAR_13);
 if (VAR_9 != ((void*)0) && (VAR_14 = FUNC_3(VAR_9)) != ((void*)0))
  FUNC_7(VAR_10, VAR_14);
 if ((VAR_14 = FUNC_4(0, 0)) != ((void*)0))
  FUNC_7(VAR_10, VAR_14);
 if (FUNC_1(VAR_10, 1, VAR_8) == -1)
  return (VAR_0);

 return (VAR_3);
}
