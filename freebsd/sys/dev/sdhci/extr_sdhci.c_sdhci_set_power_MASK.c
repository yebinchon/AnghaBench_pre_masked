
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u_char ;
struct sdhci_slot {int power; int quirks; } ;


 int FUNC_0 (int) ;





 int FUNC_1 (struct sdhci_slot*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct sdhci_slot*,int ,int) ;
 int FUNC_3 (struct sdhci_slot*,char*) ;

__attribute__((used)) static void
FUNC_4(struct sdhci_slot *VAR_6, u_char VAR_7)
{
 int VAR_8;
 uint8_t VAR_9;

 if (VAR_6->power == VAR_7)
  return;

 VAR_6->power = VAR_7;


 VAR_9 = 0;
 FUNC_2(VAR_6, VAR_3, VAR_9);

 if (VAR_7 == 0)
  return;

 switch (1 << VAR_7) {
 case 128:
  VAR_9 |= VAR_0;
  break;
 case 132:
 case 131:
  VAR_9 |= VAR_1;
  break;
 case 130:
 case 129:
  VAR_9 |= VAR_2;
  break;
 }
 FUNC_2(VAR_6, VAR_3, VAR_9);





 VAR_9 |= VAR_4;
 for (VAR_8 = 0; VAR_8 < 20; VAR_8++) {
  FUNC_2(VAR_6, VAR_3, VAR_9);
  if (FUNC_1(VAR_6, VAR_3) & VAR_4)
   break;
  FUNC_0(100);
 }
 if (!(FUNC_1(VAR_6, VAR_3) & VAR_4))
  FUNC_3(VAR_6, "Bus power failed to enable\n");

 if (VAR_6->quirks & VAR_5) {
  FUNC_2(VAR_6, VAR_3, VAR_9 | 0x10);
  FUNC_0(10);
  FUNC_2(VAR_6, VAR_3, VAR_9);
  FUNC_0(300);
 }
}
