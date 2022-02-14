
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


typedef int uint64_t ;
typedef int uint32_t ;
struct g_raid_volume {int v_name; int v_disks_count; scalar_t__ v_raid_level; struct g_raid_subdisk* v_subdisks; struct g_raid_md_ddf_pervolume* v_md_data; } ;
struct g_raid_subdisk {scalar_t__ sd_state; int sd_size; int sd_offset; scalar_t__ sd_rebuild_pos; struct g_raid_disk* sd_disk; } ;
struct g_raid_softc {scalar_t__ sc_md; } ;
struct ddf_vol_meta {int sectorsize; TYPE_2__* vdc; int * cr; } ;
struct g_raid_md_ddf_pervolume {int pv_started; struct ddf_vol_meta pv_meta; } ;
struct g_raid_md_ddf_perdisk {struct ddf_vol_meta pd_meta; } ;
struct g_raid_md_ddf_object {struct ddf_vol_meta mdio_meta; } ;
struct g_raid_disk {scalar_t__ d_state; int d_subdisks; scalar_t__ d_md_data; struct g_raid_softc* d_softc; } ;
struct ddf_vdc_record {int Block_Count; int * Physical_Disk_Sequence; int Signature; } ;
struct ddf_sa_record {int Spare_Type; int Signature; } ;
struct ddf_meta {int sectorsize; TYPE_2__* vdc; int * cr; } ;
typedef int off_t ;
struct TYPE_14__ {int Max_Primary_Element_Entries; int Max_Partitions; } ;
struct TYPE_13__ {int PD_Reference; } ;
struct TYPE_12__ {TYPE_1__* entry; } ;
struct TYPE_11__ {int Primary_Element_Count; } ;
struct TYPE_10__ {int Init_State; int VD_State; } ;
struct TYPE_9__ {int VD_GUID; } ;
struct TYPE_8__ {int PD_State; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ddf_vol_meta*,int ) ;
 int FUNC_1 (struct ddf_vol_meta*,int ) ;
 scalar_t__ FUNC_2 (struct ddf_vol_meta*,int ) ;
 scalar_t__ FUNC_3 (struct ddf_vol_meta*,int *) ;
 int FUNC_4 (struct ddf_vol_meta*,int ) ;
 int FUNC_5 (struct ddf_vol_meta*,int ) ;
 int FUNC_6 (int,struct g_raid_softc*,char*,int ,...) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 int FUNC_7 (struct ddf_vol_meta*,int ,int) ;
 int FUNC_8 (struct ddf_vol_meta*,int ,int) ;
 int FUNC_9 (int *,struct g_raid_subdisk*,int ) ;
 int FUNC_10 (int *,struct g_raid_subdisk*,int ) ;
 int FUNC_11 (struct ddf_vol_meta*,int *) ;
 int FUNC_12 (struct ddf_vol_meta*,int ,int*,int*) ;
 int FUNC_13 (struct ddf_vol_meta*,int *,int ) ;
 struct ddf_sa_record* FUNC_14 (struct ddf_vol_meta*,int ) ;
 struct ddf_vdc_record* FUNC_15 (struct ddf_vol_meta*,int ) ;
 int FUNC_16 (struct ddf_vol_meta*,int*,int*) ;
 int FUNC_17 (struct g_raid_disk*,int ) ;
 int FUNC_18 (struct g_raid_subdisk*,scalar_t__) ;
 int FUNC_19 (struct g_raid_subdisk*,int ,int ) ;
 int FUNC_20 (struct g_raid_disk*) ;
 TYPE_7__* VAR_23 ;
 TYPE_6__* VAR_24 ;
 TYPE_5__* VAR_25 ;
 int VAR_26 ;
 TYPE_4__* VAR_27 ;
 TYPE_3__* VAR_28 ;

