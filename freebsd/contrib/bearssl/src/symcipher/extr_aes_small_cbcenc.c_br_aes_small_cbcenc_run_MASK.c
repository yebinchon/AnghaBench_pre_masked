
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int skey; int num_rounds; } ;
typedef TYPE_1__ br_aes_small_cbcenc_keys ;


 int FUNC_0 (int ,int ,unsigned char*) ;
 int FUNC_1 (unsigned char*,unsigned char*,int) ;

void
FUNC_2(const br_aes_small_cbcenc_keys *VAR_0,
 void *VAR_1, void *VAR_2, size_t VAR_3)
{
 unsigned char *VAR_4, *VAR_5;

 VAR_5 = VAR_1;
 VAR_4 = VAR_2;
 while (VAR_3 > 0) {
  int VAR_6;

  for (VAR_6 = 0; VAR_6 < 16; VAR_6 ++) {
   VAR_4[VAR_6] ^= VAR_5[VAR_6];
  }
  FUNC_0(VAR_0->num_rounds, VAR_0->skey, VAR_4);
  FUNC_1(VAR_5, VAR_4, 16);
  VAR_4 += 16;
  VAR_3 -= 16;
 }
}
