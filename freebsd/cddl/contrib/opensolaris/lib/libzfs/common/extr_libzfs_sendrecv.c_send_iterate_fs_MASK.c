
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ dds_creation_txg; scalar_t__ dds_guid; scalar_t__* dds_origin; } ;
struct TYPE_14__ {TYPE_1__ zfs_dmustats; int zfs_hdl; int zfs_name; } ;
typedef TYPE_2__ zfs_handle_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_15__ {scalar_t__ parent_fromsnap_guid; scalar_t__ fromsnap_txg; scalar_t__ tosnap_txg; scalar_t__ recursive; int * fss; int * snapprops; int * parent_snaps; int replicate; int * tosnap; int fsname; scalar_t__ verbose; int * fromsnap; } ;
typedef TYPE_3__ send_data_t ;
typedef int nvlist_t ;
typedef int longlong_t ;
typedef int guidstring ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 char* FUNC_1 (int ,char*) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *,char*,scalar_t__) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,char*,int ,int *,...) ;
 scalar_t__ FUNC_7 (int ,int ,int *) ;
 scalar_t__ FUNC_8 (int *,char*,int *) ;
 scalar_t__ FUNC_9 (int *,char*,scalar_t__) ;
 scalar_t__ FUNC_10 (int **,int ,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (TYPE_2__*,int *) ;
 int VAR_3 ;
 int FUNC_13 (char*,int,char*,int ) ;
 int VAR_4 ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (TYPE_2__*,int (*) (TYPE_2__*,void*),TYPE_3__*) ;
 int FUNC_16 (TYPE_2__*,int ,TYPE_3__*,scalar_t__,scalar_t__) ;
 TYPE_2__* FUNC_17 (int ,scalar_t__*,int ) ;

__attribute__((used)) static int
FUNC_18(zfs_handle_t *VAR_5, void *VAR_6)
{
 send_data_t *VAR_7 = VAR_6;
 nvlist_t *VAR_8, *VAR_9;
 int VAR_10 = 0;
 uint64_t VAR_11 = 0, VAR_12 = 0;
 uint64_t VAR_13 = VAR_7->parent_fromsnap_guid;
 uint64_t VAR_14 = VAR_7->fromsnap_txg;
 uint64_t VAR_15 = VAR_7->tosnap_txg;
 uint64_t VAR_16 = VAR_5->zfs_dmustats.dds_creation_txg;
 uint64_t VAR_17 = VAR_5->zfs_dmustats.dds_guid;
 uint64_t VAR_18, VAR_19;
 char VAR_20[64];

 VAR_18 = FUNC_7(VAR_5->zfs_hdl, VAR_5->zfs_name, VAR_7->fromsnap);
 if (VAR_18 != 0)
  VAR_7->fromsnap_txg = VAR_18;

 VAR_19 = FUNC_7(VAR_5->zfs_hdl, VAR_5->zfs_name, VAR_7->tosnap);
 if (VAR_19 != 0)
  VAR_7->tosnap_txg = VAR_19;
 if (VAR_7->tosnap != ((void*)0) && VAR_19 == 0) {
  if (VAR_7->tosnap_txg != 0 && VAR_16 > VAR_7->tosnap_txg) {
   if (VAR_7->verbose) {
    (void) FUNC_6(VAR_4, FUNC_1(VAR_1,
        "skipping dataset %s: snapshot %s does "
        "not exist\n"), VAR_5->zfs_name, VAR_7->tosnap);
   }
  } else {
   (void) FUNC_6(VAR_4, FUNC_1(VAR_1,
       "cannot send %s@%s%s: snapshot %s@%s does not "
       "exist\n"), VAR_7->fsname, VAR_7->tosnap, VAR_7->recursive ?
       FUNC_1(VAR_1, " recursively") : "",
       VAR_5->zfs_name, VAR_7->tosnap);
   VAR_10 = -1;
  }
  goto out;
 }

 VAR_8 = FUNC_4();
 FUNC_2(VAR_8, "name", VAR_5->zfs_name);
 FUNC_3(VAR_8, "parentfromsnap",
     VAR_7->parent_fromsnap_guid);

 if (VAR_5->zfs_dmustats.dds_origin[0]) {
  zfs_handle_t *VAR_21 = FUNC_17(VAR_5->zfs_hdl,
      VAR_5->zfs_dmustats.dds_origin, VAR_2);
  if (VAR_21 == ((void*)0)) {
   VAR_10 = -1;
   goto out;
  }
  FUNC_0(0 == FUNC_9(VAR_8, "origin",
      VAR_21->zfs_dmustats.dds_guid));
 }


 FUNC_0(0 == FUNC_10(&VAR_9, VAR_0, 0));
 FUNC_12(VAR_5, VAR_9);
 FUNC_0(0 == FUNC_8(VAR_8, "props", VAR_9));
 FUNC_11(VAR_9);


 if (!VAR_7->replicate && VAR_18 != 0)
  VAR_11 = VAR_18;
 if (!VAR_7->replicate && VAR_19 != 0)
  VAR_12 = VAR_19;
 VAR_7->parent_fromsnap_guid = 0;
 FUNC_0(0 == FUNC_10(&VAR_7->parent_snaps, VAR_0, 0));
 FUNC_0(0 == FUNC_10(&VAR_7->snapprops, VAR_0, 0));
 (void) FUNC_16(VAR_5, VAR_3, VAR_7,
     VAR_11, VAR_12);
 FUNC_0(0 == FUNC_8(VAR_8, "snaps", VAR_7->parent_snaps));
 FUNC_0(0 == FUNC_8(VAR_8, "snapprops", VAR_7->snapprops));
 FUNC_5(VAR_7->parent_snaps);
 FUNC_5(VAR_7->snapprops);


 (void) FUNC_13(VAR_20, sizeof (VAR_20),
     "0x%llx", (longlong_t)VAR_17);
 FUNC_0(0 == FUNC_8(VAR_7->fss, VAR_20, VAR_8));
 FUNC_11(VAR_8);


 if (VAR_7->recursive)
  VAR_10 = FUNC_15(VAR_5, FUNC_18, VAR_7);

out:
 VAR_7->parent_fromsnap_guid = VAR_13;
 VAR_7->fromsnap_txg = VAR_14;
 VAR_7->tosnap_txg = VAR_15;

 FUNC_14(VAR_5);
 return (VAR_10);
}
