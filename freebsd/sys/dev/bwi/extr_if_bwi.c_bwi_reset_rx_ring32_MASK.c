
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct bwi_softc {int sc_dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct bwi_softc*,scalar_t__) ;
 int FUNC_1 (struct bwi_softc*,scalar_t__,int ) ;
 int FUNC_2 (int) ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static void
FUNC_5(struct bwi_softc *VAR_6, uint32_t VAR_7)
{
 int VAR_8;

 FUNC_1(VAR_6, VAR_7 + VAR_0, 0);



 for (VAR_8 = 0; VAR_8 < 10; ++VAR_8) {
  uint32_t VAR_9;

  VAR_9 = FUNC_0(VAR_6, VAR_7 + VAR_2);
  if (FUNC_3(VAR_9, VAR_4) ==
      VAR_3)
   break;

  FUNC_2(1000);
 }
 if (VAR_8 == 10)
  FUNC_4(VAR_6->sc_dev, "reset rx ring timedout\n");



 FUNC_1(VAR_6, VAR_7 + VAR_1, 0);
}
