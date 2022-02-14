
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
 int FUNC_3 (unsigned char const*) ;
 int FUNC_4 (unsigned char*,int) ;

void
FUNC_5(const br_aes_ct_ctrcbc_keys *VAR_0,
 void *VAR_1, const void *VAR_2, size_t VAR_3)
{
 const unsigned char *VAR_4;
 uint32_t VAR_5, VAR_6, VAR_7, VAR_8;
 uint32_t VAR_9[8];
 uint32_t VAR_10[120];

 FUNC_2(VAR_10, VAR_0->num_rounds, VAR_0->skey);

 VAR_4 = VAR_2;
 VAR_5 = FUNC_3((unsigned char *)VAR_1 + 0);
 VAR_6 = FUNC_3((unsigned char *)VAR_1 + 4);
 VAR_7 = FUNC_3((unsigned char *)VAR_1 + 8);
 VAR_8 = FUNC_3((unsigned char *)VAR_1 + 12);
 VAR_9[1] = 0;
 VAR_9[3] = 0;
 VAR_9[5] = 0;
 VAR_9[7] = 0;

 while (VAR_3 > 0) {
  VAR_9[0] = VAR_5 ^ FUNC_3(VAR_4 + 0);
  VAR_9[2] = VAR_6 ^ FUNC_3(VAR_4 + 4);
  VAR_9[4] = VAR_7 ^ FUNC_3(VAR_4 + 8);
  VAR_9[6] = VAR_8 ^ FUNC_3(VAR_4 + 12);

  FUNC_1(VAR_9);
  FUNC_0(VAR_0->num_rounds, VAR_10, VAR_9);
  FUNC_1(VAR_9);

  VAR_5 = VAR_9[0];
  VAR_6 = VAR_9[2];
  VAR_7 = VAR_9[4];
  VAR_8 = VAR_9[6];
  VAR_4 += 16;
  VAR_3 -= 16;
 }

 FUNC_4((unsigned char *)VAR_1 + 0, VAR_5);
 FUNC_4((unsigned char *)VAR_1 + 4, VAR_6);
 FUNC_4((unsigned char *)VAR_1 + 8, VAR_7);
 FUNC_4((unsigned char *)VAR_1 + 12, VAR_8);
}
