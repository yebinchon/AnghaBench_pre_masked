
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ucycom_softc {int sc_cfg; } ;
struct ucom_softc {struct ucycom_softc* sc_parent; } ;
struct termios {int c_cflag; int c_ospeed; } ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct ucycom_softc*,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct ucom_softc *VAR_8, struct termios *VAR_9)
{
 struct ucycom_softc *VAR_10 = VAR_8->sc_parent;
 uint8_t VAR_11;

 FUNC_0("\n");

 if (VAR_9->c_cflag & VAR_0) {
  VAR_11 = VAR_10->sc_cfg;
 } else {
  VAR_11 = 0;
  switch (VAR_9->c_cflag & VAR_1) {
  default:
  case 128:
   ++VAR_11;
  case 129:
   ++VAR_11;
  case 130:
   ++VAR_11;
  case 131:
   break;
  }

  if (VAR_9->c_cflag & VAR_2)
   VAR_11 |= VAR_7;
  if (VAR_9->c_cflag & VAR_3)
   VAR_11 |= VAR_5;
  if (VAR_9->c_cflag & VAR_4)
   VAR_11 |= VAR_6;
 }

 FUNC_1(VAR_10, VAR_9->c_ospeed, VAR_11);
}
