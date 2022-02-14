
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct octeon_wdog_core_softc {scalar_t__ csc_core; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (int,char*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static int
FUNC_4(void *VAR_1)
{
 struct octeon_wdog_core_softc *VAR_2 = VAR_1;

 FUNC_1(VAR_2->csc_core == FUNC_2(),
     ("got watchdog interrupt for core %u on core %u.",
      VAR_2->csc_core, FUNC_2()));

 (void)VAR_2;


 FUNC_3(FUNC_0(FUNC_2()), 1);

 return (VAR_0);
}
