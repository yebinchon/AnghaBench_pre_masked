
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef scalar_t__ u_int16_t ;
typedef int blf_ctx ;


 int FUNC_0 (int *,int *,int *) ;

void
FUNC_1(blf_ctx *VAR_0, u_int32_t *VAR_1, u_int16_t VAR_2)
{
 u_int32_t *VAR_3;
 u_int16_t VAR_4;

 VAR_3 = VAR_1;
 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  FUNC_0(VAR_0, VAR_3, VAR_3 + 1);
  VAR_3 += 2;
 }
}
