
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ,char*,...) ;

__attribute__((used)) static void
FUNC_2(void)
{
    uint32_t VAR_1, VAR_2, VAR_3;

    VAR_1 = FUNC_0();
    VAR_2 = FUNC_0();
    VAR_3 = FUNC_0();

    FUNC_1(VAR_0, "timer test in progress, reboot to quit.\n");
    for (;;) {




 if (VAR_3 > VAR_1) {
     if (VAR_2 < VAR_1 || VAR_2 > VAR_3)
  FUNC_1(VAR_0,
         "timer is not monotonic: 0x%08x,0x%08x,0x%08x\n",
         VAR_1, VAR_2, VAR_3);
 }
 VAR_1 = VAR_2;
 VAR_2 = VAR_3;
 VAR_3 = FUNC_0();
    }
}
