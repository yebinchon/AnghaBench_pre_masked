
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_long ;
typedef scalar_t__ u_int8_t ;
struct bios32_SDheader {int len; int entry; int revision; } ;
struct PnPBIOS_table {int len; int pmentrybase; int pmentryoffset; int version; int control; int evflagaddr; int oemdevid; } ;
struct TYPE_4__ {int id; } ;
struct TYPE_5__ {int base; int entry; TYPE_1__ ident; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 struct PnPBIOS_table* VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,char*,int,int,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*) ;
 int FUNC_5 (char*,...) ;
 scalar_t__ FUNC_6 (char*,char*) ;

__attribute__((used)) static void
FUNC_7(void *VAR_6)
{
    u_long VAR_7;
    struct bios32_SDheader *VAR_8;
    struct PnPBIOS_table *VAR_9;
    u_int8_t VAR_10, *VAR_11;
    int VAR_12;
    char *VAR_13;






    if ((VAR_7 = FUNC_2(0, "_32_", 4, 16, 0)) != 0) {


 VAR_8 = (struct bios32_SDheader *)(uintptr_t)FUNC_0(VAR_7);
 for (VAR_11 = (u_int8_t *)VAR_8, VAR_10 = 0, VAR_12 = 0; VAR_12 < (VAR_8->len * 16); VAR_12++) {
     VAR_10 += VAR_11[VAR_12];
 }

 if ((VAR_10 == 0) && (VAR_1 <= VAR_8->entry ) &&
     (VAR_8->entry < (VAR_1 + VAR_0))) {
     VAR_4 = FUNC_0(VAR_8->entry);
     if (VAR_5) {
  FUNC_5("bios32: Found BIOS32 Service Directory header at %p\n", VAR_8);
  FUNC_5("bios32: Entry = 0x%x (%x)  Rev = %d  Len = %d\n",
         VAR_8->entry, VAR_4, VAR_8->revision, VAR_8->len);
     }


     if (((VAR_13 = FUNC_4("machdep.bios.pci")) == ((void*)0)) || FUNC_6(VAR_13, "disable")) {


  VAR_2.ident.id = 0x49435024;
  if (!FUNC_1(&VAR_2) && VAR_5)
      FUNC_5("pcibios: PCI BIOS entry at 0x%x+0x%x\n", VAR_2.base, VAR_2.entry);
     }
     if (VAR_13 != ((void*)0))
      FUNC_3(VAR_13);
 } else {
     FUNC_5("bios32: Bad BIOS32 Service Directory\n");
 }
    }






    if ((((VAR_13 = FUNC_4("machdep.bios.pnp")) == ((void*)0)) || FUNC_6(VAR_13, "disable")) &&
 ((VAR_7 = FUNC_2(0, "$PnP", 4, 16, 0)) != 0)) {


 VAR_9 = (struct PnPBIOS_table *)(uintptr_t)FUNC_0(VAR_7);
 for (VAR_11 = (u_int8_t *)VAR_9, VAR_10 = 0, VAR_12 = 0; VAR_12 < VAR_9->len; VAR_12++) {
     VAR_10 += VAR_11[VAR_12];
 }

 if (VAR_10 == 0) {
     VAR_3 = VAR_9;
     if (VAR_5) {
  FUNC_5("pnpbios: Found PnP BIOS data at %p\n", VAR_9);
  FUNC_5("pnpbios: Entry = %x:%x  Rev = %d.%d\n",
         VAR_9->pmentrybase, VAR_9->pmentryoffset, VAR_9->version >> 4, VAR_9->version & 0xf);
  if ((VAR_9->control & 0x3) == 0x01)
      FUNC_5("pnpbios: Event flag at %x\n", VAR_9->evflagaddr);
  if (VAR_9->oemdevid != 0)
      FUNC_5("pnpbios: OEM ID %x\n", VAR_9->oemdevid);

     }
 } else {
     FUNC_5("pnpbios: Bad PnP BIOS data checksum\n");
 }
    }
    if (VAR_13 != ((void*)0))
     FUNC_3(VAR_13);
    if (VAR_5) {

     FUNC_5("Other BIOS signatures found:\n");
    }
}
