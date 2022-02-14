
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dtsec_softc {scalar_t__ sc_mode; int sc_lock; int * sc_ifnet; } ;
typedef int * if_t ;
typedef int device_t ;


 int FUNC_0 (struct dtsec_softc*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct dtsec_softc*) ;
 struct dtsec_softc* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct dtsec_softc*) ;
 int FUNC_5 (struct dtsec_softc*) ;
 int FUNC_6 (struct dtsec_softc*) ;
 int FUNC_7 (struct dtsec_softc*) ;
 int FUNC_8 (struct dtsec_softc*) ;
 int FUNC_9 (struct dtsec_softc*) ;
 int FUNC_10 (struct dtsec_softc*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

int
FUNC_14(device_t VAR_1)
{
 struct dtsec_softc *VAR_2;
 if_t VAR_3;

 VAR_2 = FUNC_2(VAR_1);
 VAR_3 = VAR_2->sc_ifnet;

 if (FUNC_3(VAR_1)) {
  FUNC_11(VAR_3);

  FUNC_0(VAR_2);
  FUNC_6(VAR_2);
  FUNC_1(VAR_2);
 }

 if (VAR_2->sc_ifnet) {
  FUNC_12(VAR_2->sc_ifnet);
  VAR_2->sc_ifnet = ((void*)0);
 }

 if (VAR_2->sc_mode == VAR_0) {

  FUNC_8(VAR_2);
  FUNC_9(VAR_2);


  FUNC_7(VAR_2);


  FUNC_10(VAR_2);
 }

 FUNC_4(VAR_2);
 FUNC_5(VAR_2);


 FUNC_13(&VAR_2->sc_lock);

 return (0);
}
