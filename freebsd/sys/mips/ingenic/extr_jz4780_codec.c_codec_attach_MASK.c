
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct codec_softc {int * res; int clk; int bsh; int bst; int dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (struct codec_softc*) ;
 scalar_t__ FUNC_4 (int ,int ,char*,int *) ;
 int FUNC_5 (struct codec_softc*,int ) ;
 int VAR_18 ;
 int FUNC_6 (struct codec_softc*,int ,int) ;
 struct codec_softc* FUNC_7 (int ) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int
FUNC_11(device_t VAR_19)
{
 struct codec_softc *VAR_20;
 uint8_t VAR_21;

 VAR_20 = FUNC_7(VAR_19);
 VAR_20->dev = VAR_19;

 if (FUNC_1(VAR_19, VAR_18, VAR_20->res)) {
  FUNC_8(VAR_19, "could not allocate resources for device\n");
  return (VAR_11);
 }


 VAR_20->bst = FUNC_10(VAR_20->res[0]);
 VAR_20->bsh = FUNC_9(VAR_20->res[0]);

 if (FUNC_4(VAR_19, 0, "i2s", &VAR_20->clk) != 0) {
  FUNC_8(VAR_19, "could not get i2s clock\n");
  FUNC_2(VAR_19, VAR_18, VAR_20->res);
  return (VAR_11);
 }


 VAR_21 = FUNC_5(VAR_20, VAR_6);
 VAR_21 &= ~(VAR_17 | VAR_16);
 FUNC_6(VAR_20, VAR_6, VAR_21);

 FUNC_0(20000);

 VAR_21 = FUNC_5(VAR_20, VAR_4);
 VAR_21 &= ~(VAR_10 | VAR_9);
 FUNC_6(VAR_20, VAR_4, VAR_21);

 FUNC_0(10000);


 VAR_21 = FUNC_5(VAR_20, VAR_0);
 VAR_21 &= ~(VAR_1 | VAR_8);
 VAR_21 |= VAR_7;
 VAR_21 &= ~(VAR_3);
 VAR_21 |= VAR_2;
 FUNC_6(VAR_20, VAR_0, VAR_21);

 FUNC_0(10000);

 VAR_21 = VAR_13;
 FUNC_6(VAR_20, VAR_12, VAR_21);

 FUNC_0(10000);


 VAR_21 = FUNC_5(VAR_20, VAR_5);
 VAR_21 &= ~(VAR_15 | VAR_14);
 FUNC_6(VAR_20, VAR_5, VAR_21);

 FUNC_3(VAR_20);

 return (0);
}
