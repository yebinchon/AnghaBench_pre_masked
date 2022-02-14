
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int br_des_gen_cbcdec_keys ;
struct TYPE_3__ {int (* run ) (void*,unsigned char*,unsigned char*,int) ;int (* init ) (void*,unsigned char*,int) ;} ;
typedef TYPE_1__ br_block_cbcdec_class ;


 int FUNC_0 (char*,unsigned char*,unsigned char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (unsigned char*,char*) ;
 int FUNC_3 (unsigned char*,unsigned char*,int) ;
 int FUNC_4 (unsigned char*,int ,int) ;
 int FUNC_5 (char*) ;
 int VAR_0 ;
 int FUNC_6 (void*,unsigned char*,int) ;
 int FUNC_7 (void*,unsigned char*,unsigned char*,int) ;
 int FUNC_8 (unsigned char*,unsigned char*,int) ;

__attribute__((used)) static void
FUNC_9(const br_block_cbcdec_class *VAR_1)
{
 unsigned char VAR_2[8], VAR_3[8], VAR_4[8];
 unsigned char VAR_5[8];
 unsigned char VAR_6[8];
 int VAR_7, VAR_8;
 br_des_gen_cbcdec_keys VAR_9;
 void *VAR_10;

 VAR_10 = &VAR_9;
 FUNC_2(VAR_2, "79b63486e0ce37e0");
 FUNC_2(VAR_3, "08e65231abae3710");
 FUNC_2(VAR_4, "1f5eb69e925ef185");
 FUNC_2(VAR_5, "2783aa729432fe96");
 FUNC_2(VAR_6, "44937ca532cdbf98");
 for (VAR_7 = 0; VAR_7 < 400; VAR_7 ++) {
  unsigned char VAR_11[24];

  FUNC_3(VAR_11, VAR_2, 8);
  FUNC_3(VAR_11 + 8, VAR_3, 8);
  FUNC_3(VAR_11 + 16, VAR_4, 8);
  VAR_1->init(VAR_10, VAR_11, sizeof VAR_11);
  for (VAR_8 = 0; VAR_8 < 10000; VAR_8 ++) {
   unsigned char VAR_12[8];

   FUNC_4(VAR_12, 0, sizeof VAR_12);
   VAR_1->run(VAR_10, VAR_12, VAR_5, sizeof VAR_5);
   switch (VAR_8) {
   case 9997: FUNC_8(VAR_4, VAR_5, 8); break;
   case 9998: FUNC_8(VAR_3, VAR_5, 8); break;
   case 9999: FUNC_8(VAR_2, VAR_5, 8); break;
   }
  }
  FUNC_5(".");
  FUNC_1(VAR_0);
 }
 FUNC_5(" ");
 FUNC_1(VAR_0);
 FUNC_0("MC DES decrypt", VAR_5, VAR_6, sizeof VAR_5);
}
