
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int nvlist_t ;
typedef int minor_t ;
typedef int dsl_dataset_t ;
typedef int dmu_tx_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,char const*,int ,int ,int *) ;
 int FUNC_2 (int ,int *,int ) ;
 int * FUNC_3 () ;

void
FUNC_4(dsl_dataset_t *VAR_0, const char *VAR_1,
    minor_t VAR_2, uint64_t VAR_3, dmu_tx_t *VAR_4)
{
 nvlist_t *VAR_5;

 if (VAR_2 != 0)
  VAR_5 = FUNC_3();
 else
  VAR_5 = ((void*)0);
 FUNC_1(VAR_5, VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 FUNC_2(FUNC_0(VAR_0), VAR_5, VAR_2);
}
