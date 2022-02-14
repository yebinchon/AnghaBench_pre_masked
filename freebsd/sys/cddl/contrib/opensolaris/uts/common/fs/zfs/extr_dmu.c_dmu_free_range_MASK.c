
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long uint64_t ;
typedef int objset_t ;
typedef int dnode_t ;
typedef int dmu_tx_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 unsigned long long VAR_1 ;
 int FUNC_1 (int *,unsigned long long,unsigned long long,int *) ;
 int FUNC_2 (int *,unsigned long long,int ,int **) ;
 int FUNC_3 (int *,int ) ;

int
FUNC_4(objset_t *VAR_2, uint64_t VAR_3, uint64_t VAR_4,
    uint64_t VAR_5, dmu_tx_t *VAR_6)
{
 dnode_t *VAR_7;
 int VAR_8 = FUNC_2(VAR_2, VAR_3, VAR_0, &VAR_7);
 if (VAR_8)
  return (VAR_8);
 FUNC_0(VAR_4 < VAR_1);
 FUNC_0(VAR_5 == -1ULL || VAR_5 <= VAR_1 - VAR_4);
 FUNC_1(VAR_7, VAR_4, VAR_5, VAR_6);
 FUNC_3(VAR_7, VAR_0);
 return (0);
}
