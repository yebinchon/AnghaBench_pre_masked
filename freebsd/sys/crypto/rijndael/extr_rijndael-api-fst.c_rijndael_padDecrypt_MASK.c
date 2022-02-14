
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int8_t ;
typedef int u_int32_t ;
struct TYPE_5__ {scalar_t__ direction; int Nr; int rk; } ;
typedef TYPE_1__ keyInstance ;
struct TYPE_6__ {int mode; int* IV; } ;
typedef TYPE_2__ cipherInstance ;
typedef int block ;
typedef int BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;


 int FUNC_0 (int*,int) ;
 int FUNC_1 (int*,int const*,int) ;
 int FUNC_2 (int ,int ,int const*,int*) ;

int FUNC_3(cipherInstance *VAR_3, keyInstance *VAR_4,
  const BYTE *VAR_5, int VAR_6, BYTE *VAR_7) {
 int VAR_8, VAR_9, VAR_10, VAR_11;
 u_int8_t VAR_12[16];
 u_int32_t VAR_13[4];

 if (VAR_3 == ((void*)0) ||
  VAR_4 == ((void*)0) ||
  VAR_4->direction == VAR_2) {
  return VAR_0;
 }
 if (VAR_5 == ((void*)0) || VAR_6 <= 0) {
  return 0;
 }
 if (VAR_6 % 16 != 0) {
  return VAR_1;
 }

 VAR_9 = VAR_6/16;

 switch (VAR_3->mode) {
 case 128:

  for (VAR_8 = VAR_9 - 1; VAR_8 > 0; VAR_8--) {
   FUNC_2(VAR_4->rk, VAR_4->Nr, VAR_5, VAR_7);
   VAR_5 += 16;
   VAR_7 += 16;
  }

  FUNC_2(VAR_4->rk, VAR_4->Nr, VAR_5, VAR_12);
  VAR_10 = VAR_12[15];
  if (VAR_10 >= 16) {
   VAR_11 = VAR_1;
   goto out;
  }
  for (VAR_8 = 16 - VAR_10; VAR_8 < 16; VAR_8++) {
   if (VAR_12[VAR_8] != VAR_10) {
    VAR_11 = VAR_1;
    goto out;
   }
  }
  FUNC_1(VAR_7, VAR_12, 16 - VAR_10);
  break;

 case 129:
  FUNC_1(VAR_13, VAR_3->IV, 16);

  for (VAR_8 = VAR_9 - 1; VAR_8 > 0; VAR_8--) {
   FUNC_2(VAR_4->rk, VAR_4->Nr, VAR_5, VAR_12);
   ((u_int32_t*)VAR_12)[0] ^= VAR_13[0];
   ((u_int32_t*)VAR_12)[1] ^= VAR_13[1];
   ((u_int32_t*)VAR_12)[2] ^= VAR_13[2];
   ((u_int32_t*)VAR_12)[3] ^= VAR_13[3];
   FUNC_1(VAR_13, VAR_5, 16);
   FUNC_1(VAR_7, VAR_12, 16);
   VAR_5 += 16;
   VAR_7 += 16;
  }

  FUNC_2(VAR_4->rk, VAR_4->Nr, VAR_5, VAR_12);
  ((u_int32_t*)VAR_12)[0] ^= VAR_13[0];
  ((u_int32_t*)VAR_12)[1] ^= VAR_13[1];
  ((u_int32_t*)VAR_12)[2] ^= VAR_13[2];
  ((u_int32_t*)VAR_12)[3] ^= VAR_13[3];
  VAR_10 = VAR_12[15];
  if (VAR_10 <= 0 || VAR_10 > 16) {
   VAR_11 = VAR_1;
   goto out;
  }
  for (VAR_8 = 16 - VAR_10; VAR_8 < 16; VAR_8++) {
   if (VAR_12[VAR_8] != VAR_10) {
    VAR_11 = VAR_1;
    goto out;
   }
  }
  FUNC_1(VAR_7, VAR_12, 16 - VAR_10);
  break;

 default:
  return VAR_0;
 }

 VAR_11 = 16*VAR_9 - VAR_10;

out:
 FUNC_0(VAR_12, sizeof(VAR_12));
 return VAR_11;
}
