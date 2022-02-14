
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int skey; int num_rounds; } ;
typedef TYPE_1__ br_aes_small_ctr_keys ;


 int FUNC_0 (int ,int ,unsigned char*) ;
 int FUNC_1 (unsigned char*,int ) ;
 int FUNC_2 (unsigned char*,void const*,int) ;
 int FUNC_3 (unsigned char*,unsigned char*,int) ;

uint32_t
FUNC_4(const br_aes_small_ctr_keys *VAR_0,
 const void *VAR_1, uint32_t VAR_2, void *VAR_3, size_t VAR_4)
{
 unsigned char *VAR_5;

 VAR_5 = VAR_3;
 while (VAR_4 > 0) {
  unsigned char VAR_6[16];

  FUNC_2(VAR_6, VAR_1, 12);
  FUNC_1(VAR_6 + 12, VAR_2 ++);
  FUNC_0(VAR_0->num_rounds, VAR_0->skey, VAR_6);
  if (VAR_4 <= 16) {
   FUNC_3(VAR_5, VAR_6, VAR_4);
   break;
  }
  FUNC_3(VAR_5, VAR_6, 16);
  VAR_5 += 16;
  VAR_4 -= 16;
 }
 return VAR_2;
}
