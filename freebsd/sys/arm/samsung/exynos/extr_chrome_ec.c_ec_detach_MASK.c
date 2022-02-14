
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ec_softc {scalar_t__ have_arbitrator; } ;
typedef int device_t ;


 int FUNC_0 (struct ec_softc*) ;
 struct ec_softc* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_0)
{
 struct ec_softc *VAR_1;

 VAR_1 = FUNC_1(VAR_0);

 if (VAR_1->have_arbitrator) {
  FUNC_0(VAR_1);
 }

 return (0);
}
