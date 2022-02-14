
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_10__ ;


typedef int uint64_t ;
typedef int ss_cnt ;
typedef int objset_t ;
typedef int fs_cnt ;
struct TYPE_23__ {int dp_spa; int * dp_meta_objset; } ;
typedef TYPE_2__ dsl_pool_t ;
struct TYPE_24__ {int dd_object; int dd_myname; struct TYPE_24__* dd_parent; int dd_dbuf; TYPE_1__* dd_pool; } ;
typedef TYPE_3__ dsl_dir_t ;
struct TYPE_25__ {int ddra_newname; int ddra_oldname; } ;
typedef TYPE_4__ dsl_dir_rename_arg_t ;
typedef int dmu_tx_t ;
struct TYPE_22__ {int * dp_meta_objset; } ;
struct TYPE_21__ {int dd_child_dir_zapobj; int dd_parent_obj; int dd_used_bytes; int dd_reserved; int dd_uncompressed_bytes; int dd_compressed_bytes; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 TYPE_2__* FUNC_3 (int *) ;
 int FUNC_4 (TYPE_3__*,int ,int ,int ,int ,int *) ;
 int FUNC_5 (TYPE_2__*,int ,TYPE_3__*,TYPE_3__**,char const**) ;
 int FUNC_6 (TYPE_2__*,int ,int *,TYPE_3__*,TYPE_3__**) ;
 TYPE_10__* FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*,int ,int ,int *) ;
 int FUNC_10 (TYPE_3__*) ;
 scalar_t__ FUNC_11 (int ,int ) ;
 int FUNC_12 (TYPE_3__*,char*,int *,char*,int ) ;
 int FUNC_13 (int ,char const*) ;
 int FUNC_14 (int *,int ,int ,int,int,int *,int *) ;
 int FUNC_15 (int *,int ,int ,int,int,int *) ;
 int FUNC_16 (int *,int ,int ,int *) ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (int ,int ) ;

__attribute__((used)) static void
FUNC_19(void *VAR_6, dmu_tx_t *VAR_7)
{
 dsl_dir_rename_arg_t *VAR_8 = VAR_6;
 dsl_pool_t *VAR_9 = FUNC_3(VAR_7);
 dsl_dir_t *VAR_10, *VAR_11;
 const char *VAR_12;
 int VAR_13;
 objset_t *VAR_14 = VAR_9->dp_meta_objset;

 FUNC_1(FUNC_5(VAR_9, VAR_8->ddra_oldname, VAR_4, &VAR_10, ((void*)0)));
 FUNC_1(FUNC_5(VAR_9, VAR_8->ddra_newname, VAR_4, &VAR_11,
     &VAR_12));


 FUNC_12(VAR_10, "rename", VAR_7,
     "-> %s", VAR_8->ddra_newname);

 if (VAR_11 != VAR_10->dd_parent) {
  objset_t *VAR_15 = VAR_10->dd_pool->dp_meta_objset;
  uint64_t VAR_16 = 0;
  uint64_t VAR_17 = 0;





  if (FUNC_11(VAR_9->dp_spa,
      VAR_5)) {
   FUNC_1(FUNC_15(VAR_15, VAR_10->dd_object,
       VAR_0, sizeof (VAR_16), 1,
       &VAR_16));

   VAR_16++;

   FUNC_1(FUNC_15(VAR_15, VAR_10->dd_object,
       VAR_1, sizeof (VAR_17), 1,
       &VAR_17));
  }

  FUNC_9(VAR_10->dd_parent, -VAR_16,
      VAR_0, VAR_7);
  FUNC_9(VAR_11, VAR_16,
      VAR_0, VAR_7);

  FUNC_9(VAR_10->dd_parent, -VAR_17,
      VAR_1, VAR_7);
  FUNC_9(VAR_11, VAR_17,
      VAR_1, VAR_7);

  FUNC_4(VAR_10->dd_parent, VAR_2,
      -FUNC_7(VAR_10)->dd_used_bytes,
      -FUNC_7(VAR_10)->dd_compressed_bytes,
      -FUNC_7(VAR_10)->dd_uncompressed_bytes, VAR_7);
  FUNC_4(VAR_11, VAR_2,
      FUNC_7(VAR_10)->dd_used_bytes,
      FUNC_7(VAR_10)->dd_compressed_bytes,
      FUNC_7(VAR_10)->dd_uncompressed_bytes, VAR_7);

  if (FUNC_7(VAR_10)->dd_reserved >
      FUNC_7(VAR_10)->dd_used_bytes) {
   uint64_t VAR_18 = FUNC_7(VAR_10)->dd_reserved -
       FUNC_7(VAR_10)->dd_used_bytes;

   FUNC_4(VAR_10->dd_parent, VAR_3,
       -VAR_18, 0, 0, VAR_7);
   FUNC_4(VAR_11, VAR_3,
       VAR_18, 0, 0, VAR_7);
  }
 }

 FUNC_2(VAR_10->dd_dbuf, VAR_7);


 VAR_13 = FUNC_16(VAR_14,
     FUNC_7(VAR_10->dd_parent)->dd_child_dir_zapobj,
     VAR_10->dd_myname, VAR_7);
 FUNC_0(VAR_13);

 (void) FUNC_13(VAR_10->dd_myname, VAR_12);
 FUNC_8(VAR_10->dd_parent, VAR_10);
 FUNC_7(VAR_10)->dd_parent_obj = VAR_11->dd_object;
 FUNC_1(FUNC_6(VAR_9,
     VAR_11->dd_object, ((void*)0), VAR_10, &VAR_10->dd_parent));


 FUNC_1(FUNC_14(VAR_14, FUNC_7(VAR_11)->dd_child_dir_zapobj,
     VAR_10->dd_myname, 8, 1, &VAR_10->dd_object, VAR_7));
 FUNC_10(VAR_10);

 FUNC_8(VAR_11, VAR_4);
 FUNC_8(VAR_10, VAR_4);
}
