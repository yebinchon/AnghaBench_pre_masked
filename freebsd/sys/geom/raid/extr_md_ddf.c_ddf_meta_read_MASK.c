
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int u_int ;
struct g_provider {int sectorsize; int mediasize; int name; } ;
struct g_consumer {struct g_provider* provider; } ;
struct ddf_meta {int sectorsize; int bigendian; struct ddf_header* bbm; struct ddf_header* pdd; struct ddf_header* cr; struct ddf_header* vdr; struct ddf_header* pdr; struct ddf_header* cdr; struct ddf_header* hdr; } ;
struct ddf_header {scalar_t__ Signature; scalar_t__ Header_Type; int bbmlog_length; int bbmlog_section; int pdd_length; int pdd_section; int cr_length; int cr_section; int vdr_length; int vdr_section; TYPE_1__* entry; int pdr_length; int pdr_section; int cd_length; int cd_section; int Configuration_Record_Length; int Max_PD_Entries; int Max_Primary_Element_Entries; int Vendor_Specific_Logs_Length; int Vendor_Specific_Logs; int Diagnostic_Space_Length; int Diagnostic_Space; int Secondary_Header_LBA; int Primary_Header_LBA; int DDF_Header_GUID; int CRC; } ;
typedef int off_t ;
struct TYPE_14__ {int Signature; } ;
struct TYPE_13__ {int Signature; } ;
struct TYPE_12__ {int PD_Reference; int Signature; } ;
struct TYPE_11__ {TYPE_2__* entry; int Populated_PDEs; int Signature; } ;
struct TYPE_10__ {int Signature; } ;
struct TYPE_9__ {int Configured_Size; int PD_State; int PD_Reference; } ;
struct TYPE_8__ {int PD_GUID; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct ddf_meta*,int ) ;
 int FUNC_1 (struct ddf_meta*,int ) ;
 unsigned long long FUNC_2 (struct ddf_meta*,int ) ;
 int FUNC_3 (int,char*,char*,...) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_4 (struct ddf_meta*,int ,int) ;
 int FUNC_5 (struct ddf_meta*,int ,int) ;
 int FUNC_6 (struct ddf_meta*,int ,unsigned long long) ;
 TYPE_7__* VAR_14 ;
 scalar_t__ FUNC_7 (scalar_t__*) ;
 TYPE_6__* VAR_15 ;
 scalar_t__ FUNC_8 (struct ddf_header*,int) ;
 int FUNC_9 (struct ddf_meta*,int *,int) ;
 int FUNC_10 (struct ddf_meta*) ;
 int FUNC_11 (char*) ;
 char* FUNC_12 (struct g_consumer*,int,int,int*) ;
 scalar_t__ FUNC_13 (int ,int) ;
 scalar_t__ FUNC_14 (scalar_t__*) ;
 void* FUNC_15 (int,int ,int ) ;
 int FUNC_16 (int,scalar_t__) ;
 scalar_t__ FUNC_17 (int ,int ,int) ;
 int FUNC_18 (struct ddf_header*,char*,int) ;
 int FUNC_19 (int,int) ;
 TYPE_5__* VAR_16 ;
 TYPE_4__* VAR_17 ;
 TYPE_3__* VAR_18 ;

