
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cs4231_softc {int sc_flags; int sc_nires; int sc_nmres; int sc_burst; int sc_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct cs4231_softc*) ;
 int FUNC_1 (int ,char*) ;
 struct cs4231_softc* FUNC_2 (int,int ,int) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_8)
{
 struct cs4231_softc *VAR_9;

 VAR_9 = FUNC_2(sizeof(struct cs4231_softc), VAR_5, VAR_6 | VAR_7);
 if (VAR_9 == ((void*)0)) {
  FUNC_1(VAR_8, "cannot allocate softc\n");
  return (VAR_4);
 }
 VAR_9->sc_dev = VAR_8;
 VAR_9->sc_burst = VAR_3;
 VAR_9->sc_nmres = VAR_2;
 VAR_9->sc_nires = VAR_1;
 VAR_9->sc_flags = VAR_0;
 return FUNC_0(VAR_9);
}
