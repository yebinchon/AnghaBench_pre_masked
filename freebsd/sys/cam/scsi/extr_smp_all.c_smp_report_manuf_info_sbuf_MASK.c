
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vendor ;
typedef char* uintmax_t ;
typedef char* uint8_t ;
struct smp_report_manuf_info_response {int sas_11_format; char* comp_revision; int vendor_specific; int comp_id; int comp_vendor; int crc; int revision; int product; int vendor; int expander_change_count; } ;
struct sbuf {int dummy; } ;
typedef int revision ;
typedef int product ;
typedef int comp_vendor ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int,int) ;
 int FUNC_1 (struct sbuf*,char*,...) ;
 char* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 char* FUNC_4 (int) ;

void
FUNC_5(struct smp_report_manuf_info_response *VAR_1,
      int VAR_2, struct sbuf *VAR_3)
{
 char VAR_4[16], VAR_5[48], VAR_6[16];
 char VAR_7[16];

 FUNC_1(VAR_3, "Report Manufacturer Information\n");
 FUNC_1(VAR_3, "Expander Change count: %d\n",
      FUNC_2(VAR_1->expander_change_count));
 FUNC_1(VAR_3, "SAS 1.1 Format: %s\n",
      FUNC_4(VAR_1->sas_11_format & VAR_0));
 FUNC_0(VAR_4, VAR_1->vendor, sizeof(VAR_1->vendor),
     sizeof(VAR_4));
 FUNC_0(VAR_5, VAR_1->product, sizeof(VAR_1->product),
     sizeof(VAR_5));
 FUNC_0(VAR_6, VAR_1->revision, sizeof(VAR_1->revision),
     sizeof(VAR_6));
 FUNC_1(VAR_3, "<%s %s %s>\n", VAR_4, VAR_5, VAR_6);

 if ((VAR_1->sas_11_format & VAR_0) == 0) {
  uint8_t *VAR_8;
  int VAR_9, VAR_10;

  FUNC_1(VAR_3, "Vendor Specific Data:\n");
  for (VAR_8 = (uint8_t *)&VAR_1->comp_vendor, VAR_9= 1,
       VAR_10 = 0; VAR_8 < (uint8_t *)&VAR_1->crc;
       VAR_8++, VAR_10++) {
   if (VAR_9 != 0) {
    FUNC_1(VAR_3, "%08lx  ",
         (unsigned long)(VAR_8 -
         (uint8_t *)VAR_1));
    VAR_9 = 0;
    VAR_10 = 0;
   }
   FUNC_1(VAR_3, "%02x", *VAR_8);

   if (VAR_10 == 15) {
    FUNC_1(VAR_3, "\n");
    VAR_9 = 1;
   } else
    FUNC_1(VAR_3, " %s", (VAR_10 == 7) ?
         " " : "");
  }
  if (VAR_10 != 16)
   FUNC_1(VAR_3, "\n");
  return;
 }

 FUNC_0(VAR_7, VAR_1->comp_vendor,
     sizeof(VAR_1->comp_vendor), sizeof(VAR_7));
 FUNC_1(VAR_3, "Component Vendor: %s\n", VAR_7);
 FUNC_1(VAR_3, "Component ID: %#x\n", FUNC_2(VAR_1->comp_id));
 FUNC_1(VAR_3, "Component Revision: %#x\n", VAR_1->comp_revision);
 FUNC_1(VAR_3, "Vendor Specific: 0x%016jx\n",
      (uintmax_t)FUNC_3(VAR_1->vendor_specific));
}
