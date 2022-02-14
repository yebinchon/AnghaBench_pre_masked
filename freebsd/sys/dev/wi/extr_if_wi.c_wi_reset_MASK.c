
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wi_softc {int sc_reset; int sc_dev; } ;


 int FUNC_0 (struct wi_softc*,int ,int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct wi_softc*,int ,int ,int ,int ) ;
 int FUNC_4 (struct wi_softc*,int ,int) ;

__attribute__((used)) static int
FUNC_5(struct wi_softc *VAR_6)
{

 int VAR_7, VAR_8 = 0;

 for (VAR_7 = 0; VAR_7 < 3; VAR_7++) {
  VAR_8 = FUNC_3(VAR_6, VAR_0, 0, 0, 0);
  if (VAR_8 == 0)
   break;
  FUNC_1(VAR_1 * 1000);
 }
 VAR_6->sc_reset = 1;
 if (VAR_7 == 3) {
  FUNC_2(VAR_6->sc_dev, "reset failed\n");
  return VAR_8;
 }

 FUNC_0(VAR_6, VAR_4, 0);
 FUNC_0(VAR_6, VAR_2, 0xFFFF);


 FUNC_4(VAR_6, VAR_5, 8);

 return 0;

}
