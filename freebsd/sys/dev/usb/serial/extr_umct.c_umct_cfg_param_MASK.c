
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct umct_softc {int sc_lcr; } ;
struct ucom_softc {struct umct_softc* sc_parent; } ;
struct termios {int c_cflag; int c_ospeed; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct umct_softc*,int ,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct ucom_softc *VAR_8, struct termios *VAR_9)
{
 struct umct_softc *VAR_10 = VAR_8->sc_parent;
 uint32_t VAR_11;

 VAR_11 = FUNC_0(VAR_9->c_ospeed);
 FUNC_1(VAR_10, VAR_4, VAR_5, VAR_11);

 VAR_11 = (VAR_10->sc_lcr & 0x40);

 switch (VAR_9->c_cflag & VAR_0) {
 case 131:
  VAR_11 |= 0x0;
  break;
 case 130:
  VAR_11 |= 0x1;
  break;
 case 129:
  VAR_11 |= 0x2;
  break;
 default:
 case 128:
  VAR_11 |= 0x3;
  break;
 }

 VAR_11 |= (VAR_9->c_cflag & VAR_1) ? 0x4 : 0;
 if (VAR_9->c_cflag & VAR_2) {
  VAR_11 |= 0x8;
  VAR_11 |= (VAR_9->c_cflag & VAR_3) ? 0x0 : 0x10;
 }





 VAR_10->sc_lcr = VAR_11;
 FUNC_1(VAR_10, VAR_6, VAR_7, VAR_11);
}
