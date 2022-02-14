
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int u_int ;
struct ddf_vol_meta {int sectorsize; struct ddf_vdc_record** bvdc; struct ddf_vdc_record* vdc; struct ddf_vdc_record* vde; struct ddf_vdc_record* cdr; struct ddf_vdc_record* hdr; int bigendian; TYPE_1__* vdr; } ;
struct ddf_vdc_record {int Sequence_Number; int Secondary_Element_Seq; int Secondary_Element_Count; } ;
struct ddf_vd_entry {int Sequence_Number; int Secondary_Element_Seq; int Secondary_Element_Count; } ;
struct ddf_meta {int sectorsize; struct ddf_vdc_record** bvdc; struct ddf_vdc_record* vdc; struct ddf_vdc_record* vde; struct ddf_vdc_record* cdr; struct ddf_vdc_record* hdr; int bigendian; TYPE_1__* vdr; } ;
typedef scalar_t__ int32_t ;
struct TYPE_6__ {int Sequence_Number; } ;
struct TYPE_5__ {int cd_length; int Configuration_Record_Length; } ;
struct TYPE_4__ {struct ddf_vdc_record* entry; } ;


 int FUNC_0 (struct ddf_vol_meta*,int ) ;
 int FUNC_1 (struct ddf_vol_meta*,int ) ;
 int FUNC_2 (struct ddf_vol_meta*,int ) ;
 int FUNC_3 (struct ddf_vol_meta*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__** VAR_2 ;
 size_t FUNC_4 (struct ddf_vol_meta*,int *) ;
 struct ddf_vdc_record* FUNC_5 (struct ddf_vol_meta*,int *) ;
 int FUNC_6 (struct ddf_vdc_record*,int ) ;
 TYPE_2__* VAR_3 ;
 void* FUNC_7 (int,int ,int ) ;
 int FUNC_8 (struct ddf_vdc_record*,struct ddf_vdc_record*,int) ;

__attribute__((used)) static void
FUNC_9(struct ddf_vol_meta *VAR_4, struct ddf_meta *VAR_5,
    uint8_t *VAR_6, int VAR_7)
{
 struct ddf_vd_entry *VAR_8;
 struct ddf_vdc_record *VAR_9;
 int VAR_10, VAR_11, VAR_12, VAR_13;
 u_int VAR_14;

 VAR_8 = &VAR_5->vdr->entry[FUNC_4(VAR_5, VAR_6)];
 VAR_9 = FUNC_5(VAR_5, VAR_6);
 if (FUNC_3(VAR_5, VAR_9->Secondary_Element_Count) == 1)
  VAR_12 = 0;
 else
  VAR_12 = FUNC_3(VAR_5, VAR_9->Secondary_Element_Seq);
 VAR_13 = FUNC_0(VAR_5, VAR_3->Configuration_Record_Length) * VAR_5->sectorsize;

 if (VAR_4->vdc == ((void*)0) ||
     (!VAR_7 && ((int32_t)(FUNC_2(VAR_5, VAR_9->Sequence_Number) -
     FUNC_1(VAR_4, VAR_9->Sequence_Number))) > 0))
  VAR_10 = 1;
 else
  VAR_10 = 0;

 if (VAR_4->bvdc[VAR_12] == ((void*)0) ||
     (!VAR_7 && ((int32_t)(FUNC_2(VAR_5, VAR_9->Sequence_Number) -
     FUNC_1(VAR_4, VAR_2[VAR_12]->Sequence_Number))) > 0))
  VAR_11 = 1;
 else
  VAR_11 = 0;

 if (VAR_10) {
  VAR_4->bigendian = VAR_5->bigendian;
  VAR_14 = VAR_4->sectorsize = VAR_5->sectorsize;
  if (VAR_4->hdr != ((void*)0))
   FUNC_6(VAR_4->hdr, VAR_0);
  VAR_4->hdr = FUNC_7(VAR_14, VAR_0, VAR_1);
  FUNC_8(VAR_4->hdr, VAR_5->hdr, VAR_14);
  if (VAR_4->cdr != ((void*)0))
   FUNC_6(VAR_4->cdr, VAR_0);
  VAR_4->cdr = FUNC_7(FUNC_1(VAR_5, VAR_3->cd_length) * VAR_14, VAR_0, VAR_1);
  FUNC_8(VAR_4->cdr, VAR_5->cdr, FUNC_1(VAR_5, VAR_3->cd_length) * VAR_14);
  if (VAR_4->vde != ((void*)0))
   FUNC_6(VAR_4->vde, VAR_0);
  VAR_4->vde = FUNC_7(sizeof(struct ddf_vd_entry), VAR_0, VAR_1);
  FUNC_8(VAR_4->vde, VAR_8, sizeof(struct ddf_vd_entry));
  if (VAR_4->vdc != ((void*)0))
   FUNC_6(VAR_4->vdc, VAR_0);
  VAR_4->vdc = FUNC_7(VAR_13, VAR_0, VAR_1);
  FUNC_8(VAR_4->vdc, VAR_9, VAR_13);
 }
 if (VAR_11) {
  if (VAR_4->bvdc[VAR_12] != ((void*)0))
   FUNC_6(VAR_4->bvdc[VAR_12], VAR_0);
  VAR_4->bvdc[VAR_12] = FUNC_7(VAR_13, VAR_0, VAR_1);
  FUNC_8(VAR_4->bvdc[VAR_12], VAR_9, VAR_13);
 }
}
