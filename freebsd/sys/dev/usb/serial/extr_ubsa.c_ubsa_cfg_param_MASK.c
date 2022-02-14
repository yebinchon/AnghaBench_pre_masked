
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct ucom_softc {struct ubsa_softc* sc_parent; } ;
struct ubsa_softc {int sc_ucom; } ;
struct termios {int c_ospeed; int c_cflag; int c_iflag; } ;
 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,struct ubsa_softc*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_1 (struct ubsa_softc*,int ,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static void
FUNC_4(struct ucom_softc *VAR_19, struct termios *VAR_20)
{
 struct ubsa_softc *VAR_21 = VAR_19->sc_parent;
 uint16_t VAR_22 = 0;

 FUNC_0("sc = %p\n", VAR_21);

 switch (VAR_20->c_ospeed) {
 case 143:
  FUNC_1(VAR_21, VAR_16, 0);
  FUNC_2(&VAR_21->sc_ucom, 0);
  FUNC_3(&VAR_21->sc_ucom, 0);
  break;
 case 137:
 case 133:
 case 141:
 case 138:
 case 135:
 case 132:
 case 140:
 case 136:
 case 134:
 case 142:
 case 139:
  VAR_22 = 139 / VAR_20->c_ospeed;
  FUNC_1(VAR_21, VAR_14, VAR_22);
  break;
 default:
  return;
 }

 if (VAR_20->c_cflag & VAR_5)
  VAR_22 = (VAR_20->c_cflag & VAR_6) ? VAR_13 : VAR_11;
 else
  VAR_22 = VAR_12;

 FUNC_1(VAR_21, VAR_17, VAR_22);

 switch (VAR_20->c_cflag & VAR_1) {
 case 131:
  VAR_22 = 0;
  break;
 case 130:
  VAR_22 = 1;
  break;
 case 129:
  VAR_22 = 2;
  break;
 default:
 case 128:
  VAR_22 = 3;
  break;
 }

 FUNC_1(VAR_21, VAR_15, VAR_22);

 VAR_22 = (VAR_20->c_cflag & VAR_2) ? 1 : 0;

 FUNC_1(VAR_21, VAR_18, VAR_22);

 VAR_22 = 0;
 if (VAR_20->c_cflag & VAR_0)
  VAR_22 |= VAR_9 | VAR_7;

 if (VAR_20->c_iflag & (VAR_4 | VAR_3))
  VAR_22 |= VAR_10 | VAR_8;

 FUNC_1(VAR_21, VAR_16, VAR_22);
}
