
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ec_softc {scalar_t__ have_arbitrator; int dev; } ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ec_softc*) ;
 int FUNC_1 (struct ec_softc*) ;
 struct ec_softc* FUNC_2 (int ) ;
 struct ec_softc* VAR_1 ;

__attribute__((used)) static int
FUNC_3(device_t VAR_2)
{
 struct ec_softc *VAR_3;

 VAR_3 = FUNC_2(VAR_2);
 VAR_3->dev = VAR_2;

 VAR_1 = VAR_3;

 FUNC_1(VAR_3);
 if (VAR_3->have_arbitrator && FUNC_0(VAR_3) != 0) {
  return (VAR_0);
 }

 return (0);
}
