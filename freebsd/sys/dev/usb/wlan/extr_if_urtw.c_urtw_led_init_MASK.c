
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ usb_error_t ;
typedef int uint32_t ;
struct urtw_softc {int sc_gpio_ledpin; int sc_strategy; int sc_psr; } ;




 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct urtw_softc*,int ,int*) ;
 int FUNC_1 (struct urtw_softc*,int ,int *) ;

__attribute__((used)) static usb_error_t
FUNC_2(struct urtw_softc *VAR_8)
{
 uint32_t VAR_9;
 usb_error_t VAR_10;

 FUNC_1(VAR_8, VAR_4, &VAR_8->sc_psr);
 VAR_10 = FUNC_0(VAR_8, VAR_1, &VAR_9);
 if (VAR_10 != 0)
  goto fail;

 switch (VAR_9 & VAR_0) {
 case 132:
  VAR_8->sc_strategy = VAR_6;
  break;
 case 128:
  VAR_8->sc_strategy = VAR_7;
  break;
 case 131:
  VAR_8->sc_strategy = VAR_2;
  break;
 case 130:
 case 129:
 default:
  VAR_8->sc_strategy = VAR_5;
  break;
 }

 VAR_8->sc_gpio_ledpin = VAR_3;

fail:
 return (VAR_10);
}
