
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int num_rounds; int skey; } ;
typedef TYPE_1__ br_aes_ct_ctrcbc_keys ;


 int FUNC_0 (int ,int*,int*) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int*,int ,int ) ;
 int FUNC_3 (unsigned char*) ;
 int FUNC_4 (unsigned char*,int) ;
 int FUNC_5 (unsigned char*,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (unsigned char*,unsigned char*,int) ;

void
FUNC_8(const br_aes_ct_ctrcbc_keys *VAR_0,
 void *VAR_1, void *VAR_2, size_t VAR_3)
{
 unsigned char *VAR_4;
 unsigned char *VAR_5;
 uint32_t VAR_6, VAR_7, VAR_8, VAR_9;
 uint32_t VAR_10[120];

 FUNC_2(VAR_10, VAR_0->num_rounds, VAR_0->skey);






 VAR_5 = VAR_1;
 VAR_6 = FUNC_3(VAR_5 + 0);
 VAR_7 = FUNC_3(VAR_5 + 4);
 VAR_8 = FUNC_3(VAR_5 + 8);
 VAR_9 = FUNC_3(VAR_5 + 12);

 VAR_4 = VAR_2;
 while (VAR_3 > 0) {
  uint32_t VAR_11[8], VAR_12;
  unsigned char VAR_13[32];





  VAR_11[0] = FUNC_6(VAR_6);
  VAR_11[2] = FUNC_6(VAR_7);
  VAR_11[4] = FUNC_6(VAR_8);
  VAR_11[6] = FUNC_6(VAR_9);
  VAR_9 ++;
  VAR_12 = ~(VAR_9 | -VAR_9) >> 31;
  VAR_8 += VAR_12;
  VAR_12 &= -(~(VAR_8 | -VAR_8) >> 31);
  VAR_7 += VAR_12;
  VAR_12 &= -(~(VAR_7 | -VAR_7) >> 31);
  VAR_6 += VAR_12;
  VAR_11[1] = FUNC_6(VAR_6);
  VAR_11[3] = FUNC_6(VAR_7);
  VAR_11[5] = FUNC_6(VAR_8);
  VAR_11[7] = FUNC_6(VAR_9);
  if (VAR_3 > 16) {
   VAR_9 ++;
   VAR_12 = ~(VAR_9 | -VAR_9) >> 31;
   VAR_8 += VAR_12;
   VAR_12 &= -(~(VAR_8 | -VAR_8) >> 31);
   VAR_7 += VAR_12;
   VAR_12 &= -(~(VAR_7 | -VAR_7) >> 31);
   VAR_6 += VAR_12;
  }

  FUNC_1(VAR_11);
  FUNC_0(VAR_0->num_rounds, VAR_10, VAR_11);
  FUNC_1(VAR_11);

  FUNC_5(VAR_13, VAR_11[0]);
  FUNC_5(VAR_13 + 4, VAR_11[2]);
  FUNC_5(VAR_13 + 8, VAR_11[4]);
  FUNC_5(VAR_13 + 12, VAR_11[6]);
  FUNC_5(VAR_13 + 16, VAR_11[1]);
  FUNC_5(VAR_13 + 20, VAR_11[3]);
  FUNC_5(VAR_13 + 24, VAR_11[5]);
  FUNC_5(VAR_13 + 28, VAR_11[7]);

  if (VAR_3 <= 32) {
   FUNC_7(VAR_4, VAR_13, VAR_3);
   break;
  }
  FUNC_7(VAR_4, VAR_13, 32);
  VAR_4 += 32;
  VAR_3 -= 32;
 }
 FUNC_4(VAR_5 + 0, VAR_6);
 FUNC_4(VAR_5 + 4, VAR_7);
 FUNC_4(VAR_5 + 8, VAR_8);
 FUNC_4(VAR_5 + 12, VAR_9);
}
