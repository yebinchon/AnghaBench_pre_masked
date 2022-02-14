
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (scalar_t__,int ,char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void
FUNC_3(void)
{
 int VAR_4;

 VAR_4 = FUNC_2(VAR_2, 0);
 if (VAR_4 == 0) return;
 if (VAR_3 == VAR_0)
  FUNC_1("Kernel does not have 'options MODULAR'.");
 else if (VAR_3 == VAR_1)
  FUNC_1("Module loading administratively forbidden");
 FUNC_0(VAR_3, 0, "unexpected error %d from "
     "modctl(MODCTL_EXISTS, 0)", VAR_3);
}
