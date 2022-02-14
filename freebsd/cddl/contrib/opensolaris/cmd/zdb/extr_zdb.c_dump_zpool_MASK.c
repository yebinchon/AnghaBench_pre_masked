
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;
typedef struct TYPE_25__ TYPE_10__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_26__ {int spa_root_vdev; int spa_meta_objset; int spa_deferred_bpobj; TYPE_2__* spa_dsl_pool; int spa_uberblock; int spa_config; } ;
typedef TYPE_1__ spa_t ;
typedef size_t spa_feature_t ;
typedef int longlong_t ;
struct TYPE_27__ {int dp_bptree_obj; int dp_obsolete_bpobj; int dp_free_bpobj; int dp_meta_objset; } ;
typedef TYPE_2__ dsl_pool_t ;
struct TYPE_25__ {int fi_flags; char* fi_uname; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__* VAR_7 ;
 int FUNC_3 (int ,int ,int *,int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ,int ,char*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int *,char*,int ) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (int ,int) ;
 int VAR_8 ;
 int* VAR_9 ;
 int FUNC_17 (TYPE_1__*) ;
 int FUNC_18 (int *,char*,char*) ;
 int FUNC_19 (int) ;
 int FUNC_20 (TYPE_1__*,TYPE_10__*,scalar_t__*) ;
 int VAR_10 ;
 int FUNC_21 (char*,...) ;
 int FUNC_22 (int *,int *) ;
 int FUNC_23 (TYPE_1__*) ;
 scalar_t__ FUNC_24 (TYPE_1__*,int ) ;
 int FUNC_25 (TYPE_1__*,int ) ;
 TYPE_10__* VAR_11 ;
 TYPE_2__* FUNC_26 (TYPE_1__*) ;
 int FUNC_27 (TYPE_1__*) ;
 scalar_t__ FUNC_28 (TYPE_1__*) ;
 int FUNC_29 (TYPE_1__*) ;
 int FUNC_30 (TYPE_1__*) ;
 int FUNC_31 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_32(spa_t *VAR_12)
{
 dsl_pool_t *VAR_13 = FUNC_26(VAR_12);
 int VAR_14 = 0;

 if (VAR_9['S']) {
  FUNC_17(VAR_12);
  return;
 }

 if (!VAR_9['e'] && VAR_9['C'] > 1) {
  (void) FUNC_21("\nCached configuration:\n");
  FUNC_16(VAR_12->spa_config, 8);
 }

 if (VAR_9['C'])
  FUNC_7(VAR_12);

 if (VAR_9['u'])
  FUNC_18(&VAR_12->spa_uberblock, "\nUberblock:\n", "\n");

 if (VAR_9['D'])
  FUNC_4(VAR_12);

 if (VAR_9['d'] > 2 || VAR_9['m'])
  FUNC_14(VAR_12);
 if (VAR_9['M'])
  FUNC_13(VAR_12);

 if (VAR_9['d'] || VAR_9['i']) {
  VAR_10 = FUNC_22(((void*)0), ((void*)0));
  FUNC_9(VAR_13->dp_meta_objset);

  if (VAR_9['d'] >= 3) {
   dsl_pool_t *VAR_15 = VAR_12->spa_dsl_pool;
   FUNC_11(&VAR_12->spa_deferred_bpobj,
       "Deferred frees", 0);
   if (FUNC_28(VAR_12) >= VAR_5) {
    FUNC_11(&VAR_15->dp_free_bpobj,
        "Pool snapshot frees", 0);
   }
   if (FUNC_2(&VAR_15->dp_obsolete_bpobj)) {
    FUNC_0(FUNC_25(VAR_12,
        VAR_4));
    FUNC_11(&VAR_15->dp_obsolete_bpobj,
        "Pool obsolete blocks", 0);
   }

   if (FUNC_24(VAR_12,
       VAR_3)) {
    FUNC_6(VAR_12->spa_meta_objset,
        VAR_15->dp_bptree_obj,
        "Pool dataset frees");
   }
   FUNC_10(VAR_12->spa_root_vdev, 0);
  }
  (void) FUNC_3(FUNC_27(VAR_12), VAR_8,
      ((void*)0), VAR_1 | VAR_0);

  if (VAR_14 == 0 && !VAR_9['L'])
   VAR_14 = FUNC_15(VAR_12);

  for (spa_feature_t VAR_16 = 0; VAR_16 < VAR_2; VAR_16++) {
   uint64_t VAR_17;

   if (!(VAR_11[VAR_16].fi_flags &
       VAR_6)) {
    FUNC_1(VAR_7[VAR_16]);
    continue;
   }
   (void) FUNC_20(VAR_12,
       &VAR_11[VAR_16], &VAR_17);
   if (VAR_7[VAR_16] != VAR_17) {
    (void) FUNC_21("%s feature refcount mismatch: "
        "%lld datasets != %lld refcount\n",
        VAR_11[VAR_16].fi_uname,
        (longlong_t)VAR_7[VAR_16],
        (longlong_t)VAR_17);
    VAR_14 = 2;
   } else {
    (void) FUNC_21("Verified %s feature refcount "
        "of %llu is correct\n",
        VAR_11[VAR_16].fi_uname,
        (longlong_t)VAR_17);
   }
  }

  if (VAR_14 == 0) {
   VAR_14 = FUNC_30(VAR_12);
  }
 }

 if (VAR_14 == 0 && (VAR_9['b'] || VAR_9['c']))
  VAR_14 = FUNC_5(VAR_12);

 if (VAR_14 == 0)
  VAR_14 = FUNC_31(VAR_12);

 if (VAR_9['s'])
  FUNC_23(VAR_12);

 if (VAR_9['h'])
  FUNC_12(VAR_12);

 if (VAR_14 == 0)
  VAR_14 = FUNC_29(VAR_12);

 if (VAR_14 != 0) {
  FUNC_8();
  FUNC_19(VAR_14);
 }
}
