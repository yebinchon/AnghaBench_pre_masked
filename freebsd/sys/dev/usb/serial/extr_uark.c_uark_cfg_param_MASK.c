
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct ucom_softc {struct uark_softc* sc_parent; } ;
struct uark_softc {int dummy; } ;
struct termios {int c_ospeed; int c_cflag; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct uark_softc*,int,int) ;

__attribute__((used)) static void
FUNC_2(struct ucom_softc *VAR_10, struct termios *VAR_11)
{
 struct uark_softc *VAR_12 = VAR_10->sc_parent;
 uint32_t VAR_13 = VAR_11->c_ospeed;
 uint16_t VAR_14;





 VAR_14 = (VAR_4 + (VAR_13 / 2)) / VAR_13;

 FUNC_1(VAR_12, 3, 0x83);
 FUNC_1(VAR_12, 0, VAR_14 & 0xFF);
 FUNC_1(VAR_12, 1, VAR_14 >> 8);
 FUNC_1(VAR_12, 3, 0x03);

 if (VAR_11->c_cflag & VAR_1)
  VAR_14 = VAR_9;
 else
  VAR_14 = VAR_8;

 if (VAR_11->c_cflag & VAR_2) {
  if (VAR_11->c_cflag & VAR_3)
   VAR_14 |= VAR_7;
  else
   VAR_14 |= VAR_5;
 } else
  VAR_14 |= VAR_6;

 switch (VAR_11->c_cflag & VAR_0) {
 case 131:
  VAR_14 |= FUNC_0(5);
  break;
 case 130:
  VAR_14 |= FUNC_0(6);
  break;
 case 129:
  VAR_14 |= FUNC_0(7);
  break;
 default:
 case 128:
  VAR_14 |= FUNC_0(8);
  break;
 }
 FUNC_1(VAR_12, 3, 0x00);
 FUNC_1(VAR_12, 3, VAR_14);
}
