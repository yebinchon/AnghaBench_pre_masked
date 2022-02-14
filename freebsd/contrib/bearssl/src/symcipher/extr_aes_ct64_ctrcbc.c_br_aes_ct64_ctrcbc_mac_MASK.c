
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_3__ {int num_rounds; int skey; } ;
typedef TYPE_1__ br_aes_ct64_ctrcbc_keys ;


 int FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (int *,int *,int*) ;
 int FUNC_2 (int*,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (unsigned char const*) ;
 int FUNC_6 (unsigned char*,int) ;
 int FUNC_7 (int *,int ,int) ;

void
FUNC_8(const br_aes_ct64_ctrcbc_keys *VAR_0,
 void *VAR_1, const void *VAR_2, size_t VAR_3)
{
 const unsigned char *VAR_4;
 uint32_t VAR_5, VAR_6, VAR_7, VAR_8;
 uint64_t VAR_9[8];
 uint64_t VAR_10[120];

 FUNC_4(VAR_10, VAR_0->num_rounds, VAR_0->skey);

 VAR_5 = FUNC_5((unsigned char *)VAR_1 + 0);
 VAR_6 = FUNC_5((unsigned char *)VAR_1 + 4);
 VAR_7 = FUNC_5((unsigned char *)VAR_1 + 8);
 VAR_8 = FUNC_5((unsigned char *)VAR_1 + 12);

 VAR_4 = VAR_2;
 FUNC_7(VAR_9, 0, sizeof VAR_9);
 while (VAR_3 > 0) {
  uint32_t VAR_11[4];

  VAR_11[0] = VAR_5 ^ FUNC_5(VAR_4 + 0);
  VAR_11[1] = VAR_6 ^ FUNC_5(VAR_4 + 4);
  VAR_11[2] = VAR_7 ^ FUNC_5(VAR_4 + 8);
  VAR_11[3] = VAR_8 ^ FUNC_5(VAR_4 + 12);

  FUNC_1(&VAR_9[0], &VAR_9[4], VAR_11);
  FUNC_3(VAR_9);
  FUNC_0(VAR_0->num_rounds, VAR_10, VAR_9);
  FUNC_3(VAR_9);
  FUNC_2(VAR_11, VAR_9[0], VAR_9[4]);

  VAR_5 = VAR_11[0];
  VAR_6 = VAR_11[1];
  VAR_7 = VAR_11[2];
  VAR_8 = VAR_11[3];
  VAR_4 += 16;
  VAR_3 -= 16;
 }

 FUNC_6((unsigned char *)VAR_1 + 0, VAR_5);
 FUNC_6((unsigned char *)VAR_1 + 4, VAR_6);
 FUNC_6((unsigned char *)VAR_1 + 8, VAR_7);
 FUNC_6((unsigned char *)VAR_1 + 12, VAR_8);
}
