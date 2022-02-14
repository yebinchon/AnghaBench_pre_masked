
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct rtwn_softc {struct r12a_softc* sc_priv; } ;
struct r12a_softc {int rfe_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct rtwn_softc*,int ,int,int) ;
 int FUNC_3 (struct rtwn_softc*,int ,int) ;
 int FUNC_4 (struct rtwn_softc*,int ) ;
 int FUNC_5 (struct rtwn_softc*,int ,int,int ) ;
 int FUNC_6 (struct rtwn_softc*,int ,int) ;

void
FUNC_7(struct rtwn_softc *VAR_10, uint32_t VAR_11)
{
 struct r12a_softc *VAR_12 = VAR_10->sc_priv;


 FUNC_2(VAR_10, VAR_4,
     0, VAR_5 | VAR_6);

 FUNC_2(VAR_10, VAR_1, 0x02, 0x01);
 FUNC_2(VAR_10, VAR_7, 0x3e000, 0x2e000);


 FUNC_2(VAR_10, VAR_8, 0x03, 0);

 switch (VAR_12->rfe_type) {
 case 0:
 case 1:
 case 2:
  FUNC_3(VAR_10, FUNC_1(0), 0x77777777);
  FUNC_3(VAR_10, FUNC_1(1), 0x77777777);
  FUNC_2(VAR_10, FUNC_0(0), 0x3ff00000, 0);
  FUNC_2(VAR_10, FUNC_0(1), 0x3ff00000, 0);
  break;
 case 3:
  FUNC_3(VAR_10, FUNC_1(0), 0x54337770);
  FUNC_3(VAR_10, FUNC_1(1), 0x54337770);
  FUNC_2(VAR_10, FUNC_0(0), 0x3ff00000, 0x01000000);
  FUNC_2(VAR_10, FUNC_0(1), 0x3ff00000, 0x01000000);
  FUNC_2(VAR_10, VAR_0, 0x0303, 0x01);
  break;
 case 4:
  FUNC_3(VAR_10, FUNC_1(0), 0x77777777);
  FUNC_3(VAR_10, FUNC_1(1), 0x77777777);
  FUNC_2(VAR_10, FUNC_0(0), 0x3ff00000, 0x00100000);
  FUNC_2(VAR_10, FUNC_0(1), 0x3ff00000, 0x00100000);
  break;
 case 5:
  FUNC_6(VAR_10, FUNC_1(0) + 2, 0x77);
  FUNC_3(VAR_10, FUNC_1(1), 0x77777777);
  FUNC_5(VAR_10, FUNC_0(0) + 3, 0x01, 0);
  FUNC_2(VAR_10, FUNC_0(1), 0x3ff00000, 0);
  break;
 default:
  break;
 }

 FUNC_2(VAR_10, VAR_9, 0xf0, 0x10);
 FUNC_2(VAR_10, VAR_3, 0x0f000000, 0x01000000);


 FUNC_4(VAR_10, VAR_11);

 FUNC_6(VAR_10, VAR_2, 0);
}
