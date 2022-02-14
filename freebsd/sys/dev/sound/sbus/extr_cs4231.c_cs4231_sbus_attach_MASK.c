
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cs4231_softc {int sc_burst; int sc_nmres; int sc_nires; int sc_flags; int sc_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct cs4231_softc*) ;
 struct cs4231_softc* FUNC_1 (int,int ,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_7)
{
 struct cs4231_softc *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_1(sizeof(*VAR_8), VAR_1, VAR_2 | VAR_3);
 VAR_8->sc_dev = VAR_7;




 VAR_9 = FUNC_2(VAR_8->sc_dev);
 if ((VAR_9 & VAR_6))
  VAR_8->sc_burst = 64;
 else if ((VAR_9 & VAR_5))
  VAR_8->sc_burst = 32;
 else if ((VAR_9 & VAR_4))
  VAR_8->sc_burst = 16;
 else
  VAR_8->sc_burst = 0;
 VAR_8->sc_flags = VAR_0;
 VAR_8->sc_nmres = 1;
 VAR_8->sc_nires = 1;
 return FUNC_0(VAR_8);
}
