
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct dwc_softc {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct dwc_softc*) ;
 int FUNC_1 (struct dwc_softc*) ;
 int VAR_7 ;
 int FUNC_2 (struct dwc_softc*,int ) ;
 int VAR_8 ;
 int FUNC_3 (struct dwc_softc*,int ,int) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct dwc_softc*) ;
 int FUNC_6 (struct dwc_softc*) ;
 int FUNC_7 (struct dwc_softc*) ;
 int FUNC_8 (struct dwc_softc*) ;
 int FUNC_9 (struct dwc_softc*) ;

__attribute__((used)) static void
FUNC_10(void *VAR_9)
{
 struct dwc_softc *VAR_10;
 uint32_t VAR_11;

 VAR_10 = VAR_9;

 FUNC_0(VAR_10);

 VAR_11 = FUNC_2(VAR_10, VAR_7);
 if (VAR_11)
  FUNC_2(VAR_10, VAR_8);

 VAR_11 = FUNC_2(VAR_10, VAR_0);
 if (VAR_11 & VAR_4) {
  if (VAR_11 & VAR_5)
   FUNC_6(VAR_10);

  if (VAR_11 & VAR_6) {
   FUNC_8(VAR_10);
   FUNC_9(VAR_10);
  }
 }

 if (VAR_11 & VAR_1) {
  if (VAR_11 & VAR_2) {

   FUNC_4(VAR_10->dev,
       "Ethernet DMA error, restarting controller.\n");
   FUNC_7(VAR_10);
   FUNC_5(VAR_10);
  }
 }

 FUNC_3(VAR_10, VAR_0, VAR_11 & VAR_3);
 FUNC_1(VAR_10);
}
