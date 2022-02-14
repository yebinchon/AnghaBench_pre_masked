
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cs4231_channel {scalar_t__ locked; } ;
struct cs4231_softc {int sc_flags; struct cs4231_channel sc_pch; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct cs4231_softc*) ;
 int FUNC_1 (struct cs4231_softc*) ;
 int VAR_1 ;
 int FUNC_2 (struct cs4231_softc*) ;
 int FUNC_3 (struct cs4231_softc*) ;
 struct cs4231_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_2)
{
 struct cs4231_softc *VAR_3;
 struct cs4231_channel *VAR_4, *VAR_5;
 int VAR_6;

 VAR_3 = FUNC_4(VAR_2);
 FUNC_0(VAR_3);
 VAR_4 = &VAR_3->sc_pch;
 VAR_5 = &VAR_3->sc_pch;
 if (VAR_4->locked || VAR_5->locked) {
  FUNC_1(VAR_3);
  return (VAR_1);
 }




 if ((VAR_3->sc_flags & VAR_0) != 0)
  FUNC_2(VAR_3);
 FUNC_1(VAR_3);
 VAR_6 = FUNC_5(VAR_2);
 if (VAR_6)
  return (VAR_6);
 FUNC_3(VAR_3);
 return (0);
}
