
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int * zd_os; } ;
typedef TYPE_1__ ztest_ds_t ;
struct TYPE_10__ {scalar_t__ bt_magic; int bt_gen; int bt_crtxg; int bt_txg; int bt_offset; } ;
typedef TYPE_2__ ztest_block_tag_t ;
typedef scalar_t__ uint64_t ;
typedef int objset_t ;
struct TYPE_11__ {int doi_bonus_size; int doi_dnodesize; } ;
typedef TYPE_3__ dmu_object_info_t ;
typedef int dmu_buf_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,scalar_t__,int ,int **) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,TYPE_3__*) ;
 int FUNC_3 (int *,scalar_t__*,int ,int ) ;
 TYPE_2__* FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*,int *,scalar_t__,int ,int ,int ,int ,int ) ;
 int FUNC_6 (int *,TYPE_2__*,scalar_t__,int *,int ) ;

void
FUNC_7(ztest_ds_t *VAR_3, uint64_t VAR_4)
{
 objset_t *VAR_5 = VAR_3->zd_os;
 uint64_t VAR_6;
 int VAR_7 = 0;

 for (VAR_6 = 0; VAR_7 == 0; VAR_7 = FUNC_3(VAR_5, &VAR_6, VAR_1, 0)) {
  ztest_block_tag_t *VAR_8 = ((void*)0);
  dmu_object_info_t VAR_9;
  dmu_buf_t *VAR_10;

  if (FUNC_0(VAR_5, VAR_6, VAR_2, &VAR_10) != 0)
   continue;

  FUNC_2(VAR_10, &VAR_9);
  if (VAR_9.doi_bonus_size >= sizeof (*VAR_8))
   VAR_8 = FUNC_4(VAR_10);

  if (VAR_8 && VAR_8->bt_magic == VAR_0) {
   FUNC_5(VAR_8, VAR_5, VAR_6, VAR_9.doi_dnodesize,
       VAR_8->bt_offset, VAR_8->bt_gen, VAR_8->bt_txg,
       VAR_8->bt_crtxg);
   FUNC_6(VAR_10, VAR_8, VAR_6, VAR_5, VAR_8->bt_gen);
  }

  FUNC_1(VAR_10, VAR_2);
 }
}
