
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


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
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (char*,...) ;

__attribute__((used)) static int
FUNC_7(void)
{
 uint32_t VAR_14, VAR_15;
 uint8_t VAR_16, VAR_17;


 VAR_15 = FUNC_2(VAR_3);

 if (VAR_11) {
  FUNC_6("pci_open(1):\tmode 1 addr port (0x0cf8) is 0x%08x\n",
      VAR_15);
 }

 VAR_12 = VAR_0;
 VAR_13 = 32;

 FUNC_4(VAR_3, VAR_4);
 FUNC_0(1);
 VAR_14 = FUNC_2(VAR_3);
 FUNC_4(VAR_3, VAR_15);

 if (VAR_11)
  FUNC_6("pci_open(1a):\tmode1res=0x%08x (0x%08lx)\n", VAR_14,
      VAR_4);

 if (VAR_14) {
  if (FUNC_5(32))
   return (VAR_12);
 }

 FUNC_4(VAR_3, VAR_5);
 VAR_14 = FUNC_2(VAR_3);
 FUNC_4(VAR_3, VAR_15);

 if (VAR_11)
  FUNC_6("pci_open(1b):\tmode1res=0x%08x (0x%08lx)\n", VAR_14,
      VAR_5);

 if ((VAR_14 & VAR_6) == VAR_7) {
  if (FUNC_5(32))
   return (VAR_12);
 }


 VAR_17 = FUNC_1(VAR_9);

 if (VAR_11) {
  FUNC_6("pci_open(2):\tmode 2 enable port (0x0cf8) is 0x%02x\n",
      VAR_17);
 }

 if ((VAR_17 & 0xf0) == 0) {

  VAR_12 = VAR_1;
  VAR_13 = 16;

  FUNC_3(VAR_9, VAR_8);
  VAR_16 = FUNC_1(VAR_9);
  FUNC_3(VAR_9, VAR_17);

  if (VAR_11)
   FUNC_6("pci_open(2a):\tmode2res=0x%02x (0x%02x)\n",
       VAR_16, VAR_8);

  if (VAR_16 == VAR_10) {
   if (VAR_11)
    FUNC_6("pci_open(2a):\tnow trying mechanism 2\n");

   if (FUNC_5(16))
    return (VAR_12);
  }
 }


 VAR_12 = VAR_2;
 VAR_13 = 0;
 return (VAR_12);
}
