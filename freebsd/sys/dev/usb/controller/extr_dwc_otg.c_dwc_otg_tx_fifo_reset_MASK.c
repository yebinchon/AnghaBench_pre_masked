
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct dwc_otg_softc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct dwc_otg_softc*,int ) ;
 int FUNC_1 (struct dwc_otg_softc*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_2(struct dwc_otg_softc *VAR_3, uint32_t VAR_4)
{
 uint32_t VAR_5;


 FUNC_1(VAR_3, VAR_0, VAR_4);


 for (VAR_5 = 0; VAR_5 != 16; VAR_5++) {
  VAR_4 = FUNC_0(VAR_3, VAR_0);
  if (!(VAR_4 & (VAR_2 | VAR_1)))
   break;
 }
}
