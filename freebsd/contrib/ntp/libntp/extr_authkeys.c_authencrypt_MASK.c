
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32 ;
typedef scalar_t__ keyid_t ;


 size_t FUNC_0 (int ,int ,int ,int *,size_t) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (scalar_t__) ;

size_t
FUNC_3(
 keyid_t VAR_4,
 u_int32 * VAR_5,
 size_t VAR_6
 )
{





 VAR_0++;
 VAR_5[VAR_6 / 4] = FUNC_2(VAR_4);
 if (0 == VAR_4) {
  return 4;
 }
 if (!FUNC_1(VAR_4)) {
  return 0;
 }

 return FUNC_0(VAR_3,
         VAR_1, VAR_2,
         VAR_5, VAR_6);
}
