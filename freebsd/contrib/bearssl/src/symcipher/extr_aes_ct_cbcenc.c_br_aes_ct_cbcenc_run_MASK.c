
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int num_rounds; int skey; } ;
typedef TYPE_1__ br_aes_ct_cbcenc_keys ;


 int FUNC_0 (int ,int*,int*) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int*,int ,int ) ;
 int FUNC_3 (unsigned char*) ;
 int FUNC_4 (unsigned char*,int) ;

void
FUNC_5(const br_aes_ct_cbcenc_keys *VAR_0,
 void *VAR_1, void *VAR_2, size_t VAR_3)
{
 unsigned char *VAR_4, *VAR_5;
 uint32_t VAR_6[8];
 uint32_t VAR_7, VAR_8, VAR_9, VAR_10;
 uint32_t VAR_11[120];

 VAR_6[1] = 0;
 VAR_6[3] = 0;
 VAR_6[5] = 0;
 VAR_6[7] = 0;
 FUNC_2(VAR_11, VAR_0->num_rounds, VAR_0->skey);
 VAR_5 = VAR_1;
 VAR_7 = FUNC_3(VAR_5);
 VAR_8 = FUNC_3(VAR_5 + 4);
 VAR_9 = FUNC_3(VAR_5 + 8);
 VAR_10 = FUNC_3(VAR_5 + 12);
 VAR_4 = VAR_2;
 while (VAR_3 > 0) {
  VAR_6[0] = VAR_7 ^ FUNC_3(VAR_4);
  VAR_6[2] = VAR_8 ^ FUNC_3(VAR_4 + 4);
  VAR_6[4] = VAR_9 ^ FUNC_3(VAR_4 + 8);
  VAR_6[6] = VAR_10 ^ FUNC_3(VAR_4 + 12);
  FUNC_1(VAR_6);
  FUNC_0(VAR_0->num_rounds, VAR_11, VAR_6);
  FUNC_1(VAR_6);
  VAR_7 = VAR_6[0];
  VAR_8 = VAR_6[2];
  VAR_9 = VAR_6[4];
  VAR_10 = VAR_6[6];
  FUNC_4(VAR_4, VAR_7);
  FUNC_4(VAR_4 + 4, VAR_8);
  FUNC_4(VAR_4 + 8, VAR_9);
  FUNC_4(VAR_4 + 12, VAR_10);
  VAR_4 += 16;
  VAR_3 -= 16;
 }
 FUNC_4(VAR_5, VAR_7);
 FUNC_4(VAR_5 + 4, VAR_8);
 FUNC_4(VAR_5 + 8, VAR_9);
 FUNC_4(VAR_5 + 12, VAR_10);
}
