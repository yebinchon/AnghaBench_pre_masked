
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int num_rounds; int skey; } ;
typedef TYPE_1__ br_aes_ct_cbcdec_keys ;


 int FUNC_0 (int ,int*,int*) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int*,int ,int ) ;
 int FUNC_3 (unsigned char*) ;
 int FUNC_4 (unsigned char*,int) ;
 int FUNC_5 (int*,int*,int) ;

void
FUNC_6(const br_aes_ct_cbcdec_keys *VAR_0,
 void *VAR_1, void *VAR_2, size_t VAR_3)
{
 unsigned char *VAR_4, *VAR_5;
 uint32_t VAR_6, VAR_7, VAR_8, VAR_9;
 uint32_t VAR_10[120];

 FUNC_2(VAR_10, VAR_0->num_rounds, VAR_0->skey);
 VAR_5 = VAR_1;
 VAR_6 = FUNC_3(VAR_5);
 VAR_7 = FUNC_3(VAR_5 + 4);
 VAR_8 = FUNC_3(VAR_5 + 8);
 VAR_9 = FUNC_3(VAR_5 + 12);
 VAR_4 = VAR_2;
 while (VAR_3 > 0) {
  uint32_t VAR_11[8], VAR_12[8];

  VAR_11[0] = FUNC_3(VAR_4);
  VAR_11[2] = FUNC_3(VAR_4 + 4);
  VAR_11[4] = FUNC_3(VAR_4 + 8);
  VAR_11[6] = FUNC_3(VAR_4 + 12);
  if (VAR_3 >= 32) {
   VAR_11[1] = FUNC_3(VAR_4 + 16);
   VAR_11[3] = FUNC_3(VAR_4 + 20);
   VAR_11[5] = FUNC_3(VAR_4 + 24);
   VAR_11[7] = FUNC_3(VAR_4 + 28);
  } else {
   VAR_11[1] = 0;
   VAR_11[3] = 0;
   VAR_11[5] = 0;
   VAR_11[7] = 0;
  }
  FUNC_5(VAR_12, VAR_11, sizeof VAR_11);
  FUNC_1(VAR_11);
  FUNC_0(VAR_0->num_rounds, VAR_10, VAR_11);
  FUNC_1(VAR_11);
  FUNC_4(VAR_4, VAR_11[0] ^ VAR_6);
  FUNC_4(VAR_4 + 4, VAR_11[2] ^ VAR_7);
  FUNC_4(VAR_4 + 8, VAR_11[4] ^ VAR_8);
  FUNC_4(VAR_4 + 12, VAR_11[6] ^ VAR_9);
  if (VAR_3 < 32) {
   VAR_6 = VAR_12[0];
   VAR_7 = VAR_12[2];
   VAR_8 = VAR_12[4];
   VAR_9 = VAR_12[6];
   break;
  }
  FUNC_4(VAR_4 + 16, VAR_11[1] ^ VAR_12[0]);
  FUNC_4(VAR_4 + 20, VAR_11[3] ^ VAR_12[2]);
  FUNC_4(VAR_4 + 24, VAR_11[5] ^ VAR_12[4]);
  FUNC_4(VAR_4 + 28, VAR_11[7] ^ VAR_12[6]);
  VAR_6 = VAR_12[1];
  VAR_7 = VAR_12[3];
  VAR_8 = VAR_12[5];
  VAR_9 = VAR_12[7];
  VAR_4 += 32;
  VAR_3 -= 32;
 }
 FUNC_4(VAR_5, VAR_6);
 FUNC_4(VAR_5 + 4, VAR_7);
 FUNC_4(VAR_5 + 8, VAR_8);
 FUNC_4(VAR_5 + 12, VAR_9);
}
