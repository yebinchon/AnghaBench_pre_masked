
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct dwc_softc {int mii_clk; } ;
typedef int device_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct dwc_softc*,int ) ;
 int FUNC_2 (struct dwc_softc*,int ,int) ;
 struct dwc_softc* FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_8, int VAR_9, int VAR_10)
{
 struct dwc_softc *VAR_11;
 uint16_t VAR_12;
 size_t VAR_13;
 int VAR_14 = 0;

 VAR_11 = FUNC_3(VAR_8);

 VAR_12 = ((VAR_9 & VAR_5) << VAR_6)
     | ((VAR_10 & VAR_3) << VAR_4)
     | (VAR_11->mii_clk << VAR_1)
     | VAR_2;

 FUNC_2(VAR_11, VAR_0, VAR_12);

 for (VAR_13 = 0; VAR_13 < 1000; VAR_13++) {
  if (!(FUNC_1(VAR_11, VAR_0) & VAR_2)) {
   VAR_14 = FUNC_1(VAR_11, VAR_7);
   break;
  }
  FUNC_0(10);
 }

 return VAR_14;
}
