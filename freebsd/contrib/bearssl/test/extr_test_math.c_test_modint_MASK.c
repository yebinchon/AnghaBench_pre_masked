
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int mpz_t ;
struct TYPE_2__ {int (* decode_mod ) (int*,unsigned char*,size_t,int*) ;int (* ninv ) (int) ;int (* add ) (int*,int*,int) ;int (* sub ) (int*,int*,int) ;int word_size; int (* modpow ) (int*,unsigned char*,size_t,int*,int,int*,int*) ;int (* montymul ) (int*,int*,int*,int*,int) ;int (* to_monty ) (int*,int*) ;int (* from_monty ) (int*,int*,int) ;int (* reduce ) (int*,int*,int*) ;int (* decode ) (int*,unsigned char*,size_t) ;int (* decode_reduce ) (int*,unsigned char*,size_t,int*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 TYPE_1__* VAR_2 ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (unsigned char*,size_t*,int,int,int ,int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (int ,int ,int) ;
 int FUNC_12 (int ,int ,int ,int ) ;
 int FUNC_13 (int ,int) ;
 scalar_t__ FUNC_14 (int ) ;
 int FUNC_15 (int ,int ,int ) ;
 int FUNC_16 (int ,int ,int) ;
 int FUNC_17 (int ,int ,int ) ;
 int FUNC_18 (int*) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (char*) ;
 int FUNC_21 (int ,int) ;
 int VAR_3 ;
 int FUNC_22 (int*,unsigned char*,size_t) ;
 int FUNC_23 (int*,int*,int) ;
 int FUNC_24 (int*,unsigned char*,size_t,int*) ;
 int FUNC_25 (int*,unsigned char*,size_t,int*) ;
 int FUNC_26 (int*,int*,int) ;
 int FUNC_27 (int*,int*,int) ;
 int FUNC_28 (int*,unsigned char*,size_t,int*) ;
 int FUNC_29 (int*,unsigned char*,size_t) ;
 int FUNC_30 (int*,int*,int*) ;
 int FUNC_31 (int*,unsigned char*,size_t,int*) ;
 int FUNC_32 (int*,int*) ;
 int FUNC_33 (int*,unsigned char*,size_t,int*) ;
 int FUNC_34 (int*,int*,int) ;
 int FUNC_35 (int*,unsigned char*,size_t,int*) ;
 int FUNC_36 (int*,unsigned char*,size_t,int*) ;
 int FUNC_37 (int*,int*) ;
 int FUNC_38 (int*,int*,int*,int*,int) ;
 int FUNC_39 (int*,unsigned char*,size_t,int*) ;
 int FUNC_40 (int*,unsigned char*,size_t,int*,int,int*,int*) ;
 int FUNC_41 (int) ;
 int FUNC_42 (int*,unsigned char*,size_t,int*) ;
 int FUNC_43 (int*,unsigned char*,size_t) ;
 int FUNC_44 (int*,unsigned char*,size_t,int*) ;
 int FUNC_45 (int*,unsigned char*,size_t,int*) ;
 int FUNC_46 (int*,int*,int) ;
 int FUNC_47 (int*,int*,int) ;
 scalar_t__ FUNC_48 (int *) ;

__attribute__((used)) static void
FUNC_49(void)
{
 int VAR_4, VAR_5, VAR_6;
 mpz_t VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;

 FUNC_20("Test modular integers: ");
 FUNC_2(VAR_3);

 FUNC_3(VAR_1);
 FUNC_8(VAR_7);
 FUNC_8(VAR_8);
 FUNC_8(VAR_9);
 FUNC_8(VAR_10);
 FUNC_8(VAR_11);
 FUNC_13(VAR_11, (unsigned long)FUNC_48(((void*)0)));
 FUNC_4(VAR_1, VAR_11);
 for (VAR_6 = 2; VAR_6 <= 128; VAR_6 ++) {
  for (VAR_4 = 0; VAR_4 < 10; VAR_4 ++) {
   unsigned char VAR_12[100], VAR_13[100], VAR_14[100], VAR_15[100];
   size_t VAR_16, VAR_17, VAR_18, VAR_19;
   uint32_t VAR_20[40], VAR_21[40], VAR_22[40], VAR_23[60], VAR_24[100];
   uint32_t VAR_25[40], VAR_26[40], VAR_27[40];
   uint32_t VAR_28;
   uint32_t VAR_29;

   FUNC_21(VAR_7, VAR_6);
   FUNC_17(VAR_8, VAR_1, VAR_7);
   FUNC_17(VAR_9, VAR_1, VAR_7);
   FUNC_16(VAR_10, VAR_1, VAR_6 + 60);
   if (FUNC_14(VAR_9) == 0) {
    FUNC_13(VAR_9, 1);
   }
   FUNC_7(VAR_12, &VAR_16, 1, 1, 0, 0, VAR_7);
   FUNC_7(VAR_13, &VAR_17, 1, 1, 0, 0, VAR_8);
   FUNC_7(VAR_14, &VAR_18, 1, 1, 0, 0, VAR_9);
   FUNC_7(VAR_15, &VAR_19, 1, 1, 0, 0, VAR_10);

   VAR_2->decode(VAR_20, VAR_12, VAR_16);
   if (VAR_2->decode_mod(VAR_21, VAR_13, VAR_17, VAR_20) != 1) {
    FUNC_20("Decode error\n");
    FUNC_20("  ea = ");
    FUNC_19(VAR_8);
    FUNC_20("\n");
    FUNC_20("  p = ");
    FUNC_18(VAR_20);
    FUNC_20("\n");
    FUNC_1(VAR_0);
   }
   VAR_29 = VAR_2->ninv(VAR_20[1]);
   if (VAR_2->decode_mod(VAR_22, VAR_14, VAR_18, VAR_20) != 1) {
    FUNC_20("Decode error\n");
    FUNC_20("  eb = ");
    FUNC_19(VAR_9);
    FUNC_20("\n");
    FUNC_20("  p = ");
    FUNC_18(VAR_20);
    FUNC_20("\n");
    FUNC_1(VAR_0);
   }
   VAR_2->decode(VAR_23, VAR_15, VAR_19);
   FUNC_0(VAR_20, VAR_7);
   FUNC_0(VAR_21, VAR_8);
   FUNC_0(VAR_22, VAR_9);
   FUNC_0(VAR_23, VAR_10);

   VAR_2->decode_mod(VAR_21, VAR_13, VAR_17, VAR_20);
   VAR_2->decode_mod(VAR_22, VAR_14, VAR_18, VAR_20);
   VAR_28 = VAR_2->add(VAR_21, VAR_22, 1);
   VAR_28 |= VAR_2->sub(VAR_21, VAR_20, 0) ^ (uint32_t)1;
   VAR_2->sub(VAR_21, VAR_20, VAR_28);
   FUNC_5(VAR_11, VAR_8, VAR_9);
   FUNC_9(VAR_11, VAR_11, VAR_7);
   FUNC_0(VAR_21, VAR_11);

   VAR_2->decode_mod(VAR_21, VAR_13, VAR_17, VAR_20);
   VAR_2->decode_mod(VAR_22, VAR_14, VAR_18, VAR_20);
   VAR_2->add(VAR_21, VAR_20, VAR_2->sub(VAR_21, VAR_22, 1));
   FUNC_15(VAR_11, VAR_8, VAR_9);
   FUNC_9(VAR_11, VAR_11, VAR_7);
   FUNC_0(VAR_21, VAR_11);

   VAR_2->decode_reduce(VAR_21, VAR_15, VAR_19, VAR_20);
   FUNC_9(VAR_11, VAR_10, VAR_7);
   FUNC_0(VAR_21, VAR_11);

   VAR_2->decode(VAR_23, VAR_15, VAR_19);
   VAR_2->reduce(VAR_21, VAR_23, VAR_20);
   FUNC_9(VAR_11, VAR_10, VAR_7);
   FUNC_0(VAR_21, VAR_11);

   VAR_2->decode_mod(VAR_21, VAR_13, VAR_17, VAR_20);
   VAR_2->to_monty(VAR_21, VAR_20);
   FUNC_11(VAR_11, VAR_8, ((VAR_6 + VAR_2->word_size - 1)
    / VAR_2->word_size) * VAR_2->word_size);
   FUNC_9(VAR_11, VAR_11, VAR_7);
   FUNC_0(VAR_21, VAR_11);
   VAR_2->from_monty(VAR_21, VAR_20, VAR_29);
   FUNC_0(VAR_21, VAR_8);

   VAR_2->decode_mod(VAR_21, VAR_13, VAR_17, VAR_20);
   VAR_2->decode_mod(VAR_22, VAR_14, VAR_18, VAR_20);
   VAR_2->to_monty(VAR_21, VAR_20);
   VAR_2->montymul(VAR_25, VAR_21, VAR_22, VAR_20, VAR_29);
   FUNC_10(VAR_11, VAR_8, VAR_9);
   FUNC_9(VAR_11, VAR_11, VAR_7);
   FUNC_0(VAR_25, VAR_11);

   VAR_2->decode_mod(VAR_21, VAR_13, VAR_17, VAR_20);
   VAR_2->modpow(VAR_21, VAR_15, VAR_19, VAR_20, VAR_29, VAR_25, VAR_26);
   FUNC_12(VAR_11, VAR_8, VAR_10, VAR_7);
   FUNC_0(VAR_21, VAR_11);
  }
  FUNC_20(".");
  FUNC_2(VAR_3);
 }
 FUNC_6(VAR_7);
 FUNC_6(VAR_8);
 FUNC_6(VAR_9);
 FUNC_6(VAR_10);
 FUNC_6(VAR_11);

 FUNC_20(" done.\n");
 FUNC_2(VAR_3);
}
