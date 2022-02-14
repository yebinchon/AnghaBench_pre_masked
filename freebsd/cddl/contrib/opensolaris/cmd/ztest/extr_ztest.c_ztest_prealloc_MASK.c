
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * zd_os; } ;
typedef TYPE_1__ ztest_ds_t ;
typedef scalar_t__ uint64_t ;
typedef int rl_t ;
typedef int objset_t ;
typedef int dmu_tx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,scalar_t__,scalar_t__,scalar_t__,int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (TYPE_1__*,scalar_t__,int ) ;
 int FUNC_8 (TYPE_1__*,scalar_t__) ;
 int * FUNC_9 (TYPE_1__*,scalar_t__,scalar_t__,scalar_t__,int ) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *,int ,int ) ;

__attribute__((used)) static void
FUNC_12(ztest_ds_t *VAR_4, uint64_t VAR_5, uint64_t VAR_6, uint64_t VAR_7)
{
 objset_t *VAR_8 = VAR_4->zd_os;
 dmu_tx_t *VAR_9;
 uint64_t VAR_10;
 rl_t *VAR_11;

 FUNC_6(FUNC_1(VAR_8), 0);

 FUNC_7(VAR_4, VAR_5, VAR_1);
 VAR_11 = FUNC_9(VAR_4, VAR_5, VAR_6, VAR_7, VAR_2);

 VAR_9 = FUNC_4(VAR_8);

 FUNC_5(VAR_9, VAR_5, VAR_6, VAR_7);

 VAR_10 = FUNC_11(VAR_9, VAR_3, VAR_0);

 if (VAR_10 != 0) {
  FUNC_2(VAR_8, VAR_5, VAR_6, VAR_7, VAR_9);
  FUNC_3(VAR_9);
  FUNC_6(FUNC_1(VAR_8), VAR_10);
 } else {
  (void) FUNC_0(VAR_8, VAR_5, VAR_6, VAR_7);
 }

 FUNC_10(VAR_11);
 FUNC_8(VAR_4, VAR_5);
}
