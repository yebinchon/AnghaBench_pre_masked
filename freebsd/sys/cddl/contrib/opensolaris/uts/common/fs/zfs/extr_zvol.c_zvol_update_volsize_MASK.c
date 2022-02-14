
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int objset_t ;
typedef int dmu_tx_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,int ,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,int ,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ,char*,int,int,int *,int *) ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_10(objset_t *VAR_6, uint64_t VAR_7)
{
 dmu_tx_t *VAR_8;
 int VAR_9;

 FUNC_0(FUNC_1(&VAR_5));

 VAR_8 = FUNC_6(VAR_6);
 FUNC_7(VAR_8, VAR_4, VAR_1, ((void*)0));
 FUNC_8(VAR_8);
 VAR_9 = FUNC_4(VAR_8, VAR_2);
 if (VAR_9) {
  FUNC_3(VAR_8);
  return (VAR_9);
 }

 VAR_9 = FUNC_9(VAR_6, VAR_4, "size", 8, 1,
     &VAR_7, VAR_8);
 FUNC_5(VAR_8);

 if (VAR_9 == 0)
  VAR_9 = FUNC_2(VAR_6,
      VAR_3, VAR_7, VAR_0);
 return (VAR_9);
}
