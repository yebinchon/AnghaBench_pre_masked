
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
struct smapi_softc {int * res; scalar_t__ rid; struct smapi_bios_header* header; int dev; int cdev; scalar_t__ smapi32_entry; } ;
struct smapi_bios_header {int prot32_segment; char* prot32_offset; int information; int real16_segment; char* real16_offset; int prot16_segment; char* prot16_offset; int checksum; int length; int version_minor; int version_major; } ;
typedef int device_t ;
struct TYPE_3__ {int d_name; } ;


 scalar_t__ FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_8 ;
 int * FUNC_2 (int ,int ,scalar_t__*,int ) ;
 int FUNC_3 (int ,int ,scalar_t__,int *) ;
 struct smapi_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (TYPE_1__*,int ,int ,int ,int,char*,int ,int ) ;
 scalar_t__ FUNC_8 (int *) ;
 TYPE_1__ VAR_9 ;

__attribute__((used)) static int
FUNC_9 (device_t VAR_10)
{
 struct smapi_softc *VAR_11;
 int VAR_12;

 VAR_11 = FUNC_4(VAR_10);
 VAR_12 = 0;

 VAR_11->dev = VAR_10;
 VAR_11->rid = 0;
 VAR_11->res = FUNC_2(VAR_10, VAR_6, &VAR_11->rid,
   VAR_2);
 if (VAR_11->res == ((void*)0)) {
  FUNC_6(VAR_10, "Unable to allocate memory resource.\n");
  VAR_12 = VAR_0;
  goto bad;
 }
 VAR_11->header = (struct smapi_bios_header *)FUNC_8(VAR_11->res);
 VAR_11->smapi32_entry = (u_int32_t)FUNC_0(
     VAR_11->header->prot32_segment +
     VAR_11->header->prot32_offset);

        VAR_11->cdev = FUNC_7(&VAR_9,
   FUNC_5(VAR_11->dev),
   VAR_7, VAR_1, 0600,
   "%s%d",
   VAR_9.d_name,
   FUNC_5(VAR_11->dev));

 FUNC_6(VAR_10, "Version: %d.%02d, Length: %d, Checksum: 0x%02x\n",
  FUNC_1(VAR_11->header->version_major),
  FUNC_1(VAR_11->header->version_minor),
  VAR_11->header->length,
  VAR_11->header->checksum);
 FUNC_6(VAR_10, "Information=0x%b\n",
  VAR_11->header->information,
  "\020"
  "\001REAL_VM86"
  "\002PROTECTED_16"
  "\003PROTECTED_32");

 if (VAR_8) {
  if (VAR_11->header->information & VAR_5)
   FUNC_6(VAR_10, "Real/VM86 mode: Segment 0x%04x, Offset 0x%04x\n",
    VAR_11->header->real16_segment,
    VAR_11->header->real16_offset);
  if (VAR_11->header->information & VAR_3)
   FUNC_6(VAR_10, "16-bit Protected mode: Segment 0x%08x, Offset 0x%04x\n",
    VAR_11->header->prot16_segment,
    VAR_11->header->prot16_offset);
  if (VAR_11->header->information & VAR_4)
   FUNC_6(VAR_10, "32-bit Protected mode: Segment 0x%08x, Offset 0x%08x\n",
    VAR_11->header->prot32_segment,
    VAR_11->header->prot32_offset);
 }

 return (0);
bad:
 if (VAR_11->res)
  FUNC_3(VAR_10, VAR_6, VAR_11->rid, VAR_11->res);
 return (VAR_12);
}
