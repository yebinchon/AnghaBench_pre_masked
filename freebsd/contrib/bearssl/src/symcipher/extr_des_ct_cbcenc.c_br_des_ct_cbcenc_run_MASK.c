
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int num_rounds; int skey; } ;
typedef TYPE_1__ br_des_ct_cbcenc_keys ;


 int FUNC_0 (int ,int *,unsigned char*) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (unsigned char*,unsigned char*,int) ;

void
FUNC_3(const br_des_ct_cbcenc_keys *VAR_0,
 void *VAR_1, void *VAR_2, size_t VAR_3)
{
 unsigned char *VAR_4, *VAR_5;
 uint32_t VAR_6[288];

 FUNC_1(VAR_6, VAR_0->num_rounds, VAR_0->skey);
 VAR_5 = VAR_1;
 VAR_4 = VAR_2;
 while (VAR_3 > 0) {
  int VAR_7;

  for (VAR_7 = 0; VAR_7 < 8; VAR_7 ++) {
   VAR_4[VAR_7] ^= VAR_5[VAR_7];
  }
  FUNC_0(VAR_0->num_rounds, VAR_6, VAR_4);
  FUNC_2(VAR_5, VAR_4, 8);
  VAR_4 += 8;
  VAR_3 -= 8;
 }
}
