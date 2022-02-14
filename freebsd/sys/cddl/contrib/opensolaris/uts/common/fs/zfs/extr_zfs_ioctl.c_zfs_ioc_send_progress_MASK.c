
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int zc_cookie; int zc_name; } ;
typedef TYPE_1__ zfs_cmd_t ;
typedef int dsl_pool_t ;
struct TYPE_11__ {int ds_sendstream_lock; int ds_sendstreams; } ;
typedef TYPE_2__ dsl_dataset_t ;
struct TYPE_12__ {scalar_t__ dsa_proc; int * dsa_off; int dsa_outfd; } ;
typedef TYPE_3__ dmu_sendarg_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,int ,int ,TYPE_2__**) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (int ,int ,int **) ;
 int FUNC_4 (int *,int ) ;
 TYPE_3__* FUNC_5 (int *) ;
 TYPE_3__* FUNC_6 (int *,TYPE_3__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int
FUNC_9(zfs_cmd_t *VAR_3)
{
 dsl_pool_t *VAR_4;
 dsl_dataset_t *VAR_5;
 dmu_sendarg_t *VAR_6 = ((void*)0);
 int VAR_7;

 VAR_7 = FUNC_3(VAR_3->zc_name, VAR_1, &VAR_4);
 if (VAR_7 != 0)
  return (VAR_7);

 VAR_7 = FUNC_1(VAR_4, VAR_3->zc_name, VAR_1, &VAR_5);
 if (VAR_7 != 0) {
  FUNC_4(VAR_4, VAR_1);
  return (VAR_7);
 }

 FUNC_7(&VAR_5->ds_sendstream_lock);







 for (VAR_6 = FUNC_5(&VAR_5->ds_sendstreams); VAR_6 != ((void*)0);
     VAR_6 = FUNC_6(&VAR_5->ds_sendstreams, VAR_6)) {
  if (VAR_6->dsa_outfd == VAR_3->zc_cookie &&
      VAR_6->dsa_proc == VAR_2)
   break;
 }

 if (VAR_6 != ((void*)0))
  VAR_3->zc_cookie = *(VAR_6->dsa_off);
 else
  VAR_7 = FUNC_0(VAR_0);

 FUNC_8(&VAR_5->ds_sendstream_lock);
 FUNC_2(VAR_5, VAR_1);
 FUNC_4(VAR_4, VAR_1);
 return (VAR_7);
}
