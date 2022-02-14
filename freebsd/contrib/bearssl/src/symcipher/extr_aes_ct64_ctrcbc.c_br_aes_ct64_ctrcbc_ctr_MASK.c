
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_3__ {int num_rounds; int skey; } ;
typedef TYPE_1__ br_aes_ct64_ctrcbc_keys ;


 int FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (int *,int *,int*) ;
 int FUNC_2 (int*,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (unsigned char*) ;
 int FUNC_6 (unsigned char*,int) ;
 int FUNC_7 (unsigned char*,int*,int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int*,int ,int) ;
 int FUNC_10 (unsigned char*,unsigned char*,int) ;

void
FUNC_11(const br_aes_ct64_ctrcbc_keys *VAR_0,
 void *VAR_1, void *VAR_2, size_t VAR_3)
{
 unsigned char *VAR_4;
 unsigned char *VAR_5;
 uint32_t VAR_6, VAR_7, VAR_8, VAR_9;
 uint64_t VAR_10[120];

 FUNC_4(VAR_10, VAR_0->num_rounds, VAR_0->skey);






 VAR_5 = VAR_1;
 VAR_6 = FUNC_5(VAR_5 + 0);
 VAR_7 = FUNC_5(VAR_5 + 4);
 VAR_8 = FUNC_5(VAR_5 + 8);
 VAR_9 = FUNC_5(VAR_5 + 12);

 VAR_4 = VAR_2;
 while (VAR_3 > 0) {
  uint64_t VAR_11[8];
  uint32_t VAR_12[16];
  unsigned char VAR_13[64];
  int VAR_14, VAR_15;





  VAR_15 = (VAR_3 >= 64) ? 16 : (int)(VAR_3 >> 2);
  for (VAR_14 = 0; VAR_14 < VAR_15; VAR_14 += 4) {
   uint32_t VAR_16;

   VAR_12[VAR_14 + 0] = FUNC_8(VAR_6);
   VAR_12[VAR_14 + 1] = FUNC_8(VAR_7);
   VAR_12[VAR_14 + 2] = FUNC_8(VAR_8);
   VAR_12[VAR_14 + 3] = FUNC_8(VAR_9);
   VAR_9 ++;
   VAR_16 = ~(VAR_9 | -VAR_9) >> 31;
   VAR_8 += VAR_16;
   VAR_16 &= -(~(VAR_8 | -VAR_8) >> 31);
   VAR_7 += VAR_16;
   VAR_16 &= -(~(VAR_7 | -VAR_7) >> 31);
   VAR_6 += VAR_16;
  }
  FUNC_9(VAR_12 + VAR_14, 0, (16 - VAR_14) * sizeof(uint32_t));

  for (VAR_14 = 0; VAR_14 < 4; VAR_14 ++) {
   FUNC_1(
    &VAR_11[VAR_14], &VAR_11[VAR_14 + 4], VAR_12 + (VAR_14 << 2));
  }
  FUNC_3(VAR_11);
  FUNC_0(VAR_0->num_rounds, VAR_10, VAR_11);
  FUNC_3(VAR_11);
  for (VAR_14 = 0; VAR_14 < 4; VAR_14 ++) {
   FUNC_2(
    VAR_12 + (VAR_14 << 2), VAR_11[VAR_14], VAR_11[VAR_14 + 4]);
  }

  FUNC_7(VAR_13, VAR_12, 16);
  if (VAR_3 <= 64) {
   FUNC_10(VAR_4, VAR_13, VAR_3);
   break;
  }
  FUNC_10(VAR_4, VAR_13, 64);
  VAR_4 += 64;
  VAR_3 -= 64;
 }
 FUNC_6(VAR_5 + 0, VAR_6);
 FUNC_6(VAR_5 + 4, VAR_7);
 FUNC_6(VAR_5 + 8, VAR_8);
 FUNC_6(VAR_5 + 12, VAR_9);
}
