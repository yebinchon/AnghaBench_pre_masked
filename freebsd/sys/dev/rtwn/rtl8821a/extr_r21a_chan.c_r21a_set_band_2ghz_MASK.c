
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct rtwn_softc {struct r12a_softc* sc_priv; } ;
struct r12a_softc {scalar_t__ ext_lna_2g; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct rtwn_softc*) ;
 int FUNC_4 (struct rtwn_softc*,int ,int,int) ;
 int FUNC_5 (struct rtwn_softc*,int ) ;
 int FUNC_6 (struct rtwn_softc*,int ,int ) ;

void
FUNC_7(struct rtwn_softc *VAR_8, uint32_t VAR_9)
{
 struct r12a_softc *VAR_10 = VAR_8->sc_priv;


 FUNC_4(VAR_8, VAR_2,
     0, VAR_3 | VAR_4);


 FUNC_4(VAR_8, FUNC_1(0),
     VAR_5, 0x7000);
 FUNC_4(VAR_8, FUNC_1(0),
     VAR_6, 0x70);

 if (VAR_10->ext_lna_2g) {

  FUNC_4(VAR_8, FUNC_0(0), 0, 0x00100000);
  FUNC_4(VAR_8, FUNC_0(0), 0x00400000, 0);
  FUNC_4(VAR_8, FUNC_1(0), 0x05, 0x02);
  FUNC_4(VAR_8, FUNC_1(0), 0x0500, 0x0200);
 } else {

  FUNC_3(VAR_8);
 }


 FUNC_4(VAR_8, FUNC_2(0), 0x0f00, 0);

 FUNC_4(VAR_8, VAR_7, 0xf0, 0x10);
 FUNC_4(VAR_8, VAR_1, 0x0f000000, 0x01000000);


 FUNC_5(VAR_8, VAR_9);

 FUNC_6(VAR_8, VAR_0, 0);
}
