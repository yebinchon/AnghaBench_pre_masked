
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int objset_t ;
typedef int dmu_tx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ,int ,int ) ;
 int FUNC_8 (int *) ;

int
FUNC_9(objset_t *VAR_2, uint64_t VAR_3)
{
 dmu_tx_t *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_2, VAR_3, 0, VAR_0);
 if (VAR_5 != 0)
  return (VAR_5);

 VAR_4 = FUNC_5(VAR_2);
 FUNC_6(VAR_4, VAR_3);
 FUNC_7(VAR_4, VAR_3, 0, VAR_0);
 FUNC_8(VAR_4);
 VAR_5 = FUNC_3(VAR_4, VAR_1);
 if (VAR_5 == 0) {
  VAR_5 = FUNC_1(VAR_2, VAR_3, VAR_4);
  FUNC_4(VAR_4);
 } else {
  FUNC_2(VAR_4);
 }

 return (VAR_5);
}
