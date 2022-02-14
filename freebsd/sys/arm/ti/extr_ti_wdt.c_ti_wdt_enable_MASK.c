
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_wdt_softc {int dummy; } ;


 int FUNC_0 (char*,struct ti_wdt_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ti_wdt_softc*,int ) ;
 int FUNC_2 (struct ti_wdt_softc*,int ,int) ;

__attribute__((used)) static __inline void
FUNC_3(struct ti_wdt_softc *VAR_2)
{

 FUNC_0("enabling watchdog %p\n", VAR_2);
 FUNC_2(VAR_2, VAR_0, 0xBBBB);
 FUNC_1(VAR_2, VAR_1);
 FUNC_2(VAR_2, VAR_0, 0x4444);
 FUNC_1(VAR_2, VAR_1);
}
