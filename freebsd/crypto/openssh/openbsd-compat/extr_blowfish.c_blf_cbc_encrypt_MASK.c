
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef scalar_t__ u_int32_t ;
typedef int blf_ctx ;


 int FUNC_0 (int *,scalar_t__*,scalar_t__*) ;

void
FUNC_1(blf_ctx *VAR_0, u_int8_t *VAR_1, u_int8_t *VAR_2, u_int32_t VAR_3)
{
 u_int32_t VAR_4, VAR_5;
 u_int32_t VAR_6, VAR_7;

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6 += 8) {
  for (VAR_7 = 0; VAR_7 < 8; VAR_7++)
   VAR_2[VAR_7] ^= VAR_1[VAR_7];
  VAR_4 = VAR_2[0] << 24 | VAR_2[1] << 16 | VAR_2[2] << 8 | VAR_2[3];
  VAR_5 = VAR_2[4] << 24 | VAR_2[5] << 16 | VAR_2[6] << 8 | VAR_2[7];
  FUNC_0(VAR_0, &VAR_4, &VAR_5);
  VAR_2[0] = VAR_4 >> 24 & 0xff;
  VAR_2[1] = VAR_4 >> 16 & 0xff;
  VAR_2[2] = VAR_4 >> 8 & 0xff;
  VAR_2[3] = VAR_4 & 0xff;
  VAR_2[4] = VAR_5 >> 24 & 0xff;
  VAR_2[5] = VAR_5 >> 16 & 0xff;
  VAR_2[6] = VAR_5 >> 8 & 0xff;
  VAR_2[7] = VAR_5 & 0xff;
  VAR_1 = VAR_2;
  VAR_2 += 8;
 }
}
