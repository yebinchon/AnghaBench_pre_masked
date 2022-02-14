
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
struct urtw_softc {int sc_strategy; } ;


 int FUNC_0 (struct urtw_softc*,int ,char*,int) ;
 int VAR_0 ;




 int VAR_1 ;
 int FUNC_1 (struct urtw_softc*,int) ;
 int FUNC_2 (struct urtw_softc*,int) ;
 int FUNC_3 (struct urtw_softc*,int) ;
 int FUNC_4 (struct urtw_softc*,int) ;

__attribute__((used)) static usb_error_t
FUNC_5(struct urtw_softc *VAR_2, int VAR_3)
{
 usb_error_t VAR_4 = 0;

 switch (VAR_2->sc_strategy) {
 case 131:
  VAR_4 = FUNC_1(VAR_2, VAR_3);
  break;
 case 130:
  VAR_4 = FUNC_2(VAR_2, VAR_3);
  break;
 case 129:
  VAR_4 = FUNC_3(VAR_2, VAR_3);
  break;
 case 128:
  VAR_4 = FUNC_4(VAR_2, VAR_3);
  break;
 default:
  FUNC_0(VAR_2, VAR_0,
      "unsupported LED mode %d\n", VAR_2->sc_strategy);
  VAR_4 = VAR_1;
  break;
 }

 return (VAR_4);
}
