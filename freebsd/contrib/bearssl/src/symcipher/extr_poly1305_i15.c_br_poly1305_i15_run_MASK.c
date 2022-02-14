
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint16_t ;
typedef int (* br_chacha20_run ) (void const*,void const*,int,void*,size_t) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned char*,int ) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,unsigned char*,int,int ) ;
 int FUNC_3 (void*,int,int *) ;
 int FUNC_4 (int *,int *,int ,int ,int ) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (unsigned char*,int ,int) ;
 int FUNC_8 (int *,int *,unsigned char*,int) ;

void
FUNC_9(const void *VAR_3, const void *VAR_4,
 void *VAR_5, size_t VAR_6, const void *VAR_7, size_t VAR_8,
 void *VAR_9, br_chacha20_run VAR_10, int VAR_11)
{
 unsigned char VAR_12[32], VAR_13[16];
 uint16_t VAR_14[10], VAR_15[10], VAR_16[10];





 FUNC_7(VAR_12, 0, sizeof VAR_12);
 VAR_10(VAR_3, VAR_4, 0, VAR_12, sizeof VAR_12);





 if (VAR_11) {
  VAR_10(VAR_3, VAR_4, 1, VAR_5, VAR_6);
 }
 VAR_12[ 3] &= 0x0F;
 VAR_12[ 7] &= 0x0F;
 VAR_12[11] &= 0x0F;
 VAR_12[15] &= 0x0F;
 VAR_12[ 4] &= 0xFC;
 VAR_12[ 8] &= 0xFC;
 VAR_12[12] &= 0xFC;





 FUNC_6(VAR_12);
 FUNC_2(VAR_14, VAR_12, 16, VAR_1);




 FUNC_4(VAR_15, VAR_14, VAR_2, VAR_1, VAR_0);




 FUNC_5(VAR_16, 0x8A);





 FUNC_0(VAR_13, (uint64_t)VAR_8);
 FUNC_0(VAR_13 + 8, (uint64_t)VAR_6);
 FUNC_8(VAR_16, VAR_15, VAR_7, VAR_8);
 FUNC_8(VAR_16, VAR_15, VAR_5, VAR_6);
 FUNC_8(VAR_16, VAR_15, VAR_13, sizeof VAR_13);




 FUNC_6(VAR_12 + 16);
 FUNC_2(VAR_14, VAR_12 + 16, 16, VAR_1);





 FUNC_1(VAR_16, VAR_14, 1);





 FUNC_3(VAR_9, 16, VAR_16);
 FUNC_6(VAR_9);




 if (!VAR_11) {
  VAR_10(VAR_3, VAR_4, 1, VAR_5, VAR_6);
 }
}
