
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int32_t ;
typedef int u_int16_t ;
typedef int u_char ;
struct sshbuf {int dummy; } ;
typedef int expec256 ;
typedef int expbn2 ;
typedef int expbn1 ;
typedef struct sshbuf EC_POINT ;
typedef struct sshbuf EC_KEY ;
typedef struct sshbuf BIGNUM ;


 int FUNC_0 (struct sshbuf*,struct sshbuf*) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int const*,int*,int) ;
 int FUNC_3 (struct sshbuf*,int *) ;
 int FUNC_4 (size_t,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (int const,int) ;
 int FUNC_8 (struct sshbuf*,struct sshbuf*) ;
 int FUNC_9 (struct sshbuf*) ;
 struct sshbuf* FUNC_10 () ;
 int FUNC_11 (struct sshbuf*) ;
 int FUNC_12 (struct sshbuf*) ;
 int FUNC_13 (struct sshbuf*) ;
 int FUNC_14 (struct sshbuf*) ;
 int FUNC_15 (struct sshbuf*) ;
 struct sshbuf* FUNC_16 (int) ;
 int FUNC_17 (struct sshbuf*,struct sshbuf*) ;
 int FUNC_18 (struct sshbuf*) ;
 int FUNC_19 (int ,int ,struct sshbuf*,struct sshbuf*,int *) ;
 struct sshbuf* FUNC_20 (int ) ;
 int FUNC_21 (int ,struct sshbuf*,struct sshbuf*,struct sshbuf*,int *) ;
 int FUNC_22 (char const*,struct sshbuf*) ;
 int VAR_0 ;
 int FUNC_23 (int const*) ;
 int FUNC_24 (int const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_25 () ;
 int FUNC_26 (char*) ;
 int FUNC_27 (struct sshbuf*) ;
 int FUNC_28 (struct sshbuf*,struct sshbuf*) ;
 int FUNC_29 (struct sshbuf*,struct sshbuf*) ;
 int FUNC_30 (struct sshbuf*,struct sshbuf*) ;
 int FUNC_31 (struct sshbuf*,int const**,size_t*) ;
 size_t FUNC_32 (struct sshbuf*) ;
 struct sshbuf* FUNC_33 () ;
 int const* FUNC_34 (struct sshbuf*) ;
 int FUNC_35 (struct sshbuf*,int*,int) ;
 int FUNC_36 (struct sshbuf*,struct sshbuf*) ;
 int FUNC_37 (struct sshbuf*,struct sshbuf*) ;
 int FUNC_38 (struct sshbuf*,struct sshbuf*) ;
 int FUNC_39 (struct sshbuf*,int*,int) ;
 int FUNC_40 (struct sshbuf*,int) ;
 int FUNC_41 (struct sshbuf*,int) ;
 int FUNC_42 (struct sshbuf*,int) ;
 int FUNC_43 (struct sshbuf*,int,int *) ;
 int FUNC_44 (struct sshbuf*,int) ;

void
FUNC_45(void)
{
 struct sshbuf *VAR_5;
 BIGNUM *VAR_6, *VAR_7;

 const char *VAR_8 = "0102030405060708090a0b0c0d0e0f10";

 const char *VAR_9 = "f0e0d0c0b0a0908070605040302010007fff11";
 u_char VAR_10[] = {
  0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08,
  0x09, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f, 0x10,
 };
 u_char VAR_11[] = {
  0xf0, 0xe0, 0xd0, 0xc0, 0xb0, 0xa0, 0x90, 0x80,
  0x70, 0x60, 0x50, 0x40, 0x30, 0x20, 0x10, 0x00,
  0x7f, 0xff, 0x11
 };
 int VAR_12;







 FUNC_26("sshbuf_put_bignum1");
 do { VAR_6 = ((void*)0); FUNC_0(FUNC_0(&VAR_6, VAR_8), 0); } while (0);
 VAR_5 = FUNC_33();
 FUNC_3(VAR_5, ((void*)0));
 FUNC_1(FUNC_36(VAR_5, VAR_6), 0);
 FUNC_4(FUNC_32(VAR_5), sizeof(VAR_10) + 2);
 FUNC_5(FUNC_23(FUNC_34(VAR_5)), (u_int16_t)FUNC_11(VAR_6));
 FUNC_2(FUNC_34(VAR_5) + 2, VAR_10, sizeof(VAR_10));
 FUNC_9(VAR_6);
 FUNC_27(VAR_5);
 FUNC_25();

 FUNC_26("sshbuf_put_bignum1 limited");
 do { VAR_6 = ((void*)0); FUNC_0(FUNC_0(&VAR_6, VAR_8), 0); } while (0);
 VAR_5 = FUNC_33();
 FUNC_3(VAR_5, ((void*)0));
 FUNC_1(FUNC_44(VAR_5, sizeof(VAR_10) + 1), 0);
 VAR_12 = FUNC_36(VAR_5, VAR_6);
 FUNC_1(VAR_12, VAR_4);
 FUNC_4(FUNC_32(VAR_5), 0);
 FUNC_9(VAR_6);
 FUNC_27(VAR_5);
 FUNC_25();

 FUNC_26("sshbuf_put_bignum1 bn2");
 do { VAR_6 = ((void*)0); FUNC_0(FUNC_0(&VAR_6, VAR_9), 0); } while (0);
 VAR_5 = FUNC_33();
 FUNC_3(VAR_5, ((void*)0));
 FUNC_1(FUNC_36(VAR_5, VAR_6), 0);
 FUNC_4(FUNC_32(VAR_5), sizeof(VAR_11) + 2);
 FUNC_5(FUNC_23(FUNC_34(VAR_5)), (u_int16_t)FUNC_11(VAR_6));
 FUNC_2(FUNC_34(VAR_5) + 2, VAR_11, sizeof(VAR_11));
 FUNC_9(VAR_6);
 FUNC_27(VAR_5);
 FUNC_25();

 FUNC_26("sshbuf_put_bignum1 bn2 limited");
 do { VAR_6 = ((void*)0); FUNC_0(FUNC_0(&VAR_6, VAR_9), 0); } while (0);
 VAR_5 = FUNC_33();
 FUNC_3(VAR_5, ((void*)0));
 FUNC_1(FUNC_44(VAR_5, sizeof(VAR_10) + 1), 0);
 VAR_12 = FUNC_36(VAR_5, VAR_6);
 FUNC_1(VAR_12, VAR_4);
 FUNC_4(FUNC_32(VAR_5), 0);
 FUNC_9(VAR_6);
 FUNC_27(VAR_5);
 FUNC_25();

 FUNC_26("sshbuf_put_bignum2");
 do { VAR_6 = ((void*)0); FUNC_0(FUNC_0(&VAR_6, VAR_8), 0); } while (0);
 VAR_5 = FUNC_33();
 FUNC_3(VAR_5, ((void*)0));
 FUNC_1(FUNC_37(VAR_5, VAR_6), 0);
 FUNC_4(FUNC_32(VAR_5), sizeof(VAR_10) + 4);
 FUNC_6(FUNC_24(FUNC_34(VAR_5)), (u_int32_t)FUNC_12(VAR_6));
 FUNC_2(FUNC_34(VAR_5) + 4, VAR_10, sizeof(VAR_10));
 FUNC_9(VAR_6);
 FUNC_27(VAR_5);
 FUNC_25();

 FUNC_26("sshbuf_put_bignum2 limited");
 do { VAR_6 = ((void*)0); FUNC_0(FUNC_0(&VAR_6, VAR_8), 0); } while (0);
 VAR_5 = FUNC_33();
 FUNC_3(VAR_5, ((void*)0));
 FUNC_1(FUNC_44(VAR_5, sizeof(VAR_10) + 3), 0);
 VAR_12 = FUNC_37(VAR_5, VAR_6);
 FUNC_1(VAR_12, VAR_4);
 FUNC_4(FUNC_32(VAR_5), 0);
 FUNC_9(VAR_6);
 FUNC_27(VAR_5);
 FUNC_25();

 FUNC_26("sshbuf_put_bignum2 bn2");
 do { VAR_6 = ((void*)0); FUNC_0(FUNC_0(&VAR_6, VAR_9), 0); } while (0);
 VAR_5 = FUNC_33();
 FUNC_3(VAR_5, ((void*)0));
 FUNC_1(FUNC_37(VAR_5, VAR_6), 0);
 FUNC_4(FUNC_32(VAR_5), sizeof(VAR_11) + 4 + 1);
 FUNC_6(FUNC_24(FUNC_34(VAR_5)), (u_int32_t)FUNC_12(VAR_6) + 1);
 FUNC_7(*(FUNC_34(VAR_5) + 4), 0x00);
 FUNC_2(FUNC_34(VAR_5) + 5, VAR_11, sizeof(VAR_11));
 FUNC_9(VAR_6);
 FUNC_27(VAR_5);
 FUNC_25();

 FUNC_26("sshbuf_put_bignum2 bn2 limited");
 do { VAR_6 = ((void*)0); FUNC_0(FUNC_0(&VAR_6, VAR_9), 0); } while (0);
 VAR_5 = FUNC_33();
 FUNC_3(VAR_5, ((void*)0));
 FUNC_1(FUNC_44(VAR_5, sizeof(VAR_11) + 3), 0);
 VAR_12 = FUNC_37(VAR_5, VAR_6);
 FUNC_1(VAR_12, VAR_4);
 FUNC_4(FUNC_32(VAR_5), 0);
 FUNC_9(VAR_6);
 FUNC_27(VAR_5);
 FUNC_25();

 FUNC_26("sshbuf_get_bignum1");
 do { VAR_6 = ((void*)0); FUNC_0(FUNC_0(&VAR_6, VAR_8), 0); } while (0);
 VAR_5 = FUNC_33();
 FUNC_3(VAR_5, ((void*)0));
 FUNC_1(FUNC_40(VAR_5, FUNC_11(VAR_6)), 0);
 FUNC_1(FUNC_35(VAR_5, VAR_10, sizeof(VAR_10)), 0);
 FUNC_4(FUNC_32(VAR_5), 2 + sizeof(VAR_10));
 FUNC_1(FUNC_40(VAR_5, 0xd00f), 0);
 VAR_7 = FUNC_10();
 FUNC_1(FUNC_28(VAR_5, VAR_7), 0);
 FUNC_0(VAR_6, VAR_7);
 FUNC_4(FUNC_32(VAR_5), 2);
 FUNC_9(VAR_6);
 FUNC_9(VAR_7);
 FUNC_27(VAR_5);
 FUNC_25();

 FUNC_26("sshbuf_get_bignum1 truncated");
 do { VAR_6 = ((void*)0); FUNC_0(FUNC_0(&VAR_6, VAR_8), 0); } while (0);
 VAR_5 = FUNC_33();
 FUNC_3(VAR_5, ((void*)0));
 FUNC_1(FUNC_40(VAR_5, FUNC_11(VAR_6)), 0);
 FUNC_1(FUNC_35(VAR_5, VAR_10, sizeof(VAR_10) - 1), 0);
 FUNC_4(FUNC_32(VAR_5), 2 + sizeof(VAR_10) - 1);
 VAR_7 = FUNC_10();
 VAR_12 = FUNC_28(VAR_5, VAR_7);
 FUNC_1(VAR_12, VAR_3);
 FUNC_4(FUNC_32(VAR_5), 2 + sizeof(VAR_10) - 1);
 FUNC_9(VAR_6);
 FUNC_9(VAR_7);
 FUNC_27(VAR_5);
 FUNC_25();

 FUNC_26("sshbuf_get_bignum1 giant");
 do { VAR_6 = ((void*)0); FUNC_0(FUNC_0(&VAR_6, VAR_8), 0); } while (0);
 VAR_5 = FUNC_33();
 FUNC_3(VAR_5, ((void*)0));
 FUNC_1(FUNC_40(VAR_5, 0xffff), 0);
 FUNC_1(FUNC_43(VAR_5, (0xffff + 7) / 8, ((void*)0)), 0);
 FUNC_4(FUNC_32(VAR_5), 2 + ((0xffff + 7) / 8));
 VAR_7 = FUNC_10();
 VAR_12 = FUNC_28(VAR_5, VAR_7);
 FUNC_1(VAR_12, VAR_2);
 FUNC_4(FUNC_32(VAR_5), 2 + ((0xffff + 7) / 8));
 FUNC_9(VAR_6);
 FUNC_9(VAR_7);
 FUNC_27(VAR_5);
 FUNC_25();

 FUNC_26("sshbuf_get_bignum1 bn2");
 do { VAR_6 = ((void*)0); FUNC_0(FUNC_0(&VAR_6, VAR_9), 0); } while (0);
 VAR_5 = FUNC_33();
 FUNC_3(VAR_5, ((void*)0));
 FUNC_1(FUNC_40(VAR_5, FUNC_11(VAR_6)), 0);
 FUNC_1(FUNC_35(VAR_5, VAR_11, sizeof(VAR_11)), 0);
 FUNC_4(FUNC_32(VAR_5), 2 + sizeof(VAR_11));
 FUNC_1(FUNC_40(VAR_5, 0xd00f), 0);
 VAR_7 = FUNC_10();
 FUNC_1(FUNC_28(VAR_5, VAR_7), 0);
 FUNC_0(VAR_6, VAR_7);
 FUNC_4(FUNC_32(VAR_5), 2);
 FUNC_9(VAR_6);
 FUNC_9(VAR_7);
 FUNC_27(VAR_5);
 FUNC_25();

 FUNC_26("sshbuf_get_bignum1 bn2 truncated");
 do { VAR_6 = ((void*)0); FUNC_0(FUNC_0(&VAR_6, VAR_9), 0); } while (0);
 VAR_5 = FUNC_33();
 FUNC_3(VAR_5, ((void*)0));
 FUNC_1(FUNC_40(VAR_5, FUNC_11(VAR_6)), 0);
 FUNC_1(FUNC_35(VAR_5, VAR_11, sizeof(VAR_11) - 1), 0);
 FUNC_4(FUNC_32(VAR_5), 2 + sizeof(VAR_11) - 1);
 VAR_7 = FUNC_10();
 VAR_12 = FUNC_28(VAR_5, VAR_7);
 FUNC_1(VAR_12, VAR_3);
 FUNC_4(FUNC_32(VAR_5), 2 + sizeof(VAR_11) - 1);
 FUNC_9(VAR_6);
 FUNC_9(VAR_7);
 FUNC_27(VAR_5);
 FUNC_25();

 FUNC_26("sshbuf_get_bignum2");
 do { VAR_6 = ((void*)0); FUNC_0(FUNC_0(&VAR_6, VAR_8), 0); } while (0);
 VAR_5 = FUNC_33();
 FUNC_3(VAR_5, ((void*)0));
 FUNC_1(FUNC_41(VAR_5, FUNC_12(VAR_6)), 0);
 FUNC_1(FUNC_35(VAR_5, VAR_10, sizeof(VAR_10)), 0);
 FUNC_4(FUNC_32(VAR_5), 4 + sizeof(VAR_10));
 FUNC_1(FUNC_40(VAR_5, 0xd00f), 0);
 VAR_7 = FUNC_10();
 FUNC_1(FUNC_29(VAR_5, VAR_7), 0);
 FUNC_0(VAR_6, VAR_7);
 FUNC_4(FUNC_32(VAR_5), 2);
 FUNC_9(VAR_6);
 FUNC_9(VAR_7);
 FUNC_27(VAR_5);
 FUNC_25();

 FUNC_26("sshbuf_get_bignum2 truncated");
 do { VAR_6 = ((void*)0); FUNC_0(FUNC_0(&VAR_6, VAR_8), 0); } while (0);
 VAR_5 = FUNC_33();
 FUNC_3(VAR_5, ((void*)0));
 FUNC_1(FUNC_41(VAR_5, FUNC_12(VAR_6)), 0);
 FUNC_1(FUNC_35(VAR_5, VAR_10, sizeof(VAR_10) - 1), 0);
 VAR_7 = FUNC_10();
 VAR_12 = FUNC_29(VAR_5, VAR_7);
 FUNC_1(VAR_12, VAR_3);
 FUNC_4(FUNC_32(VAR_5), sizeof(VAR_10) + 3);
 FUNC_9(VAR_6);
 FUNC_9(VAR_7);
 FUNC_27(VAR_5);
 FUNC_25();

 FUNC_26("sshbuf_get_bignum2 giant");
 do { VAR_6 = ((void*)0); FUNC_0(FUNC_0(&VAR_6, VAR_8), 0); } while (0);
 VAR_5 = FUNC_33();
 FUNC_3(VAR_5, ((void*)0));
 FUNC_1(FUNC_41(VAR_5, 65536), 0);
 FUNC_1(FUNC_43(VAR_5, 65536, ((void*)0)), 0);
 VAR_7 = FUNC_10();
 VAR_12 = FUNC_29(VAR_5, VAR_7);
 FUNC_1(VAR_12, VAR_2);
 FUNC_4(FUNC_32(VAR_5), 65536 + 4);
 FUNC_9(VAR_6);
 FUNC_9(VAR_7);
 FUNC_27(VAR_5);
 FUNC_25();

 FUNC_26("sshbuf_get_bignum2 bn2");
 do { VAR_6 = ((void*)0); FUNC_0(FUNC_0(&VAR_6, VAR_9), 0); } while (0);
 VAR_5 = FUNC_33();
 FUNC_3(VAR_5, ((void*)0));
 FUNC_1(FUNC_41(VAR_5, FUNC_12(VAR_6) + 1), 0);
 FUNC_1(FUNC_42(VAR_5, 0x00), 0);
 FUNC_1(FUNC_35(VAR_5, VAR_11, sizeof(VAR_11)), 0);
 FUNC_4(FUNC_32(VAR_5), 4 + 1 + sizeof(VAR_11));
 FUNC_1(FUNC_40(VAR_5, 0xd00f), 0);
 VAR_7 = FUNC_10();
 FUNC_1(FUNC_29(VAR_5, VAR_7), 0);
 FUNC_0(VAR_6, VAR_7);
 FUNC_4(FUNC_32(VAR_5), 2);
 FUNC_9(VAR_6);
 FUNC_9(VAR_7);
 FUNC_27(VAR_5);
 FUNC_25();

 FUNC_26("sshbuf_get_bignum2 bn2 truncated");
 do { VAR_6 = ((void*)0); FUNC_0(FUNC_0(&VAR_6, VAR_9), 0); } while (0);
 VAR_5 = FUNC_33();
 FUNC_3(VAR_5, ((void*)0));
 FUNC_1(FUNC_41(VAR_5, FUNC_12(VAR_6) + 1), 0);
 FUNC_1(FUNC_42(VAR_5, 0x00), 0);
 FUNC_1(FUNC_35(VAR_5, VAR_11, sizeof(VAR_11) - 1), 0);
 VAR_7 = FUNC_10();
 VAR_12 = FUNC_29(VAR_5, VAR_7);
 FUNC_1(VAR_12, VAR_3);
 FUNC_4(FUNC_32(VAR_5), sizeof(VAR_11) + 1 + 4 - 1);
 FUNC_9(VAR_6);
 FUNC_9(VAR_7);
 FUNC_27(VAR_5);
 FUNC_25();

 FUNC_26("sshbuf_get_bignum2 bn2 negative");
 do { VAR_6 = ((void*)0); FUNC_0(FUNC_0(&VAR_6, VAR_9), 0); } while (0);
 VAR_5 = FUNC_33();
 FUNC_3(VAR_5, ((void*)0));
 FUNC_1(FUNC_41(VAR_5, FUNC_12(VAR_6)), 0);
 FUNC_1(FUNC_35(VAR_5, VAR_11, sizeof(VAR_11)), 0);
 VAR_7 = FUNC_10();
 VAR_12 = FUNC_29(VAR_5, VAR_7);
 FUNC_1(VAR_12, VAR_1);
 FUNC_4(FUNC_32(VAR_5), sizeof(VAR_11) + 4);
 FUNC_9(VAR_6);
 FUNC_9(VAR_7);
 FUNC_27(VAR_5);
 FUNC_25();
}
