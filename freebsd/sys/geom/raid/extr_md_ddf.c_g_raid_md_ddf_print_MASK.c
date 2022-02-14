
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_9__ ;
typedef struct TYPE_31__ TYPE_8__ ;
typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;
typedef struct TYPE_23__ TYPE_16__ ;
typedef struct TYPE_22__ TYPE_15__ ;
typedef struct TYPE_21__ TYPE_14__ ;
typedef struct TYPE_20__ TYPE_13__ ;
typedef struct TYPE_19__ TYPE_12__ ;
typedef struct TYPE_18__ TYPE_11__ ;
typedef struct TYPE_17__ TYPE_10__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct ddf_vuc_record {int* VD_GUID; } ;
struct ddf_vdc_record {int* VD_GUID; int * Physical_Disk_Sequence; int Primary_Element_Count; int MDF_Constant_Generation_Method; int MDF_Parity_Generator_Polynomial; int MDF_Parity_Disks; int BG_Rate; int Cache_Flags; int * Associated_Spares; int Rotate_Parity_count; int Block_Size; int VD_Size; int Block_Count; int Secondary_RAID_Level; int Secondary_Element_Seq; int Secondary_Element_Count; int RLQ; int Primary_RAID_Level; int Stripe_Size; int Sequence_Number; int Timestamp; int Signature; } ;
struct ddf_sa_record {TYPE_10__* entry; int Populated_SAEs; int MAX_SAE_Supported; int Spare_Type; int Timestamp; } ;
struct ddf_meta {TYPE_11__* pdd; TYPE_9__* vdr; TYPE_5__* pdr; TYPE_3__* cdr; TYPE_1__* hdr; } ;
struct TYPE_32__ {TYPE_8__* entry; } ;
struct TYPE_31__ {int* VD_GUID; int VD_Name; } ;
struct TYPE_30__ {int Drive_Failures_Remaining; int Init_State; int VD_State; int VD_Type; int VD_Number; } ;
struct TYPE_29__ {int Block_Size; int Configured_Size; int PD_State; int PD_Type; int PD_Reference; } ;
struct TYPE_28__ {TYPE_4__* entry; } ;
struct TYPE_27__ {int* PD_GUID; } ;
struct TYPE_26__ {int* Controller_GUID; int * Product_ID; } ;
struct TYPE_25__ {int Device_ID; int Vendor_ID; int SubDevice_ID; int SubVendor_ID; } ;
struct TYPE_24__ {int* DDF_Header_GUID; int * DDF_rev; } ;
struct TYPE_23__ {TYPE_2__ Controller_Type; } ;
struct TYPE_22__ {int Max_Primary_Element_Entries; int Vendor_Specific_Logs_Length; int Vendor_Specific_Logs; int Diagnostic_Space_Length; int Diagnostic_Space; int bbmlog_length; int bbmlog_section; int pdd_length; int pdd_section; int cr_length; int cr_section; int vdr_length; int vdr_section; int pdr_length; int pdr_section; int cd_length; int cd_section; int Configuration_Record_Length; int Max_Partitions; int Max_VD_Entries; int Max_PD_Entries; int WorkSpace_LBA; int WorkSpace_Length; int Secondary_Header_LBA; int Primary_Header_LBA; int Diskgrouping; int Foreign_Flag; int Open_Flag; int TimeStamp; int Sequence_Number; } ;
struct TYPE_21__ {int Forced_PD_GUID_Flag; int Forced_Ref_Flag; int PD_Reference; } ;
struct TYPE_20__ {TYPE_6__* entry; int Populated_PDEs; int Max_PDE_Supported; } ;
struct TYPE_19__ {TYPE_7__* entry; int Populated_VDEs; int Max_VDE_Supported; } ;
struct TYPE_18__ {int* PD_GUID; } ;
struct TYPE_17__ {int* VD_GUID; int Secondary_Element; } ;





 size_t FUNC_0 (struct ddf_meta*,int ) ;
 int FUNC_1 (struct ddf_meta*,int ) ;
 int FUNC_2 (struct ddf_meta*,int ) ;
 int FUNC_3 (struct ddf_meta*,int ) ;
 int FUNC_4 (struct ddf_meta*,int ) ;
 int FUNC_5 (struct ddf_meta*,int ) ;
 int FUNC_6 (struct ddf_meta*,int *) ;
 int FUNC_7 (struct ddf_meta*,int ) ;
 int FUNC_8 (struct ddf_meta*,int ) ;
 int FUNC_9 (struct ddf_meta*) ;
 struct ddf_vdc_record* FUNC_10 (struct ddf_meta*,int) ;
 TYPE_16__* VAR_0 ;
 int VAR_1 ;
 TYPE_15__* VAR_2 ;
 scalar_t__ FUNC_11 (int*,int) ;
 TYPE_14__* VAR_3 ;
 TYPE_13__* VAR_4 ;
 int FUNC_12 (int*) ;
 int FUNC_13 (char*,...) ;
 TYPE_12__* VAR_5 ;

