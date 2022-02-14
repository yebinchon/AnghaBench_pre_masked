
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int) ;

int
FUNC_3(u_char *VAR_1, int VAR_2, int VAR_3)
{
    int VAR_4;

    FUNC_0(FUNC_1("*** ITEM 0x%04x len %d detected\n", VAR_2, VAR_3));

    switch (VAR_2) {
    default:
 FUNC_1("*** ITEM 0x%02x detected\n", VAR_2);
 break;
    case 128:
 FUNC_1("PnP Version %d.%d, Vendor Version %d\n",
     VAR_1[0] >> 4, VAR_1[0] & (0xf), VAR_1[1]);
 break;
    case 132:
 FUNC_1("\nLogical Device ID: %c%c%c%02x%02x 0x%08x #%d\n",
  ((VAR_1[0] & 0x7c) >> 2) + 64,
  (((VAR_1[0] & 0x03) << 3) |
  ((VAR_1[1] & 0xe0) >> 5)) + 64,
  (VAR_1[1] & 0x1f) + 64,
  VAR_1[2], VAR_1[3], *(int *)(VAR_1),
  VAR_0++);

 if (VAR_1[4] & 0x1)
     FUNC_1 ("\tDevice powers up active\n");
 if (VAR_1[4] & 0x2)
     FUNC_1 ("\tDevice supports I/O Range Check\n");
 if (VAR_1[4] > 0x3)
     FUNC_1 ("\tReserved register funcs %02x\n",
  VAR_1[4]);

 if (VAR_3 == 6)
     FUNC_1("\tVendor register funcs %02x\n", VAR_1[5]);
 break;
    case 139:
 FUNC_1("Compatible Device ID: %c%c%c%02x%02x (%08x)\n",
  ((VAR_1[0] & 0x7c) >> 2) + 64,
  (((VAR_1[0] & 0x03) << 3) |
  ((VAR_1[1] & 0xe0) >> 5)) + 64,
  (VAR_1[1] & 0x1f) + 64,
  VAR_1[2], VAR_1[3], *(int *)VAR_1);
 break;
    case 133:
 FUNC_1("    IRQ: ");

 for (VAR_4 = 0; VAR_4 < 8; VAR_4++)
     if (VAR_1[0] & (1<<VAR_4))
  FUNC_1("%d ", VAR_4);
 for (VAR_4 = 0; VAR_4 < 8; VAR_4++)
     if (VAR_1[1] & (1<<VAR_4))
  FUNC_1("%d ", VAR_4 + 8);
 if (VAR_3 == 3) {
     if (VAR_1[2] & 0x1)
  FUNC_1("IRQ: High true edge sensitive\n");
     if (VAR_1[2] & 0x2)
  FUNC_1("IRQ: Low true edge sensitive\n");
     if (VAR_1[2] & 0x4)
  FUNC_1("IRQ: High true level sensitive\n");
     if (VAR_1[2] & 0x8)
  FUNC_1("IRQ: Low true level sensitive\n");
 } else {
     FUNC_1(" - only one type (true/edge)\n");
 }
 break;
    case 138:
 FUNC_1("    DMA: channel(s) ");
 for (VAR_4 = 0; VAR_4 < 8; VAR_4++)
     if (VAR_1[0] & (1<<VAR_4))
  FUNC_1("%d ", VAR_4);
 FUNC_1 ("\n");
 FUNC_2 (VAR_1[1]);
 break;
    case 130:
 FUNC_1("TAG Start DF\n");
 if (VAR_3 == 1) {
     switch (VAR_1[0]) {
     case 0:
  FUNC_1("Good Configuration\n");
  break;
     case 1:
  FUNC_1("Acceptable Configuration\n");
  break;
     case 2:
  FUNC_1("Sub-optimal Configuration\n");
  break;
     }
 }
 break;
    case 136:
 FUNC_1("TAG End DF\n");
 break;
    case 134:
 FUNC_1("    I/O Range 0x%x .. 0x%x, alignment 0x%x, len 0x%x\n",
     VAR_1[1] + (VAR_1[2] << 8),
     VAR_1[3] + (VAR_1[4] << 8),
     VAR_1[5], VAR_1[6] );
 if (VAR_1[0])
     FUNC_1("\t[16-bit addr]\n");
 else
     FUNC_1("\t[not 16-bit addr]\n");
 break;
    case 135:
 FUNC_1 ("    FIXED I/O base address 0x%x length 0x%x\n",
     VAR_1[0] + ( (VAR_1[1] & 3 ) << 8),
     VAR_1[2]);
 break;





    case 129:
 FUNC_1("*** Small Vendor Tag Detected\n");
 break;
    case 137:
 FUNC_1("End Tag\n\n");

 return 1;
 break;
    }
    return 0;
}
