
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;
typedef int uint32_t ;
typedef int u_int ;
struct jz4780_nemc_softc {int banks; int dev; } ;
typedef int phandle_t ;
typedef int pcell_t ;
typedef int device_t ;


 int FUNC_0 (struct jz4780_nemc_softc*,int ) ;
 int FUNC_1 (struct jz4780_nemc_softc*,int ,int) ;
 int FUNC_2 (struct jz4780_nemc_softc*,int ) ;
 int FUNC_3 (int) ;
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
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_4 (int ,char*,int *,int) ;
 int FUNC_5 (int ,char*,char*,int ,int,int) ;
 int FUNC_6 (int ) ;
 int* VAR_13 ;

__attribute__((used)) static int
FUNC_7(struct jz4780_nemc_softc *VAR_14,
        device_t VAR_15, u_int VAR_16)
{
 uint32_t VAR_17, VAR_18;
 phandle_t VAR_19;
 pcell_t VAR_20;


 if (VAR_14->banks & (1 << VAR_16))
  return 0;

 VAR_17 = FUNC_0(VAR_14, FUNC_3(VAR_16));

 VAR_17 &= ~VAR_0;
 VAR_17 |= VAR_1 << VAR_2;

 VAR_19 = FUNC_6(VAR_15);
 if (FUNC_4(VAR_19, "ingenic,nemc-tAS", &VAR_20, sizeof(VAR_20)) > 0) {
  VAR_18 = FUNC_2(VAR_14, VAR_20);
  if (VAR_18 > 15) {
   FUNC_5(VAR_14->dev,
       "invalid value of %s %u (%u cycles), maximum %u cycles supported\n",
       "ingenic,nemc-tAS", VAR_20, VAR_18, 15);
   return -1;
  }
  VAR_17 &= ~VAR_7;
  VAR_17 |= VAR_18 << VAR_8;
 }

 if (FUNC_4(VAR_19, "ingenic,nemc-tAH", &VAR_20, sizeof(VAR_20)) > 0) {
  VAR_18 = FUNC_2(VAR_14, VAR_20);
  if (VAR_18 > 15) {
   FUNC_5(VAR_14->dev,
       "invalid value of %s %u (%u cycles), maximum %u cycles supported\n",
       "ingenic,nemc-tAH", VAR_20, VAR_18, 15);
   return -1;
  }
  VAR_17 &= ~VAR_5;
  VAR_17 |= VAR_18 << VAR_6;
 }

 if (FUNC_4(VAR_19, "ingenic,nemc-tBP", &VAR_20, sizeof(VAR_20)) > 0) {
  VAR_18 = FUNC_2(VAR_14, VAR_20);
  if (VAR_18 > 31) {
   FUNC_5(VAR_14->dev,
       "invalid value of %s %u (%u cycles), maximum %u cycles supported\n",
       "ingenic,nemc-tBP", VAR_20, VAR_18, 15);
   return -1;
  }
  VAR_17 &= ~VAR_11;
  VAR_17 |= VAR_13[VAR_18] << VAR_12;
 }

 if (FUNC_4(VAR_19, "ingenic,nemc-tAW", &VAR_20, sizeof(VAR_20)) > 0) {
  VAR_18 = FUNC_2(VAR_14, VAR_20);
  if (VAR_18 > 31) {
   FUNC_5(VAR_14->dev,
       "invalid value of %s %u (%u cycles), maximum %u cycles supported\n",
       "ingenic,nemc-tAW", VAR_20, VAR_18, 15);
   return -1;
  }
  VAR_17 &= ~VAR_9;
  VAR_17 |= VAR_13[VAR_18] << VAR_10;
 }

 if (FUNC_4(VAR_19, "ingenic,nemc-tSTRV", &VAR_20, sizeof(VAR_20)) > 0) {
  VAR_18 = FUNC_2(VAR_14, VAR_20);
  if (VAR_18 > 63) {
   FUNC_5(VAR_14->dev,
       "invalid value of %s %u (%u cycles), maximum %u cycles supported\n",
       "ingenic,nemc-tSTRV", VAR_20, VAR_18, 15);
   return -1;
  }
  VAR_17 &= ~VAR_3;
  VAR_17 |= VAR_18 << VAR_4;
 }
 FUNC_1(VAR_14, FUNC_3(VAR_16), VAR_17);
 VAR_14->banks |= (1 << VAR_16);
 return 0;
}
