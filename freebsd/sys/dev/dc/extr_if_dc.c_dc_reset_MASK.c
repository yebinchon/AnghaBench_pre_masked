
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dc_softc {int dc_dev; } ;


 int FUNC_0 (struct dc_softc*,int ) ;
 int FUNC_1 (struct dc_softc*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct dc_softc*,int ,int) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (struct dc_softc*) ;
 scalar_t__ FUNC_4 (struct dc_softc*) ;
 scalar_t__ FUNC_5 (struct dc_softc*) ;
 scalar_t__ FUNC_6 (struct dc_softc*) ;
 scalar_t__ FUNC_7 (struct dc_softc*) ;
 scalar_t__ FUNC_8 (struct dc_softc*) ;
 int VAR_4 ;
 int FUNC_9 (struct dc_softc*,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ,char*) ;

__attribute__((used)) static void
FUNC_12(struct dc_softc *VAR_9)
{
 int VAR_10;

 FUNC_9(VAR_9, VAR_1, VAR_2);

 for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++) {
  FUNC_10(10);
  if (!(FUNC_0(VAR_9, VAR_1) & VAR_2))
   break;
 }

 if (FUNC_4(VAR_9) || FUNC_3(VAR_9) || FUNC_5(VAR_9) ||
     FUNC_8(VAR_9) || FUNC_6(VAR_9) || FUNC_7(VAR_9)) {
  FUNC_10(10000);
  FUNC_2(VAR_9, VAR_1, VAR_2);
  VAR_10 = 0;
 }

 if (VAR_10 == VAR_7)
  FUNC_11(VAR_9->dc_dev, "reset never completed!\n");


 FUNC_10(1000);

 FUNC_1(VAR_9, VAR_3, 0x00000000);
 FUNC_1(VAR_9, VAR_1, 0x00000000);
 FUNC_1(VAR_9, VAR_4, 0x00000000);







 if (FUNC_6(VAR_9)) {
  FUNC_9(VAR_9, VAR_5, VAR_6);
  FUNC_1(VAR_9, VAR_0, 0xFFFFFFFF);
  FUNC_1(VAR_9, VAR_8, 0);
 }
}
