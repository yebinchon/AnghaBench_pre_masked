
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_3__ {int num_rounds; int skey; } ;
typedef TYPE_1__ br_aes_ct64_ctr_keys ;


 int FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (int *,int *,int*) ;
 int FUNC_2 (int*,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int*,int,void const*) ;
 int FUNC_6 (unsigned char*,int*,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int*,int*,int) ;
 int FUNC_9 (unsigned char*,unsigned char*,int) ;

uint32_t
FUNC_10(const br_aes_ct64_ctr_keys *VAR_0,
 const void *VAR_1, uint32_t VAR_2, void *VAR_3, size_t VAR_4)
{
 unsigned char *VAR_5;
 uint32_t VAR_6[16];
 uint64_t VAR_7[120];

 FUNC_4(VAR_7, VAR_0->num_rounds, VAR_0->skey);
 FUNC_5(VAR_6, 3, VAR_1);
 FUNC_8(VAR_6 + 4, VAR_6, 3 * sizeof(uint32_t));
 FUNC_8(VAR_6 + 8, VAR_6, 3 * sizeof(uint32_t));
 FUNC_8(VAR_6 + 12, VAR_6, 3 * sizeof(uint32_t));
 VAR_5 = VAR_3;
 while (VAR_4 > 0) {
  uint64_t VAR_8[8];
  uint32_t VAR_9[16];
  unsigned char VAR_10[64];
  int VAR_11;





  FUNC_8(VAR_9, VAR_6, sizeof VAR_6);
  VAR_9[3] = FUNC_7(VAR_2);
  VAR_9[7] = FUNC_7(VAR_2 + 1);
  VAR_9[11] = FUNC_7(VAR_2 + 2);
  VAR_9[15] = FUNC_7(VAR_2 + 3);
  for (VAR_11 = 0; VAR_11 < 4; VAR_11 ++) {
   FUNC_1(
    &VAR_8[VAR_11], &VAR_8[VAR_11 + 4], VAR_9 + (VAR_11 << 2));
  }
  FUNC_3(VAR_8);
  FUNC_0(VAR_0->num_rounds, VAR_7, VAR_8);
  FUNC_3(VAR_8);
  for (VAR_11 = 0; VAR_11 < 4; VAR_11 ++) {
   FUNC_2(
    VAR_9 + (VAR_11 << 2), VAR_8[VAR_11], VAR_8[VAR_11 + 4]);
  }
  FUNC_6(VAR_10, VAR_9, 16);
  if (VAR_4 <= 64) {
   FUNC_9(VAR_5, VAR_10, VAR_4);
   VAR_2 += (uint32_t)VAR_4 >> 4;
   break;
  }
  FUNC_9(VAR_5, VAR_10, 64);
  VAR_5 += 64;
  VAR_4 -= 64;
  VAR_2 += 4;
 }
 return VAR_2;
}
