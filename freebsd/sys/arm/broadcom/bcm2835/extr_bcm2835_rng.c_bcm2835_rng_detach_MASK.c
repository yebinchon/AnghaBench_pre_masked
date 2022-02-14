
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcm2835_rng_softc {int * sc_mem_res; int sc_rngto; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct bcm2835_rng_softc*) ;
 int FUNC_1 (int ,int ,int ,int *) ;
 int FUNC_2 (int *) ;
 struct bcm2835_rng_softc* FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_1)
{
 struct bcm2835_rng_softc *VAR_2;

 VAR_2 = FUNC_3(VAR_1);


 FUNC_0(VAR_2);


 FUNC_2(&VAR_2->sc_rngto);


 if (VAR_2->sc_mem_res != ((void*)0))
  FUNC_1(VAR_1, VAR_0, 0, VAR_2->sc_mem_res);

 return (0);
}
