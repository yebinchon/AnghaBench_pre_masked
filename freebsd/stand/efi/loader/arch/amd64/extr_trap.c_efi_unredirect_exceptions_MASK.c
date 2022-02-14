
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amd64tss {scalar_t__ tss_ist1; } ;
typedef int register_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (int ) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static void
FUNC_6(void)
{
 register_t VAR_8;

 if (VAR_3 == 0)
  return;

 VAR_8 = FUNC_2();
 if (VAR_2 != 0)
  (&(((struct amd64tss *)VAR_7)->tss_ist1))[VAR_2 - 1] = 0;
 if (VAR_4 != 0)
  FUNC_0(&VAR_0);
 if (VAR_5 != 0)
  FUNC_5(VAR_6);
 FUNC_4(&VAR_1);
 FUNC_3(VAR_8);
 FUNC_1();
}
