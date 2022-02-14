
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_10__ {int os_flags; } ;
typedef TYPE_1__ objset_t ;
typedef int dmu_tx_t ;
typedef int dmu_buf_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int VAR_8 ;
 int FUNC_1 (TYPE_1__*,scalar_t__,int ,int **) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (TYPE_1__*,scalar_t__*,int ,int ) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *) ;
 int * FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (int *,scalar_t__) ;
 scalar_t__ FUNC_14 (int ) ;
 int FUNC_15 (int ,int ) ;

int
FUNC_16(objset_t *VAR_9)
{
 uint64_t VAR_10;
 int VAR_11 = 0;

 if (FUNC_7(VAR_9))
  return (0);
 if (!FUNC_8(VAR_9))
  return (FUNC_0(VAR_2));
 if (FUNC_5(VAR_9))
  return (FUNC_0(VAR_1));
 for (VAR_10 = 0; VAR_11 == 0; VAR_11 = FUNC_4(VAR_9, &VAR_10, VAR_3, 0)) {
  dmu_tx_t *VAR_12;
  dmu_buf_t *VAR_13;
  int VAR_14;

  if (FUNC_14(VAR_6) && FUNC_14(VAR_4))
   return (FUNC_0(VAR_0));

  VAR_14 = FUNC_1(VAR_9, VAR_10, VAR_5, &VAR_13);
  if (VAR_14 != 0)
   continue;
  VAR_12 = FUNC_12(VAR_9);
  FUNC_13(VAR_12, VAR_10);
  VAR_14 = FUNC_10(VAR_12, VAR_8);
  if (VAR_14 != 0) {
   FUNC_9(VAR_12);
   continue;
  }
  FUNC_3(VAR_13, VAR_12);
  FUNC_2(VAR_13, VAR_5);
  FUNC_11(VAR_12);
 }

 VAR_9->os_flags |= VAR_7;
 FUNC_15(FUNC_6(VAR_9), 0);
 return (0);
}