__attribute__((used)) static int
FUNC_21(struct g_raid_disk *VAR_29, struct g_raid_volume *VAR_30)
{
 struct g_raid_softc *VAR_31;
 struct g_raid_subdisk *VAR_32;
 struct g_raid_md_ddf_perdisk *VAR_33;
 struct g_raid_md_ddf_pervolume *VAR_34;
 struct g_raid_md_ddf_object *VAR_35;
 struct ddf_vol_meta *VAR_36;
 struct ddf_meta *VAR_37, *VAR_38;
 struct ddf_vdc_record *VAR_39;
 struct ddf_sa_record *VAR_40;
 off_t VAR_41, VAR_42 = 0, VAR_43 = 0;
 uint64_t *VAR_44;
 int VAR_45, VAR_46 = -1, VAR_47 = -1, VAR_48;
 int VAR_49, VAR_50 = 0;
 uint32_t VAR_51;

 VAR_31 = VAR_29->d_softc;
 VAR_35 = (struct g_raid_md_ddf_object *)VAR_31->sc_md;
 VAR_33 = (struct g_raid_md_ddf_perdisk *)VAR_29->d_md_data;
 VAR_37 = &VAR_33->pd_meta;
 VAR_51 = FUNC_1(&VAR_33->pd_meta, VAR_24->PD_Reference);

 VAR_34 = VAR_30->v_md_data;
 VAR_36 = &VAR_34->pv_meta;
 VAR_38 = &VAR_35->mdio_meta;


 VAR_45 = FUNC_12(VAR_36, VAR_51,
     &VAR_46, &VAR_47);
 VAR_48 = FUNC_13(VAR_38, ((void*)0), VAR_51);

 if (VAR_45 < 0) {
  FUNC_6(1, VAR_31,
      "Disk %s is not a present part of the volume %s",
      FUNC_20(VAR_29), VAR_30->v_name);


  if ((FUNC_0(VAR_38, VAR_25->entry[VAR_48].PD_State) & VAR_1) != 0) {
   FUNC_17(VAR_29, VAR_12);
   return (0);
  }


  if ((VAR_39 = FUNC_15(VAR_37, VAR_36->vdc->VD_GUID)) != ((void*)0))
   FUNC_7(VAR_37, VAR_39->Signature, 0xffffffff);


  if (!VAR_34->pv_started)
   goto nofit;




  if (FUNC_11(&VAR_33->pd_meta, ((void*)0)) >=
   FUNC_0(&VAR_33->pd_meta, VAR_23->Max_Partitions)) {
   FUNC_6(1, VAR_31, "No free partitions on disk %s",
       FUNC_20(VAR_29));
   goto nofit;
  }
  FUNC_16(&VAR_33->pd_meta, &VAR_42, &VAR_43);
  if (VAR_43 == 0) {
   FUNC_6(1, VAR_31, "No free space on disk %s",
       FUNC_20(VAR_29));
   goto nofit;
  }
  VAR_42 *= VAR_33->pd_meta.sectorsize;
  VAR_43 *= VAR_33->pd_meta.sectorsize;
  VAR_41 = VAR_22;
  for (VAR_49 = 0; VAR_49 < VAR_30->v_disks_count; VAR_49++) {
   VAR_32 = &VAR_30->v_subdisks[VAR_49];
   if (VAR_32->sd_state != VAR_18)
    VAR_41 = VAR_32->sd_size;
   if (VAR_32->sd_state <= VAR_16 &&
       (VAR_45 < 0 ||
        VAR_30->v_subdisks[VAR_49].sd_state < VAR_32->sd_state))
    VAR_45 = VAR_49;
  }
  if (VAR_45 >= 0 &&
      VAR_30->v_raid_level != VAR_21 &&
      VAR_43 < VAR_41) {
   FUNC_6(1, VAR_31, "Disk %s free space "
       "is too small (%ju < %ju)",
       FUNC_20(VAR_29), VAR_43, VAR_41);
   VAR_45 = -1;
  }
  if (VAR_45 >= 0) {
   if (VAR_30->v_raid_level != VAR_21)
    VAR_43 = VAR_41;
   VAR_46 = VAR_45 / FUNC_0(VAR_36, VAR_27->Primary_Element_Count);
   VAR_47 = VAR_45 % FUNC_0(VAR_36, VAR_27->Primary_Element_Count);
  } else {
nofit:
   if (VAR_29->d_state == VAR_10)
    FUNC_17(VAR_29,
        VAR_11);
   return (0);
  }





  VAR_40 = FUNC_14(&VAR_33->pd_meta, 0);
  if (VAR_40 != ((void*)0)) {
   if ((FUNC_5(&VAR_33->pd_meta, VAR_40->Spare_Type) &
       VAR_4) == 0) {
    FUNC_7(&VAR_33->pd_meta, VAR_40->Signature, 0xffffffff);
   } else {
    FUNC_8(&VAR_33->pd_meta, VAR_40->Spare_Type,
        FUNC_5(&VAR_33->pd_meta, VAR_40->Spare_Type) |
        VAR_3);
   }
  }

  FUNC_6(1, VAR_31, "Disk %s takes pos %d in the volume %s",
      FUNC_20(VAR_29), VAR_45, VAR_30->v_name);
  VAR_50 = 1;
 }

 VAR_32 = &VAR_30->v_subdisks[VAR_45];

 if (VAR_50 && VAR_32->sd_disk != ((void*)0)) {
  FUNC_17(VAR_32->sd_disk,
      VAR_12);
  FUNC_10(&VAR_32->sd_disk->d_subdisks,
      VAR_32, VAR_26);
 }
 VAR_30->v_subdisks[VAR_45].sd_disk = VAR_29;
 FUNC_9(&VAR_29->d_subdisks, VAR_32, VAR_26);


 if (VAR_50)
  FUNC_17(VAR_29, VAR_8);
 else if (FUNC_0(VAR_38, VAR_25->entry[VAR_48].PD_State) & VAR_1)
  FUNC_17(VAR_29, VAR_9);
 else
  FUNC_17(VAR_29, VAR_8);

 if (VAR_50) {
  VAR_32->sd_offset = VAR_42;
  VAR_32->sd_size = VAR_43;
 } else if (VAR_37->cr != ((void*)0) &&
     (VAR_39 = FUNC_15(VAR_37, VAR_36->vdc->VD_GUID)) != ((void*)0)) {
  VAR_44 = (uint64_t *)&(VAR_39->Physical_Disk_Sequence[FUNC_0(VAR_36, VAR_23->Max_Primary_Element_Entries)]);
  VAR_32->sd_offset = (off_t)FUNC_3(VAR_37, VAR_44 + VAR_47) * 512;
  VAR_32->sd_size = (off_t)FUNC_2(VAR_37, VAR_39->Block_Count) * 512;
 }

 if (VAR_50) {

  FUNC_18(VAR_32,
      VAR_17);
 } else if (FUNC_0(VAR_38, VAR_25->entry[VAR_48].PD_State) & VAR_1) {

  FUNC_18(VAR_32,
      VAR_16);
 } else if ((FUNC_0(VAR_38, VAR_25->entry[VAR_48].PD_State) &
      (VAR_0 | VAR_2)) != 0) {

  FUNC_18(VAR_32,
      VAR_19);
  VAR_32->sd_rebuild_pos = 0;
 } else if ((FUNC_4(VAR_36, VAR_28->VD_State) & VAR_5) != 0 ||
     (FUNC_4(VAR_36, VAR_28->Init_State) & VAR_7) !=
      VAR_6) {

  FUNC_18(VAR_32,
      VAR_20);
 } else {

  FUNC_18(VAR_32,
      VAR_15);
 }
 FUNC_19(VAR_32, VAR_14,
     VAR_13);

 return (VAR_50);
}
