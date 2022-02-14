
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int skey; int num_rounds; } ;
typedef TYPE_1__ br_aes_big_ctrcbc_keys ;


 int FUNC_0 (int ,int ,unsigned char*) ;
 int FUNC_1 (unsigned char*) ;
 int FUNC_2 (unsigned char*,int) ;
 int FUNC_3 (unsigned char*,unsigned char*,int) ;

void
FUNC_4(const br_aes_big_ctrcbc_keys *VAR_0,
 void *VAR_1, void *VAR_2, size_t VAR_3)
{
 unsigned char *VAR_4, *VAR_5;
 uint32_t VAR_6, VAR_7, VAR_8, VAR_9;

 VAR_4 = VAR_2;
 VAR_5 = VAR_1;
 VAR_9 = FUNC_1(VAR_5 + 0);
 VAR_8 = FUNC_1(VAR_5 + 4);
 VAR_7 = FUNC_1(VAR_5 + 8);
 VAR_6 = FUNC_1(VAR_5 + 12);
 while (VAR_3 > 0) {
  unsigned char VAR_10[16];
  uint32_t VAR_11;

  FUNC_2(VAR_10 + 0, VAR_9);
  FUNC_2(VAR_10 + 4, VAR_8);
  FUNC_2(VAR_10 + 8, VAR_7);
  FUNC_2(VAR_10 + 12, VAR_6);
  FUNC_0(VAR_0->num_rounds, VAR_0->skey, VAR_10);
  FUNC_3(VAR_4, VAR_10, 16);
  VAR_4 += 16;
  VAR_3 -= 16;
  VAR_6 ++;
  VAR_11 = (~(VAR_6 | -VAR_6)) >> 31;
  VAR_7 += VAR_11;
  VAR_11 &= (~(VAR_7 | -VAR_7)) >> 31;
  VAR_8 += VAR_11;
  VAR_11 &= (~(VAR_8 | -VAR_8)) >> 31;
  VAR_9 += VAR_11;
 }
 FUNC_2(VAR_5 + 0, VAR_9);
 FUNC_2(VAR_5 + 4, VAR_8);
 FUNC_2(VAR_5 + 8, VAR_7);
 FUNC_2(VAR_5 + 12, VAR_6);
}
