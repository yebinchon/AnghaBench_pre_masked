
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtwn_softc {struct r12a_softc* sc_priv; } ;
struct r12a_softc {int ampdu_max_time; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct rtwn_softc*) ;
 int FUNC_1 (struct rtwn_softc*) ;
 int FUNC_2 (struct rtwn_softc*) ;
 int FUNC_3 (struct rtwn_softc*,int ,int ,int) ;
 int FUNC_4 (struct rtwn_softc*,int,int) ;
 int FUNC_5 (struct rtwn_softc*,int,int) ;
 int FUNC_6 (struct rtwn_softc*,int ,int) ;

void
FUNC_7(struct rtwn_softc *VAR_11)
{
 struct r12a_softc *VAR_12 = VAR_11->sc_priv;


 FUNC_4(VAR_11, 0xf050, 0x01);


 FUNC_5(VAR_11, VAR_7, 0x7400);

 FUNC_4(VAR_11, VAR_7 + 1, 0xf5);


 FUNC_4(VAR_11, VAR_1, VAR_12->ampdu_max_time);
 FUNC_6(VAR_11, VAR_0, 0xffffffff);


 FUNC_4(VAR_11, VAR_10, 0x50);
 FUNC_4(VAR_11, VAR_9, 0x50);

 FUNC_2(VAR_11);


 FUNC_3(VAR_11, VAR_2, 0,
     VAR_3);


 FUNC_4(VAR_11, VAR_8, 0x18);

 FUNC_4(VAR_11, VAR_5, 0);

 FUNC_5(VAR_11, VAR_4, 0x1f1f);

 FUNC_1(VAR_11);


 FUNC_3(VAR_11, VAR_6, 0, 0x60);

 FUNC_0(VAR_11);
}
