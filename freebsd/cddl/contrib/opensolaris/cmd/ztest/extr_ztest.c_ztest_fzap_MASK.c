
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ od_object; } ;
typedef TYPE_1__ ztest_od_t ;
struct TYPE_8__ {int * zd_os; } ;
typedef TYPE_2__ ztest_ds_t ;
typedef scalar_t__ uint64_t ;
typedef int od ;
typedef int objset_t ;
typedef int name ;
typedef int dmu_tx_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *,scalar_t__,int ,char*) ;
 int FUNC_4 (char*,int,char*,scalar_t__,scalar_t__) ;
 int FUNC_5 (int *,scalar_t__,char*,int,int,scalar_t__*,int *) ;
 scalar_t__ FUNC_6 (TYPE_2__*,TYPE_1__*,int,int) ;
 int FUNC_7 (TYPE_1__*,scalar_t__,int ,int ,int ,int ,int ,int ) ;
 int FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int *,int ,int ) ;

void
FUNC_10(ztest_ds_t *VAR_6, uint64_t VAR_7)
{
 objset_t *VAR_8 = VAR_6->zd_os;
 ztest_od_t VAR_9[1];
 uint64_t VAR_10, VAR_11;

 FUNC_7(&VAR_9[0], VAR_7, VAR_3, 0, VAR_1, 0, 0, 0);

 if (FUNC_6(VAR_6, VAR_9, sizeof (VAR_9), !FUNC_8(2)) != 0)
  return;

 VAR_10 = VAR_9[0].od_object;






 for (int VAR_12 = 0; VAR_12 < 2050; VAR_12++) {
  char VAR_13[VAR_5];
  uint64_t VAR_14 = VAR_12;
  dmu_tx_t *VAR_15;
  int VAR_16;

  (void) FUNC_4(VAR_13, sizeof (VAR_13), "fzap-%llu-%llu",
      VAR_7, VAR_14);

  VAR_15 = FUNC_2(VAR_8);
  FUNC_3(VAR_15, VAR_10, VAR_0, VAR_13);
  VAR_11 = FUNC_9(VAR_15, VAR_4, VAR_3);
  if (VAR_11 == 0)
   return;
  VAR_16 = FUNC_5(VAR_8, VAR_10, VAR_13, sizeof (uint64_t), 1,
      &VAR_14, VAR_15);
  FUNC_0(VAR_16 == 0 || VAR_16 == VAR_2);
  FUNC_1(VAR_15);
 }
}
