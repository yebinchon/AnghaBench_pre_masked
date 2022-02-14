
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int objset_t ;
typedef scalar_t__ int64_t ;
typedef int dmu_tx_t ;


 int VAR_0 ;
 int FUNC_0 (int *,scalar_t__,char const*,int,int,scalar_t__*) ;
 int FUNC_1 (int *,scalar_t__,char const*,int *) ;
 int FUNC_2 (int *,scalar_t__,char const*,int,int,scalar_t__*,int *) ;

int
FUNC_3(objset_t *VAR_1, uint64_t VAR_2, const char *VAR_3, int64_t VAR_4,
    dmu_tx_t *VAR_5)
{
 uint64_t VAR_6 = 0;

 if (VAR_4 == 0)
  return (0);

 int VAR_7 = FUNC_0(VAR_1, VAR_2, VAR_3, 8, 1, &VAR_6);
 if (VAR_7 != 0 && VAR_7 != VAR_0)
  return (VAR_7);
 VAR_6 += VAR_4;
 if (VAR_6 == 0)
  VAR_7 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_5);
 else
  VAR_7 = FUNC_2(VAR_1, VAR_2, VAR_3, 8, 1, &VAR_6, VAR_5);
 return (VAR_7);
}
