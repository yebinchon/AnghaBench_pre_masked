
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int zap_t ;
struct TYPE_5__ {int * zn_zap; } ;
typedef TYPE_1__ zap_name_t ;
typedef int uint64_t ;
typedef int objset_t ;
typedef int dmu_tx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*,int,int ,void const*,int ,int *) ;
 int FUNC_2 (int *,int ,int *,int ,int ,int ,int ,int **) ;
 TYPE_1__* FUNC_3 (int *,int const*,int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *,int ) ;

int
FUNC_6(objset_t *VAR_4, uint64_t VAR_5, const uint64_t *VAR_6,
    int VAR_7, int VAR_8, uint64_t VAR_9,
    const void *VAR_10, dmu_tx_t *VAR_11)
{
 zap_t *VAR_12;

 int VAR_13 =
     FUNC_2(VAR_4, VAR_5, VAR_11, VAR_2, VAR_3, VAR_3, VAR_1, &VAR_12);
 if (VAR_13 != 0)
  return (VAR_13);
 zap_name_t *VAR_14 = FUNC_3(VAR_12, VAR_6, VAR_7);
 if (VAR_14 == ((void*)0)) {
  FUNC_5(VAR_12, VAR_1);
  return (FUNC_0(VAR_0));
 }
 VAR_13 = FUNC_1(VAR_14, VAR_8, VAR_9, VAR_10, VAR_1, VAR_11);
 VAR_12 = VAR_14->zn_zap;
 FUNC_4(VAR_14);
 if (VAR_12 != ((void*)0))
  FUNC_5(VAR_12, VAR_1);
 return (VAR_13);
}
