
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int spa_t ;
typedef size_t spa_feature_t ;
typedef int boolean_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (int *,int *,scalar_t__*) ;
 int * VAR_3 ;
 scalar_t__ FUNC_3 (int *) ;

boolean_t
FUNC_4(spa_t *VAR_4, spa_feature_t VAR_5)
{
 int VAR_6;
 uint64_t VAR_7;

 FUNC_0(FUNC_1(VAR_5));
 if (FUNC_3(VAR_4) < VAR_2)
  return (VAR_0);

 VAR_6 = FUNC_2(VAR_4, &VAR_3[VAR_5], &VAR_7);
 FUNC_0(VAR_6 == 0 || VAR_6 == VAR_1);
 return (VAR_6 == 0 && VAR_7 > 0);
}