__attribute__((used)) static void
FUNC_14(struct ddf_meta *VAR_6)
{
 struct ddf_vdc_record *VAR_7;
 struct ddf_vuc_record *VAR_8;
 struct ddf_sa_record *VAR_9;
 uint64_t *VAR_10;
 uint32_t VAR_11;
 int VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;

 if (VAR_1 < 1)
  return;

 FUNC_13("********* DDF Metadata *********\n");
 FUNC_13("**** Header ****\n");
 FUNC_13("DDF_Header_GUID      ");
 FUNC_12(VAR_6->hdr->DDF_Header_GUID);
 FUNC_13("\n");
 FUNC_13("DDF_rev              %8.8s\n", (char *)&VAR_6->hdr->DDF_rev[0]);
 FUNC_13("Sequence_Number      0x%08x\n", FUNC_2(VAR_6, VAR_2->Sequence_Number));
 FUNC_13("TimeStamp            0x%08x\n", FUNC_2(VAR_6, VAR_2->TimeStamp));
 FUNC_13("Open_Flag            0x%02x\n", FUNC_0(VAR_6, VAR_2->Open_Flag));
 FUNC_13("Foreign_Flag         0x%02x\n", FUNC_0(VAR_6, VAR_2->Foreign_Flag));
 FUNC_13("Diskgrouping         0x%02x\n", FUNC_0(VAR_6, VAR_2->Diskgrouping));
 FUNC_13("Primary_Header_LBA   %ju\n", FUNC_4(VAR_6, VAR_2->Primary_Header_LBA));
 FUNC_13("Secondary_Header_LBA %ju\n", FUNC_4(VAR_6, VAR_2->Secondary_Header_LBA));
 FUNC_13("WorkSpace_Length     %u\n", FUNC_2(VAR_6, VAR_2->WorkSpace_Length));
 FUNC_13("WorkSpace_LBA        %ju\n", FUNC_4(VAR_6, VAR_2->WorkSpace_LBA));
 FUNC_13("Max_PD_Entries       %u\n", FUNC_0(VAR_6, VAR_2->Max_PD_Entries));
 FUNC_13("Max_VD_Entries       %u\n", FUNC_0(VAR_6, VAR_2->Max_VD_Entries));
 FUNC_13("Max_Partitions       %u\n", FUNC_0(VAR_6, VAR_2->Max_Partitions));
 FUNC_13("Configuration_Record_Length %u\n", FUNC_0(VAR_6, VAR_2->Configuration_Record_Length));
 FUNC_13("Max_Primary_Element_Entries %u\n", FUNC_0(VAR_6, VAR_2->Max_Primary_Element_Entries));
 FUNC_13("Controller Data      %u:%u\n", FUNC_2(VAR_6, VAR_2->cd_section), FUNC_2(VAR_6, VAR_2->cd_length));
 FUNC_13("Physical Disk        %u:%u\n", FUNC_2(VAR_6, VAR_2->pdr_section), FUNC_2(VAR_6, VAR_2->pdr_length));
 FUNC_13("Virtual Disk         %u:%u\n", FUNC_2(VAR_6, VAR_2->vdr_section), FUNC_2(VAR_6, VAR_2->vdr_length));
 FUNC_13("Configuration Recs   %u:%u\n", FUNC_2(VAR_6, VAR_2->cr_section), FUNC_2(VAR_6, VAR_2->cr_length));
 FUNC_13("Physical Disk Recs   %u:%u\n", FUNC_2(VAR_6, VAR_2->pdd_section), FUNC_2(VAR_6, VAR_2->pdd_length));
 FUNC_13("BBM Log              %u:%u\n", FUNC_2(VAR_6, VAR_2->bbmlog_section), FUNC_2(VAR_6, VAR_2->bbmlog_length));
 FUNC_13("Diagnostic Space     %u:%u\n", FUNC_2(VAR_6, VAR_2->Diagnostic_Space), FUNC_2(VAR_6, VAR_2->Diagnostic_Space_Length));
 FUNC_13("Vendor_Specific_Logs %u:%u\n", FUNC_2(VAR_6, VAR_2->Vendor_Specific_Logs), FUNC_2(VAR_6, VAR_2->Vendor_Specific_Logs_Length));
 FUNC_13("**** Controller Data ****\n");
 FUNC_13("Controller_GUID      ");
 FUNC_12(VAR_6->cdr->Controller_GUID);
 FUNC_13("\n");
 FUNC_13("Controller_Type      0x%04x%04x 0x%04x%04x\n",
     FUNC_0(VAR_6, VAR_0->Controller_Type.Vendor_ID),
     FUNC_0(VAR_6, VAR_0->Controller_Type.Device_ID),
     FUNC_0(VAR_6, VAR_0->Controller_Type.SubVendor_ID),
     FUNC_0(VAR_6, VAR_0->Controller_Type.SubDevice_ID));
 FUNC_13("Product_ID           '%.16s'\n", (char *)&VAR_6->cdr->Product_ID[0]);
 FUNC_13("**** Physical Disk Records ****\n");
 FUNC_13("Populated_PDEs       %u\n", FUNC_0(VAR_6, VAR_4->Populated_PDEs));
 FUNC_13("Max_PDE_Supported    %u\n", FUNC_0(VAR_6, VAR_4->Max_PDE_Supported));
 for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_6, VAR_4->Populated_PDEs); VAR_13++) {
  if (FUNC_11(VAR_6->pdr->entry[VAR_13].PD_GUID, 24))
   continue;
  if (FUNC_2(VAR_6, VAR_4->entry[VAR_13].PD_Reference) == 0xffffffff)
   continue;
  FUNC_13("PD_GUID              ");
  FUNC_12(VAR_6->pdr->entry[VAR_13].PD_GUID);
  FUNC_13("\n");
  FUNC_13("PD_Reference         0x%08x\n",
      FUNC_2(VAR_6, VAR_4->entry[VAR_13].PD_Reference));
  FUNC_13("PD_Type              0x%04x\n",
      FUNC_0(VAR_6, VAR_4->entry[VAR_13].PD_Type));
  FUNC_13("PD_State             0x%04x\n",
      FUNC_0(VAR_6, VAR_4->entry[VAR_13].PD_State));
  FUNC_13("Configured_Size      %ju\n",
      FUNC_4(VAR_6, VAR_4->entry[VAR_13].Configured_Size));
  FUNC_13("Block_Size           %u\n",
      FUNC_0(VAR_6, VAR_4->entry[VAR_13].Block_Size));
 }
 FUNC_13("**** Virtual Disk Records ****\n");
 FUNC_13("Populated_VDEs       %u\n", FUNC_0(VAR_6, VAR_5->Populated_VDEs));
 FUNC_13("Max_VDE_Supported    %u\n", FUNC_0(VAR_6, VAR_5->Max_VDE_Supported));
 for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_6, VAR_5->Populated_VDEs); VAR_13++) {
  if (FUNC_11(VAR_6->vdr->entry[VAR_13].VD_GUID, 24))
   continue;
  FUNC_13("VD_GUID              ");
  FUNC_12(VAR_6->vdr->entry[VAR_13].VD_GUID);
  FUNC_13("\n");
  FUNC_13("VD_Number            0x%04x\n",
      FUNC_0(VAR_6, VAR_5->entry[VAR_13].VD_Number));
  FUNC_13("VD_Type              0x%04x\n",
      FUNC_0(VAR_6, VAR_5->entry[VAR_13].VD_Type));
  FUNC_13("VD_State             0x%02x\n",
      FUNC_7(VAR_6, VAR_5->entry[VAR_13].VD_State));
  FUNC_13("Init_State           0x%02x\n",
      FUNC_7(VAR_6, VAR_5->entry[VAR_13].Init_State));
  FUNC_13("Drive_Failures_Remaining %u\n",
      FUNC_7(VAR_6, VAR_5->entry[VAR_13].Drive_Failures_Remaining));
  FUNC_13("VD_Name              '%.16s'\n",
      (char *)&VAR_6->vdr->entry[VAR_13].VD_Name);
 }
 FUNC_13("**** Configuration Records ****\n");
 VAR_15 = FUNC_9(VAR_6);
 for (VAR_13 = 0; VAR_13 < VAR_15; VAR_13++) {
  VAR_7 = FUNC_10(VAR_6, VAR_13);
  VAR_11 = FUNC_3(VAR_6, VAR_7->Signature);
  switch (VAR_11) {
  case 129:
   FUNC_13("** Virtual Disk Configuration **\n");
   FUNC_13("VD_GUID              ");
   FUNC_12(VAR_7->VD_GUID);
   FUNC_13("\n");
   FUNC_13("Timestamp            0x%08x\n",
       FUNC_3(VAR_6, VAR_7->Timestamp));
   FUNC_13("Sequence_Number      0x%08x\n",
       FUNC_3(VAR_6, VAR_7->Sequence_Number));
   FUNC_13("Primary_Element_Count %u\n",
       FUNC_1(VAR_6, VAR_7->Primary_Element_Count));
   FUNC_13("Stripe_Size          %u\n",
       FUNC_8(VAR_6, VAR_7->Stripe_Size));
   FUNC_13("Primary_RAID_Level   0x%02x\n",
       FUNC_8(VAR_6, VAR_7->Primary_RAID_Level));
   FUNC_13("RLQ                  0x%02x\n",
       FUNC_8(VAR_6, VAR_7->RLQ));
   FUNC_13("Secondary_Element_Count %u\n",
       FUNC_8(VAR_6, VAR_7->Secondary_Element_Count));
   FUNC_13("Secondary_Element_Seq %u\n",
       FUNC_8(VAR_6, VAR_7->Secondary_Element_Seq));
   FUNC_13("Secondary_RAID_Level 0x%02x\n",
       FUNC_8(VAR_6, VAR_7->Secondary_RAID_Level));
   FUNC_13("Block_Count          %ju\n",
       FUNC_5(VAR_6, VAR_7->Block_Count));
   FUNC_13("VD_Size              %ju\n",
       FUNC_5(VAR_6, VAR_7->VD_Size));
   FUNC_13("Block_Size           %u\n",
       FUNC_1(VAR_6, VAR_7->Block_Size));
   FUNC_13("Rotate_Parity_count  %u\n",
       FUNC_8(VAR_6, VAR_7->Rotate_Parity_count));
   FUNC_13("Associated_Spare_Disks");
   for (VAR_12 = 0; VAR_12 < 8; VAR_12++) {
    if (FUNC_3(VAR_6, VAR_7->Associated_Spares[VAR_12]) != 0xffffffff)
     FUNC_13(" 0x%08x", FUNC_3(VAR_6, VAR_7->Associated_Spares[VAR_12]));
   }
   FUNC_13("\n");
   FUNC_13("Cache_Flags          %016jx\n",
       FUNC_5(VAR_6, VAR_7->Cache_Flags));
   FUNC_13("BG_Rate              %u\n",
       FUNC_8(VAR_6, VAR_7->BG_Rate));
   FUNC_13("MDF_Parity_Disks     %u\n",
       FUNC_8(VAR_6, VAR_7->MDF_Parity_Disks));
   FUNC_13("MDF_Parity_Generator_Polynomial 0x%04x\n",
       FUNC_1(VAR_6, VAR_7->MDF_Parity_Generator_Polynomial));
   FUNC_13("MDF_Constant_Generation_Method 0x%02x\n",
       FUNC_8(VAR_6, VAR_7->MDF_Constant_Generation_Method));
   FUNC_13("Physical_Disks      ");
   VAR_16 = FUNC_1(VAR_6, VAR_7->Primary_Element_Count);
   VAR_10 = (uint64_t *)&(VAR_7->Physical_Disk_Sequence[FUNC_0(VAR_6, VAR_2->Max_Primary_Element_Entries)]);
   for (VAR_12 = 0; VAR_12 < VAR_16; VAR_12++)
    FUNC_13(" 0x%08x @ %ju",
        FUNC_3(VAR_6, VAR_7->Physical_Disk_Sequence[VAR_12]),
        FUNC_6(VAR_6, VAR_10 + VAR_12));
   FUNC_13("\n");
   break;
  case 128:
   FUNC_13("** Vendor Unique Configuration **\n");
   VAR_8 = (struct ddf_vuc_record *)VAR_7;
   FUNC_13("VD_GUID              ");
   FUNC_12(VAR_8->VD_GUID);
   FUNC_13("\n");
   break;
  case 130:
   FUNC_13("** Spare Assignment Configuration **\n");
   VAR_9 = (struct ddf_sa_record *)VAR_7;
   FUNC_13("Timestamp            0x%08x\n",
       FUNC_3(VAR_6, VAR_9->Timestamp));
   FUNC_13("Spare_Type           0x%02x\n",
       FUNC_8(VAR_6, VAR_9->Spare_Type));
   FUNC_13("Populated_SAEs       %u\n",
       FUNC_1(VAR_6, VAR_9->Populated_SAEs));
   FUNC_13("MAX_SAE_Supported    %u\n",
       FUNC_1(VAR_6, VAR_9->MAX_SAE_Supported));
   for (VAR_12 = 0; VAR_12 < FUNC_1(VAR_6, VAR_9->Populated_SAEs); VAR_12++) {
    if (FUNC_11(VAR_9->entry[VAR_12].VD_GUID, 24))
     continue;
    FUNC_13("VD_GUID             ");
    for (VAR_14 = 0; VAR_14 < 24; VAR_14++)
     FUNC_13("%02x", VAR_9->entry[VAR_12].VD_GUID[VAR_14]);
    FUNC_13("\n");
    FUNC_13("Secondary_Element   %u\n",
        FUNC_1(VAR_6, VAR_9->entry[VAR_12].Secondary_Element));
   }
   break;
  case 0x00000000:
  case 0xFFFFFFFF:
   break;
  default:
   FUNC_13("Unknown configuration signature %08x\n", VAR_11);
   break;
  }
 }
 FUNC_13("**** Physical Disk Data ****\n");
 FUNC_13("PD_GUID              ");
 FUNC_12(VAR_6->pdd->PD_GUID);
 FUNC_13("\n");
 FUNC_13("PD_Reference         0x%08x\n",
     FUNC_2(VAR_6, VAR_3->PD_Reference));
 FUNC_13("Forced_Ref_Flag      0x%02x\n",
     FUNC_7(VAR_6, VAR_3->Forced_Ref_Flag));
 FUNC_13("Forced_PD_GUID_Flag  0x%02x\n",
     FUNC_7(VAR_6, VAR_3->Forced_PD_GUID_Flag));
}
