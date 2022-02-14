
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ffec_softc {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ffec_softc*) ;
 int FUNC_1 (struct ffec_softc*) ;
 int FUNC_2 (struct ffec_softc*,int ) ;
 int FUNC_3 (struct ffec_softc*,int ,int) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct ffec_softc*) ;
 int FUNC_6 (struct ffec_softc*) ;
 int FUNC_7 (struct ffec_softc*) ;
 int FUNC_8 (struct ffec_softc*) ;

__attribute__((used)) static void
FUNC_9(void *VAR_4)
{
 struct ffec_softc *VAR_5;
 uint32_t VAR_6;

 VAR_5 = VAR_4;

 FUNC_0(VAR_5);

 VAR_6 = FUNC_2(VAR_5, VAR_1);

 if (VAR_6 & VAR_3) {
  FUNC_3(VAR_5, VAR_1, VAR_3);
  FUNC_8(VAR_5);
 }

 if (VAR_6 & VAR_2) {
  FUNC_3(VAR_5, VAR_1, VAR_2);
  FUNC_6(VAR_5);
 }
 if (VAR_6 & VAR_0) {
  FUNC_3(VAR_5, VAR_1, VAR_0);
  FUNC_4(VAR_5->dev,
      "Ethernet DMA error, restarting controller.\n");
  FUNC_7(VAR_5);
  FUNC_5(VAR_5);
 }

 FUNC_1(VAR_5);

}
