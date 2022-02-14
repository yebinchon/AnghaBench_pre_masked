
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_softc {scalar_t__ ti_hwrev; } ;


 int FUNC_0 (struct ti_softc*,int) ;
 int FUNC_1 (struct ti_softc*,int,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct ti_softc*,int,int) ;

__attribute__((used)) static int
FUNC_3(struct ti_softc *VAR_4)
{

 if (!(FUNC_0(VAR_4, VAR_3) & VAR_2)) {
  FUNC_1(VAR_4, 0x600, 0);
  FUNC_1(VAR_4, 0x604, 0);
  FUNC_1(VAR_4, 0x600, 0x5555AAAA);
  if (FUNC_0(VAR_4, 0x604) == 0x5555AAAA) {
   if (VAR_4->ti_hwrev == VAR_1)
    return (VAR_0);
   else {
    FUNC_2(VAR_4, VAR_3,
        VAR_2);
    return (0);
   }
  }
 }

 return (0);
}
