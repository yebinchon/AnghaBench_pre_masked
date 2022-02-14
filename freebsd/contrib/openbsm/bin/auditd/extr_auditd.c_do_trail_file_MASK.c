
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 () ;

__attribute__((used)) static int
FUNC_7(void)
{
 int VAR_5;




 VAR_5 = FUNC_4(VAR_4, VAR_3);
 if (VAR_5) {
  FUNC_3("auditd_read_dirs(): %s",
      FUNC_5(VAR_5));
  if (VAR_5 == VAR_0)
   FUNC_0();
  if (VAR_5 != VAR_1)
   return (-1);
  else
   FUNC_1();

 }




 if (FUNC_6() == -1) {





  return (-1);
 }




 VAR_5 = FUNC_2(VAR_2);
 if (VAR_5)
  FUNC_3("auditd_expire_trails(): %s",
      FUNC_5(VAR_5));

 return (0);
}
