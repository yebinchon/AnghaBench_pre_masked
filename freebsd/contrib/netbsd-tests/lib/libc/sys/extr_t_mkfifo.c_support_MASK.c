
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 (int ,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(void)
{

 VAR_1 = 0;

 if (FUNC_3(VAR_2, 0600) == 0) {
  FUNC_0(FUNC_4(VAR_2) == 0);
  return;
 }

 if (VAR_1 == VAR_0)
  FUNC_2("the kernel does not support FIFOs");
 else {
  FUNC_1("mkfifo(2) failed");
 }
}
