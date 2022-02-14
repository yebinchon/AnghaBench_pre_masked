
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_3__ {int num_rounds; int skey; } ;
typedef TYPE_1__ br_aes_ct64_cbcdec_keys ;


 int FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *,size_t,unsigned char*) ;
 int FUNC_6 (void*,int *,int) ;
 int FUNC_7 (int *,int *,int) ;

void
FUNC_8(const br_aes_ct64_cbcdec_keys *VAR_0,
 void *VAR_1, void *VAR_2, size_t VAR_3)
{
 unsigned char *VAR_4;
 uint64_t VAR_5[120];
 uint32_t VAR_6[4];

 FUNC_4(VAR_5, VAR_0->num_rounds, VAR_0->skey);
 FUNC_5(VAR_6, 4, VAR_1);
 VAR_4 = VAR_2;
 while (VAR_3 > 0) {
  uint64_t VAR_7[8];
  uint32_t VAR_8[16], VAR_9[16];
  int VAR_10;

  if (VAR_3 >= 64) {
   FUNC_5(VAR_8, 16, VAR_4);
  } else {
   FUNC_5(VAR_8, VAR_3 >> 2, VAR_4);
  }
  for (VAR_10 = 0; VAR_10 < 4; VAR_10 ++) {
   FUNC_1(
    &VAR_7[VAR_10], &VAR_7[VAR_10 + 4], VAR_8 + (VAR_10 << 2));
  }
  FUNC_3(VAR_7);
  FUNC_0(VAR_0->num_rounds, VAR_5, VAR_7);
  FUNC_3(VAR_7);
  for (VAR_10 = 0; VAR_10 < 4; VAR_10 ++) {
   FUNC_2(
    VAR_9 + (VAR_10 << 2), VAR_7[VAR_10], VAR_7[VAR_10 + 4]);
  }
  for (VAR_10 = 0; VAR_10 < 4; VAR_10 ++) {
   VAR_9[VAR_10] ^= VAR_6[VAR_10];
  }
  if (VAR_3 >= 64) {
   for (VAR_10 = 4; VAR_10 < 16; VAR_10 ++) {
    VAR_9[VAR_10] ^= VAR_8[VAR_10 - 4];
   }
   FUNC_7(VAR_6, VAR_8 + 12, sizeof VAR_6);
   FUNC_6(VAR_4, VAR_9, 16);
  } else {
   int VAR_11;

   VAR_11 = (int)(VAR_3 >> 2);
   for (VAR_10 = 4; VAR_10 < VAR_11; VAR_10 ++) {
    VAR_9[VAR_10] ^= VAR_8[VAR_10 - 4];
   }
   FUNC_7(VAR_6, VAR_8 + VAR_11 - 4, sizeof VAR_6);
   FUNC_6(VAR_4, VAR_9, VAR_11);
   break;
  }
  VAR_4 += 64;
  VAR_3 -= 64;
 }
 FUNC_6(VAR_1, VAR_6, 4);
}
