
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
 int FUNC_5 (unsigned char*) ;
 int FUNC_6 (unsigned char*) ;
 int FUNC_7 (unsigned char*,int) ;
 int FUNC_8 (unsigned char*,int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int *,int ,int) ;
 int FUNC_11 (unsigned char*,unsigned char*,int) ;

void
FUNC_12(const br_aes_ct64_ctrcbc_keys *VAR_0,
 void *VAR_1, void *VAR_2, void *VAR_3, size_t VAR_4)
{
 unsigned char *VAR_5;
 unsigned char *VAR_6;
 uint32_t VAR_7, VAR_8, VAR_9, VAR_10;
 uint32_t VAR_11, VAR_12, VAR_13, VAR_14;
 uint64_t VAR_15[120];
 uint64_t VAR_16[8];

 FUNC_4(VAR_15, VAR_0->num_rounds, VAR_0->skey);






 VAR_6 = VAR_1;
 VAR_7 = FUNC_5(VAR_6 + 0);
 VAR_8 = FUNC_5(VAR_6 + 4);
 VAR_9 = FUNC_5(VAR_6 + 8);
 VAR_10 = FUNC_5(VAR_6 + 12);




 VAR_11 = FUNC_6((unsigned char *)VAR_2 + 0);
 VAR_12 = FUNC_6((unsigned char *)VAR_2 + 4);
 VAR_13 = FUNC_6((unsigned char *)VAR_2 + 8);
 VAR_14 = FUNC_6((unsigned char *)VAR_2 + 12);

 VAR_5 = VAR_3;
 FUNC_10(VAR_16, 0, sizeof VAR_16);
 while (VAR_4 > 0) {
  uint32_t VAR_17[8], VAR_18;
  unsigned char VAR_19[16];





  VAR_17[0] = FUNC_9(VAR_7);
  VAR_17[1] = FUNC_9(VAR_8);
  VAR_17[2] = FUNC_9(VAR_9);
  VAR_17[3] = FUNC_9(VAR_10);
  VAR_10 ++;
  VAR_18 = ~(VAR_10 | -VAR_10) >> 31;
  VAR_9 += VAR_18;
  VAR_18 &= -(~(VAR_9 | -VAR_9) >> 31);
  VAR_8 += VAR_18;
  VAR_18 &= -(~(VAR_8 | -VAR_8) >> 31);
  VAR_7 += VAR_18;




  VAR_17[4] = VAR_11 ^ FUNC_6(VAR_5 + 0);
  VAR_17[5] = VAR_12 ^ FUNC_6(VAR_5 + 4);
  VAR_17[6] = VAR_13 ^ FUNC_6(VAR_5 + 8);
  VAR_17[7] = VAR_14 ^ FUNC_6(VAR_5 + 12);

  FUNC_1(&VAR_16[0], &VAR_16[4], VAR_17);
  FUNC_1(&VAR_16[1], &VAR_16[5], VAR_17 + 4);
  FUNC_3(VAR_16);
  FUNC_0(VAR_0->num_rounds, VAR_15, VAR_16);
  FUNC_3(VAR_16);
  FUNC_2(VAR_17, VAR_16[0], VAR_16[4]);
  FUNC_2(VAR_17 + 4, VAR_16[1], VAR_16[5]);

  FUNC_8(VAR_19 + 0, VAR_17[0]);
  FUNC_8(VAR_19 + 4, VAR_17[1]);
  FUNC_8(VAR_19 + 8, VAR_17[2]);
  FUNC_8(VAR_19 + 12, VAR_17[3]);
  FUNC_11(VAR_5, VAR_19, 16);
  VAR_11 = VAR_17[4];
  VAR_12 = VAR_17[5];
  VAR_13 = VAR_17[6];
  VAR_14 = VAR_17[7];
  VAR_5 += 16;
  VAR_4 -= 16;
 }

 FUNC_7(VAR_6 + 0, VAR_7);
 FUNC_7(VAR_6 + 4, VAR_8);
 FUNC_7(VAR_6 + 8, VAR_9);
 FUNC_7(VAR_6 + 12, VAR_10);
 FUNC_8((unsigned char *)VAR_2 + 0, VAR_11);
 FUNC_8((unsigned char *)VAR_2 + 4, VAR_12);
 FUNC_8((unsigned char *)VAR_2 + 8, VAR_13);
 FUNC_8((unsigned char *)VAR_2 + 12, VAR_14);
}
