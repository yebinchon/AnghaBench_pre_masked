
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct sdhci_slot {int clock; int max_clk; int quirks; int timeout_clk; scalar_t__ version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct sdhci_slot*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 int FUNC_2 (struct sdhci_slot*,int ,int) ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 int FUNC_3 (struct sdhci_slot*) ;
 int FUNC_4 (struct sdhci_slot*,char*,...) ;

__attribute__((used)) static void
FUNC_5(struct sdhci_slot *VAR_23, uint32_t VAR_24)
{
 uint32_t VAR_25;
 uint32_t VAR_26;
 uint32_t VAR_27;
 uint16_t VAR_28;
 uint16_t VAR_29;
 int VAR_30;

 if (VAR_24 == VAR_23->clock)
  return;
 VAR_23->clock = VAR_24;


 VAR_28 = FUNC_1(VAR_23, VAR_10);
 FUNC_2(VAR_23, VAR_10, VAR_28 & ~VAR_9);

 if (VAR_24 == 0)
  return;


 VAR_25 = VAR_23->max_clk;
 if (VAR_23->quirks & VAR_18) {
  VAR_26 = FUNC_1(VAR_23, VAR_6) &
      VAR_3;




  if ((VAR_25 / VAR_5) > VAR_24) {
   VAR_25 = VAR_0;
   VAR_26 |= (VAR_1 <<
       VAR_4);
  } else {
   VAR_26 |= (VAR_2 <<
       VAR_4);
  }

  FUNC_2(VAR_23, VAR_6, VAR_26);
 }


 if (VAR_23->quirks & VAR_19)
  VAR_23->timeout_clk = VAR_23->clock / 1000;

 if (VAR_23->version < VAR_20) {

  VAR_27 = VAR_25;
  for (VAR_29 = 1; VAR_29 < VAR_7; VAR_29 <<= 1) {
   if (VAR_27 <= VAR_24)
    break;
   VAR_27 >>= 1;
  }

  VAR_29 >>= 1;
 } else {

  if (VAR_24 >= VAR_25)
   VAR_29 = 0;
  else {
   for (VAR_29 = 2; VAR_29 < VAR_8; VAR_29 += 2) {
    if ((VAR_25 / VAR_29) <= VAR_24)
     break;
   }
  }
  VAR_29 >>= 1;
 }

 if (VAR_21 || VAR_22)
  FUNC_4(VAR_23, "Divider %d for freq %d (base %d)\n",
   VAR_29, VAR_24, VAR_25);


 VAR_28 = (VAR_29 & VAR_15) << VAR_17;
 VAR_28 |= ((VAR_29 >> VAR_16) & VAR_13)
  << VAR_14;

 FUNC_2(VAR_23, VAR_10, VAR_28);

 VAR_28 |= VAR_11;
 FUNC_2(VAR_23, VAR_10, VAR_28);

 VAR_30 = 10;
 while (!((VAR_28 = FUNC_1(VAR_23, VAR_10))
  & VAR_12)) {
  if (VAR_30 == 0) {
   FUNC_4(VAR_23,
       "Internal clock never stabilised.\n");
   FUNC_3(VAR_23);
   return;
  }
  VAR_30--;
  FUNC_0(1000);
 }

 VAR_28 |= VAR_9;
 FUNC_2(VAR_23, VAR_10, VAR_28);
}
