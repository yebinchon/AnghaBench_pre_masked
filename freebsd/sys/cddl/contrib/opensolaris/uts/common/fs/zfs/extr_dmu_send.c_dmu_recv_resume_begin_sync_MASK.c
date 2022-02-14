
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint64_t ;
typedef int recvname ;
typedef int dsl_pool_t ;
struct TYPE_13__ {int ds_bp_rwlock; int ds_dbuf; int ds_object; } ;
typedef TYPE_2__ dsl_dataset_t ;
typedef int dmu_tx_t ;
struct TYPE_14__ {TYPE_1__* drba_cookie; } ;
typedef TYPE_3__ dmu_recv_begin_arg_t ;
struct TYPE_15__ {int ds_flags; } ;
struct TYPE_12__ {char* drc_tofs; TYPE_2__* drc_ds; int drc_newfs; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (scalar_t__) ;
 int VAR_4 ;
 int FUNC_4 (int ,int *) ;
 int VAR_5 ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*) ;
 scalar_t__ FUNC_7 (int *,char const*,int ,TYPE_2__**) ;
 scalar_t__ FUNC_8 (int *,int ,int ,TYPE_2__**) ;
 TYPE_6__* FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*,int ) ;
 char* VAR_6 ;
 int FUNC_11 (int *,int ,int ) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (char*,int,char*,char const*,char*) ;
 int FUNC_14 (TYPE_2__*,char*,int *,char*) ;

__attribute__((used)) static void
FUNC_15(void *VAR_7, dmu_tx_t *VAR_8)
{
 dmu_recv_begin_arg_t *VAR_9 = VAR_7;
 dsl_pool_t *VAR_10 = FUNC_5(VAR_8);
 const char *VAR_11 = VAR_9->drba_cookie->drc_tofs;
 dsl_dataset_t *VAR_12;
 uint64_t VAR_13;

 char VAR_14[VAR_4 + 6];

 (void) FUNC_13(VAR_14, sizeof (VAR_14), "%s/%s",
     VAR_11, VAR_6);

 if (FUNC_7(VAR_10, VAR_14, VAR_2, &VAR_12) != 0) {

  FUNC_3(FUNC_7(VAR_10, VAR_11, VAR_2, &VAR_12));
  VAR_9->drba_cookie->drc_newfs = VAR_0;
 }


 FUNC_0(FUNC_2(VAR_12));
 FUNC_4(VAR_12->ds_dbuf, VAR_8);
 FUNC_9(VAR_12)->ds_flags &= ~VAR_1;
 VAR_13 = VAR_12->ds_object;
 FUNC_10(VAR_12, VAR_2);

 FUNC_3(FUNC_8(VAR_10, VAR_13, VAR_5, &VAR_12));

 FUNC_4(VAR_12->ds_dbuf, VAR_8);
 FUNC_9(VAR_12)->ds_flags |= VAR_1;

 FUNC_11(&VAR_12->ds_bp_rwlock, VAR_3, VAR_2);
 FUNC_0(!FUNC_1(FUNC_6(VAR_12)));
 FUNC_12(&VAR_12->ds_bp_rwlock, VAR_2);

 VAR_9->drba_cookie->drc_ds = VAR_12;

 FUNC_14(VAR_12, "resume receive", VAR_8, "");
}
