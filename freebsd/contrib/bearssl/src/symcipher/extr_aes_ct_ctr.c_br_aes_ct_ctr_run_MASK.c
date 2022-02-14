
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_3__ {int num_rounds; int skey; } ;
typedef TYPE_1__ br_aes_ct_ctr_keys ;


 int FUNC_0 (int ,scalar_t__*,scalar_t__*) ;
 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 (scalar_t__*,int ,int ) ;
 scalar_t__ FUNC_3 (unsigned char const*) ;
 int FUNC_4 (unsigned char*,scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (unsigned char*,unsigned char*,int) ;

uint32_t
FUNC_7(const br_aes_ct_ctr_keys *VAR_0,
 const void *VAR_1, uint32_t VAR_2, void *VAR_3, size_t VAR_4)
{
 unsigned char *VAR_5;
 const unsigned char *VAR_6;
 uint32_t VAR_7, VAR_8, VAR_9;
 uint32_t VAR_10[120];

 FUNC_2(VAR_10, VAR_0->num_rounds, VAR_0->skey);
 VAR_6 = VAR_1;
 VAR_7 = FUNC_3(VAR_6);
 VAR_8 = FUNC_3(VAR_6 + 4);
 VAR_9 = FUNC_3(VAR_6 + 8);
 VAR_5 = VAR_3;
 while (VAR_4 > 0) {
  uint32_t VAR_11[8];
  unsigned char VAR_12[32];





  VAR_11[0] = VAR_11[1] = VAR_7;
  VAR_11[2] = VAR_11[3] = VAR_8;
  VAR_11[4] = VAR_11[5] = VAR_9;
  VAR_11[6] = FUNC_5(VAR_2);
  VAR_11[7] = FUNC_5(VAR_2 + 1);
  FUNC_1(VAR_11);
  FUNC_0(VAR_0->num_rounds, VAR_10, VAR_11);
  FUNC_1(VAR_11);
  FUNC_4(VAR_12, VAR_11[0]);
  FUNC_4(VAR_12 + 4, VAR_11[2]);
  FUNC_4(VAR_12 + 8, VAR_11[4]);
  FUNC_4(VAR_12 + 12, VAR_11[6]);
  FUNC_4(VAR_12 + 16, VAR_11[1]);
  FUNC_4(VAR_12 + 20, VAR_11[3]);
  FUNC_4(VAR_12 + 24, VAR_11[5]);
  FUNC_4(VAR_12 + 28, VAR_11[7]);

  if (VAR_4 <= 32) {
   FUNC_6(VAR_5, VAR_12, VAR_4);
   VAR_2 ++;
   if (VAR_4 > 16) {
    VAR_2 ++;
   }
   break;
  }
  FUNC_6(VAR_5, VAR_12, 32);
  VAR_5 += 32;
  VAR_4 -= 32;
  VAR_2 += 2;
 }
 return VAR_2;
}
