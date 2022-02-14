
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_12__ {scalar_t__ ds_trysnap_txg; int ds_dir; } ;
typedef TYPE_1__ dsl_dataset_t ;
struct TYPE_13__ {scalar_t__ tx_txg; } ;
typedef TYPE_2__ dmu_tx_t ;
typedef int cred_t ;
typedef int boolean_t ;
struct TYPE_14__ {scalar_t__ ds_prev_snap_txg; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_8__* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,char const*,scalar_t__*) ;
 int FUNC_5 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_6 (int ,scalar_t__,int ,int *,int *) ;

int
FUNC_7(dsl_dataset_t *VAR_5, const char *VAR_6,
    dmu_tx_t *VAR_7, boolean_t VAR_8, uint64_t VAR_9, cred_t *VAR_10)
{
 int VAR_11;
 uint64_t VAR_12;

 VAR_5->ds_trysnap_txg = VAR_7->tx_txg;

 if (!FUNC_2(VAR_7))
  return (0);





 if (FUNC_3(VAR_5)->ds_prev_snap_txg >= VAR_7->tx_txg)
  return (FUNC_1(VAR_0));




 VAR_11 = FUNC_4(VAR_5, VAR_6, &VAR_12);
 if (VAR_11 == 0)
  return (FUNC_1(VAR_2));
 if (VAR_11 != VAR_3)
  return (VAR_11);
 if (!VAR_8 && FUNC_0(VAR_5))
  return (FUNC_1(VAR_1));






 if (VAR_9 != 0 && VAR_10 != ((void*)0)) {
  VAR_11 = FUNC_6(VAR_5->ds_dir, VAR_9,
      VAR_4, ((void*)0), VAR_10);
  if (VAR_11 != 0)
   return (VAR_11);
 }

 VAR_11 = FUNC_5(VAR_5, VAR_7);
 if (VAR_11 != 0)
  return (VAR_11);

 return (0);
}
