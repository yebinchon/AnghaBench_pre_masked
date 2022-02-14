
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct usb_fifo {int dummy; } ;
struct ufm_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;





 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ufm_softc*,void*) ;
 int FUNC_1 (struct ufm_softc*,void*) ;
 int FUNC_2 (struct ufm_softc*,void*) ;
 int FUNC_3 (struct ufm_softc*,void*) ;
 int FUNC_4 (struct ufm_softc*,void*) ;
 struct ufm_softc* FUNC_5 (struct usb_fifo*) ;

__attribute__((used)) static int
FUNC_6(struct usb_fifo *VAR_4, u_long VAR_5, void *VAR_6,
    int VAR_7)
{
 struct ufm_softc *VAR_8 = FUNC_5(VAR_4);
 int VAR_9 = 0;

 if ((VAR_7 & (VAR_3 | VAR_2)) != (VAR_3 | VAR_2)) {
  return (VAR_0);
 }

 switch (VAR_5) {
 case 130:
  VAR_9 = FUNC_2(VAR_8, VAR_6);
  break;
 case 132:
  VAR_9 = FUNC_0(VAR_8, VAR_6);
  break;
 case 129:
  VAR_9 = FUNC_3(VAR_8, VAR_6);
  break;
 case 128:
  VAR_9 = FUNC_4(VAR_8, VAR_6);
  break;
 case 131:
  VAR_9 = FUNC_1(VAR_8, VAR_6);
  break;
 default:
  VAR_9 = VAR_1;
  break;
 }
 return (VAR_9);
}
