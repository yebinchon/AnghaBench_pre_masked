
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int (* run ) (TYPE_1__ const**,unsigned char*,unsigned char*,int) ;int (* init ) (TYPE_1__ const**,unsigned char*,size_t) ;} ;
typedef TYPE_1__ br_block_cbcdec_class ;
struct TYPE_7__ {TYPE_1__* vtable; } ;
typedef TYPE_2__ br_aes_gen_cbcdec_keys ;


 int FUNC_0 (char*,unsigned char*,unsigned char*,int) ;
 int FUNC_1 (int ) ;
 size_t FUNC_2 (unsigned char*,char*) ;
 int FUNC_3 (unsigned char*,unsigned char*,int) ;
 int FUNC_4 (unsigned char*,int ,int) ;
 int FUNC_5 (char*) ;
 int VAR_0 ;
 int FUNC_6 (TYPE_1__ const**,unsigned char*,size_t) ;
 int FUNC_7 (TYPE_1__ const**,unsigned char*,unsigned char*,int) ;

__attribute__((used)) static void
FUNC_8(const br_block_cbcdec_class *VAR_1,
 char *VAR_2, char *VAR_3, char *VAR_4)
{
 unsigned char VAR_5[32];
 unsigned char VAR_6[16];
 unsigned char VAR_7[16];
 unsigned char VAR_8[16];
 size_t VAR_9;
 int VAR_10, VAR_11, VAR_12;
 br_aes_gen_cbcdec_keys VAR_13;
 const br_block_cbcdec_class **VAR_14;

 VAR_14 = &VAR_13.vtable;
 VAR_9 = FUNC_2(VAR_5, VAR_2);
 FUNC_2(VAR_6, VAR_3);
 FUNC_2(VAR_8, VAR_4);
 for (VAR_10 = 0; VAR_10 < 100; VAR_10 ++) {
  VAR_1->init(VAR_14, VAR_5, VAR_9);
  for (VAR_11 = 0; VAR_11 < 1000; VAR_11 ++) {
   unsigned char VAR_15[16];

   FUNC_3(VAR_7, VAR_6, sizeof VAR_6);
   FUNC_4(VAR_15, 0, sizeof VAR_15);
   VAR_1->run(VAR_14, VAR_15, VAR_6, sizeof VAR_6);
  }
  switch (VAR_9) {
  case 16:
   for (VAR_12 = 0; VAR_12 < 16; VAR_12 ++) {
    VAR_5[VAR_12] ^= VAR_6[VAR_12];
   }
   break;
  case 24:
   for (VAR_12 = 0; VAR_12 < 8; VAR_12 ++) {
    VAR_5[VAR_12] ^= VAR_7[8 + VAR_12];
   }
   for (VAR_12 = 0; VAR_12 < 16; VAR_12 ++) {
    VAR_5[8 + VAR_12] ^= VAR_6[VAR_12];
   }
   break;
  default:
   for (VAR_12 = 0; VAR_12 < 16; VAR_12 ++) {
    VAR_5[VAR_12] ^= VAR_7[VAR_12];
    VAR_5[16 + VAR_12] ^= VAR_6[VAR_12];
   }
   break;
  }
  FUNC_5(".");
  FUNC_1(VAR_0);
 }
 FUNC_5(" ");
 FUNC_1(VAR_0);
 FUNC_0("MC AES decrypt", VAR_6, VAR_8, sizeof VAR_6);
}
