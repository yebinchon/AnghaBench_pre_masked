
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef scalar_t__ u_int32_t ;
typedef int blf_ctx ;


 int FUNC_0 (int *,scalar_t__*,scalar_t__*) ;

void
FUNC_1(blf_ctx *VAR_0, u_int8_t *VAR_1, u_int32_t VAR_2)
{
 u_int32_t VAR_3, VAR_4;
 u_int32_t VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5 += 8) {
  VAR_3 = VAR_1[0] << 24 | VAR_1[1] << 16 | VAR_1[2] << 8 | VAR_1[3];
  VAR_4 = VAR_1[4] << 24 | VAR_1[5] << 16 | VAR_1[6] << 8 | VAR_1[7];
  FUNC_0(VAR_0, &VAR_3, &VAR_4);
  VAR_1[0] = VAR_3 >> 24 & 0xff;
  VAR_1[1] = VAR_3 >> 16 & 0xff;
  VAR_1[2] = VAR_3 >> 8 & 0xff;
  VAR_1[3] = VAR_3 & 0xff;
  VAR_1[4] = VAR_4 >> 24 & 0xff;
  VAR_1[5] = VAR_4 >> 16 & 0xff;
  VAR_1[6] = VAR_4 >> 8 & 0xff;
  VAR_1[7] = VAR_4 & 0xff;
  VAR_1 += 8;
 }
}
