
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_3__ {int num_rounds; int skey; } ;
typedef TYPE_1__ br_aes_ct64_cbcenc_keys ;


 int FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (int *,int *,int*) ;
 int FUNC_2 (int*,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (unsigned char*) ;
 int FUNC_6 (unsigned char*,int) ;
 int FUNC_7 (int*,int,void*) ;
 int FUNC_8 (void*,int*,int) ;
 int FUNC_9 (int*,int*,int) ;

void
FUNC_10(const br_aes_ct64_cbcenc_keys *VAR_0,
 void *VAR_1, void *VAR_2, size_t VAR_3)
{
 unsigned char *VAR_4;
 uint64_t VAR_5[120];
 uint32_t VAR_6[4];

 FUNC_4(VAR_5, VAR_0->num_rounds, VAR_0->skey);
 FUNC_7(VAR_6, 4, VAR_1);
 VAR_4 = VAR_2;
 while (VAR_3 > 0) {
  uint32_t VAR_7[4];
  uint64_t VAR_8[8];

  VAR_7[0] = VAR_6[0] ^ FUNC_5(VAR_4);
  VAR_7[1] = VAR_6[1] ^ FUNC_5(VAR_4 + 4);
  VAR_7[2] = VAR_6[2] ^ FUNC_5(VAR_4 + 8);
  VAR_7[3] = VAR_6[3] ^ FUNC_5(VAR_4 + 12);
  FUNC_1(&VAR_8[0], &VAR_8[4], VAR_7);
  FUNC_3(VAR_8);
  FUNC_0(VAR_0->num_rounds, VAR_5, VAR_8);
  FUNC_3(VAR_8);
  FUNC_2(VAR_7, VAR_8[0], VAR_8[4]);
  FUNC_9(VAR_6, VAR_7, sizeof VAR_7);
  FUNC_6(VAR_4, VAR_7[0]);
  FUNC_6(VAR_4 + 4, VAR_7[1]);
  FUNC_6(VAR_4 + 8, VAR_7[2]);
  FUNC_6(VAR_4 + 12, VAR_7[3]);
  VAR_4 += 16;
  VAR_3 -= 16;
 }
 FUNC_8(VAR_1, VAR_6, 4);
}