__attribute__((used)) static int
FUNC_20(struct g_consumer *VAR_19, struct ddf_meta *VAR_20)
{
 struct g_provider *VAR_21;
 struct ddf_header *VAR_22, *VAR_23;
 char *VAR_24, *VAR_25;
 off_t VAR_26, VAR_27, VAR_28;
 int VAR_29, VAR_30, VAR_31;
 u_int VAR_32;
 uint32_t VAR_33;

 FUNC_10(VAR_20);
 VAR_21 = VAR_19->provider;
 VAR_32 = VAR_20->sectorsize = VAR_21->sectorsize;

 VAR_24 = FUNC_12(VAR_19, VAR_21->mediasize - VAR_32, VAR_32, &VAR_29);
 if (VAR_24 == ((void*)0)) {
  FUNC_3(1, "Cannot read metadata from %s (error=%d).",
      VAR_21->name, VAR_29);
  return (VAR_29);
 }
 VAR_22 = (struct ddf_header *)VAR_24;


 if (FUNC_7(&VAR_22->Signature) == VAR_5)
  VAR_20->bigendian = 1;
 else if (FUNC_14(&VAR_22->Signature) == VAR_5)
  VAR_20->bigendian = 0;
 else {
  FUNC_3(1, "DDF signature check failed on %s", VAR_21->name);
  VAR_29 = VAR_10;
  goto done;
 }
 if (VAR_22->Header_Type != VAR_2) {
  FUNC_3(1, "DDF header type check failed on %s", VAR_21->name);
  VAR_29 = VAR_10;
  goto done;
 }
 VAR_20->hdr = VAR_22;
 VAR_26 = FUNC_2(VAR_20, VAR_23->Primary_Header_LBA);
 VAR_27 = FUNC_2(VAR_20, VAR_23->Secondary_Header_LBA);
 VAR_33 = FUNC_1(VAR_20, VAR_23->CRC);
 FUNC_5(VAR_20, VAR_23->CRC, 0xffffffff);
 VAR_20->hdr = ((void*)0);
 if (FUNC_8(VAR_22, VAR_32) != VAR_33) {
  FUNC_3(1, "DDF CRC mismatch on %s", VAR_21->name);
  VAR_29 = VAR_10;
  goto done;
 }
 if ((VAR_26 + 6) * VAR_32 >= VAR_21->mediasize) {
  FUNC_3(1, "DDF primary header LBA is wrong on %s", VAR_21->name);
  VAR_29 = VAR_10;
  goto done;
 }
 if (VAR_27 != -1 && (VAR_27 + 6) * VAR_32 >= VAR_21->mediasize) {
  FUNC_3(1, "DDF secondary header LBA is wrong on %s", VAR_21->name);
  VAR_29 = VAR_10;
  goto done;
 }
 VAR_28 = VAR_26;

doread:
 VAR_29 = 0;
 FUNC_10(VAR_20);


 VAR_25 = FUNC_12(VAR_19, VAR_28 * VAR_32, VAR_32, &VAR_29);
 if (VAR_25 == ((void*)0)) {
readerror:
  FUNC_3(1, "DDF %s metadata read error on %s (error=%d).",
      (VAR_28 == VAR_26) ? "primary" : "secondary", VAR_21->name, VAR_29);
  if (VAR_28 == VAR_26 && VAR_27 != -1) {
   VAR_28 = VAR_27;
   goto doread;
  }
  FUNC_3(1, "DDF metadata read error on %s.", VAR_21->name);
  goto done;
 }
 VAR_20->hdr = FUNC_15(VAR_32, VAR_12, VAR_13);
 FUNC_18(VAR_20->hdr, VAR_25, VAR_32);
 FUNC_11(VAR_25);
 VAR_23 = VAR_20->hdr;
 VAR_33 = FUNC_1(VAR_20, VAR_23->CRC);
 FUNC_5(VAR_20, VAR_23->CRC, 0xffffffff);
 if (VAR_23->Signature != VAR_22->Signature ||
     FUNC_8(VAR_20->hdr, VAR_32) != VAR_33 ||
     FUNC_17(VAR_23->DDF_Header_GUID, VAR_22->DDF_Header_GUID, 24) ||
     FUNC_2(VAR_20, VAR_23->Primary_Header_LBA) != VAR_26 ||
     FUNC_2(VAR_20, VAR_23->Secondary_Header_LBA) != VAR_27) {
hdrerror:
  FUNC_3(1, "DDF %s metadata check failed on %s",
      (VAR_28 == VAR_26) ? "primary" : "secondary", VAR_21->name);
  if (VAR_28 == VAR_26 && VAR_27 != -1) {
   VAR_28 = VAR_27;
   goto doread;
  }
  FUNC_3(1, "DDF metadata check failed on %s", VAR_21->name);
  VAR_29 = VAR_10;
  goto done;
 }
 if ((VAR_28 == VAR_26 && VAR_23->Header_Type != VAR_3) ||
     (VAR_28 == VAR_27 && VAR_23->Header_Type != VAR_4))
  goto hdrerror;
 VAR_30 = 1;
 VAR_30 = FUNC_16(VAR_30, FUNC_1(VAR_20, VAR_23->cd_section) + FUNC_1(VAR_20, VAR_23->cd_length));
 VAR_30 = FUNC_16(VAR_30, FUNC_1(VAR_20, VAR_23->pdr_section) + FUNC_1(VAR_20, VAR_23->pdr_length));
 VAR_30 = FUNC_16(VAR_30, FUNC_1(VAR_20, VAR_23->vdr_section) + FUNC_1(VAR_20, VAR_23->vdr_length));
 VAR_30 = FUNC_16(VAR_30, FUNC_1(VAR_20, VAR_23->cr_section) + FUNC_1(VAR_20, VAR_23->cr_length));
 VAR_30 = FUNC_16(VAR_30, FUNC_1(VAR_20, VAR_23->pdd_section) + FUNC_1(VAR_20, VAR_23->pdd_length));
 if ((VAR_33 = FUNC_1(VAR_20, VAR_23->bbmlog_section)) != 0xffffffff)
  VAR_30 = FUNC_16(VAR_30, VAR_33 + FUNC_1(VAR_20, VAR_23->bbmlog_length));
 if ((VAR_33 = FUNC_1(VAR_20, VAR_23->Diagnostic_Space)) != 0xffffffff)
  VAR_30 = FUNC_16(VAR_30, VAR_33 + FUNC_1(VAR_20, VAR_23->Diagnostic_Space_Length));
 if ((VAR_33 = FUNC_1(VAR_20, VAR_23->Vendor_Specific_Logs)) != 0xffffffff)
  VAR_30 = FUNC_16(VAR_30, VAR_33 + FUNC_1(VAR_20, VAR_23->Vendor_Specific_Logs_Length));
 if ((VAR_26 + VAR_30) * VAR_32 >= VAR_21->mediasize)
  goto hdrerror;
 if (VAR_27 != -1 && (VAR_27 + VAR_30) * VAR_32 >= VAR_21->mediasize)
  goto hdrerror;

 if (FUNC_0(VAR_20, VAR_23->Max_Primary_Element_Entries) == 0xffff) {
  FUNC_4(VAR_20, VAR_23->Max_Primary_Element_Entries,
      FUNC_19(FUNC_0(VAR_20, VAR_23->Max_PD_Entries),
      (FUNC_0(VAR_20, VAR_23->Configuration_Record_Length) * VAR_32 - 512) / 12));
 }

 if (FUNC_1(VAR_20, VAR_23->cd_length) * VAR_32 >= VAR_11 ||
     FUNC_1(VAR_20, VAR_23->pdr_length) * VAR_32 >= VAR_11 ||
     FUNC_1(VAR_20, VAR_23->vdr_length) * VAR_32 >= VAR_11 ||
     FUNC_1(VAR_20, VAR_23->cr_length) * VAR_32 >= VAR_11 ||
     FUNC_1(VAR_20, VAR_23->pdd_length) * VAR_32 >= VAR_11 ||
     FUNC_1(VAR_20, VAR_23->bbmlog_length) * VAR_32 >= VAR_11) {
  FUNC_3(1, "%s: Blocksize is too big.", VAR_21->name);
  goto hdrerror;
 }


 VAR_25 = FUNC_12(VAR_19, (VAR_28 + FUNC_1(VAR_20, VAR_23->cd_section)) * VAR_32,
     FUNC_1(VAR_20, VAR_23->cd_length) * VAR_32, &VAR_29);
 if (VAR_25 == ((void*)0))
  goto readerror;
 VAR_20->cdr = FUNC_15(FUNC_1(VAR_20, VAR_23->cd_length) * VAR_32, VAR_12, VAR_13);
 FUNC_18(VAR_20->cdr, VAR_25, FUNC_1(VAR_20, VAR_23->cd_length) * VAR_32);
 FUNC_11(VAR_25);
 if (FUNC_1(VAR_20, VAR_15->Signature) != VAR_1)
  goto hdrerror;


 VAR_25 = FUNC_12(VAR_19, (VAR_28 + FUNC_1(VAR_20, VAR_23->pdr_section)) * VAR_32,
     FUNC_1(VAR_20, VAR_23->pdr_length) * VAR_32, &VAR_29);
 if (VAR_25 == ((void*)0))
  goto readerror;
 VAR_20->pdr = FUNC_15(FUNC_1(VAR_20, VAR_23->pdr_length) * VAR_32, VAR_12, VAR_13);
 FUNC_18(VAR_20->pdr, VAR_25, FUNC_1(VAR_20, VAR_23->pdr_length) * VAR_32);
 FUNC_11(VAR_25);
 if (FUNC_1(VAR_20, VAR_17->Signature) != VAR_8)
  goto hdrerror;




 if (VAR_20->bigendian) {
  for (VAR_31 = 0; VAR_31 < FUNC_0(VAR_20, VAR_17->Populated_PDEs); VAR_31++) {
   if (FUNC_13(VAR_20->pdr->entry[VAR_31].PD_GUID, 24))
    continue;
   if (FUNC_1(VAR_20, VAR_17->entry[VAR_31].PD_Reference) ==
       0xffffffff)
    continue;
   if (FUNC_2(VAR_20, VAR_17->entry[VAR_31].Configured_Size) >=
        (1ULL << 48)) {
    FUNC_4(VAR_20, VAR_17->entry[VAR_31].PD_State,
        FUNC_0(VAR_20, VAR_17->entry[VAR_31].PD_State) &
        ~VAR_7);
    FUNC_6(VAR_20, VAR_17->entry[VAR_31].Configured_Size,
        FUNC_2(VAR_20, VAR_17->entry[VAR_31].Configured_Size) &
        ((1ULL << 48) - 1));
   }
  }
 }


 VAR_25 = FUNC_12(VAR_19, (VAR_28 + FUNC_1(VAR_20, VAR_23->vdr_section)) * VAR_32,
     FUNC_1(VAR_20, VAR_23->vdr_length) * VAR_32, &VAR_29);
 if (VAR_25 == ((void*)0))
  goto readerror;
 VAR_20->vdr = FUNC_15(FUNC_1(VAR_20, VAR_23->vdr_length) * VAR_32, VAR_12, VAR_13);
 FUNC_18(VAR_20->vdr, VAR_25, FUNC_1(VAR_20, VAR_23->vdr_length) * VAR_32);
 FUNC_11(VAR_25);
 if (FUNC_1(VAR_20, VAR_18->Signature) != VAR_9)
  goto hdrerror;


 VAR_25 = FUNC_12(VAR_19, (VAR_28 + FUNC_1(VAR_20, VAR_23->cr_section)) * VAR_32,
     FUNC_1(VAR_20, VAR_23->cr_length) * VAR_32, &VAR_29);
 if (VAR_25 == ((void*)0))
  goto readerror;
 VAR_20->cr = FUNC_15(FUNC_1(VAR_20, VAR_23->cr_length) * VAR_32, VAR_12, VAR_13);
 FUNC_18(VAR_20->cr, VAR_25, FUNC_1(VAR_20, VAR_23->cr_length) * VAR_32);
 FUNC_11(VAR_25);


 VAR_25 = FUNC_12(VAR_19, (VAR_28 + FUNC_1(VAR_20, VAR_23->pdd_section)) * VAR_32,
     FUNC_1(VAR_20, VAR_23->pdd_length) * VAR_32, &VAR_29);
 if (VAR_25 == ((void*)0))
  goto readerror;
 VAR_20->pdd = FUNC_15(FUNC_1(VAR_20, VAR_23->pdd_length) * VAR_32, VAR_12, VAR_13);
 FUNC_18(VAR_20->pdd, VAR_25, FUNC_1(VAR_20, VAR_23->pdd_length) * VAR_32);
 FUNC_11(VAR_25);
 if (FUNC_1(VAR_20, VAR_16->Signature) != VAR_6)
  goto hdrerror;
 VAR_31 = FUNC_9(VAR_20, ((void*)0), FUNC_1(VAR_20, VAR_16->PD_Reference));
 if (VAR_31 < 0)
  goto hdrerror;


 if (FUNC_1(VAR_20, VAR_23->bbmlog_section) != 0xffffffff &&
     FUNC_1(VAR_20, VAR_23->bbmlog_length) != 0) {
  VAR_25 = FUNC_12(VAR_19, (VAR_28 + FUNC_1(VAR_20, VAR_23->bbmlog_section)) * VAR_32,
      FUNC_1(VAR_20, VAR_23->bbmlog_length) * VAR_32, &VAR_29);
  if (VAR_25 == ((void*)0))
   goto readerror;
  VAR_20->bbm = FUNC_15(FUNC_1(VAR_20, VAR_23->bbmlog_length) * VAR_32, VAR_12, VAR_13);
  FUNC_18(VAR_20->bbm, VAR_25, FUNC_1(VAR_20, VAR_23->bbmlog_length) * VAR_32);
  FUNC_11(VAR_25);
  if (FUNC_1(VAR_20, VAR_14->Signature) != VAR_0)
   goto hdrerror;
 }

done:
 FUNC_11(VAR_24);
 if (VAR_29 != 0)
  FUNC_10(VAR_20);
 return (VAR_29);
}
