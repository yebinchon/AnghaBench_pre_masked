
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sshkey {int dummy; } ;
struct sshbuf {int dummy; } ;
struct fuzz {int dummy; } ;


 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (struct sshbuf*,int *) ;
 int VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,struct fuzz*) ;
 int FUNC_4 (char*) ;
 struct fuzz* FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (struct fuzz*) ;
 int FUNC_7 (struct fuzz*) ;
 int FUNC_8 (struct fuzz*) ;
 int FUNC_9 (struct fuzz*) ;
 int FUNC_10 (struct fuzz*) ;
 struct sshbuf* FUNC_11 (char*) ;
 int VAR_1 ;
 int FUNC_12 (struct sshkey*) ;
 int FUNC_13 (struct sshkey*,char*) ;
 int FUNC_14 (struct sshbuf*) ;
 int FUNC_15 (struct sshbuf*) ;
 int FUNC_16 (struct sshbuf*) ;
 struct sshbuf* FUNC_17 () ;
 int FUNC_18 (struct sshbuf*,int ,int ) ;
 int FUNC_19 (struct sshbuf*) ;
 int FUNC_20 (struct sshkey*) ;
 scalar_t__ FUNC_21 (int ,struct sshkey**) ;
 scalar_t__ FUNC_22 (struct sshbuf*,char*,struct sshkey**,int *) ;
 int FUNC_23 (char*) ;

void
FUNC_24(void)
{
 struct sshkey *VAR_2;
 struct sshbuf *VAR_3, *VAR_4;
 struct fuzz *VAR_5;
 int VAR_6;


 FUNC_4("fuzz RSA private");
 VAR_3 = FUNC_11("rsa_1");
 VAR_5 = FUNC_5(VAR_0, FUNC_16(VAR_3),
     FUNC_15(VAR_3));
 FUNC_0(FUNC_22(VAR_3, "", &VAR_2, ((void*)0)), 0);
 FUNC_20(VAR_2);
 FUNC_14(VAR_3);
 FUNC_1(VAR_4 = FUNC_17(), ((void*)0));
 FUNC_3(VAR_1, VAR_5);
 for(; !FUNC_7(VAR_5); FUNC_9(VAR_5)) {
  VAR_6 = FUNC_18(VAR_4, FUNC_10(VAR_5), FUNC_8(VAR_5));
  FUNC_0(VAR_6, 0);
  if (FUNC_22(VAR_4, "", &VAR_2, ((void*)0)) == 0)
   FUNC_20(VAR_2);
  FUNC_19(VAR_4);
 }
 FUNC_14(VAR_4);
 FUNC_6(VAR_5);
 FUNC_2();

 FUNC_4("fuzz RSA new-format private");
 VAR_3 = FUNC_11("rsa_n");
 VAR_5 = FUNC_5(VAR_0, FUNC_16(VAR_3),
     FUNC_15(VAR_3));
 FUNC_0(FUNC_22(VAR_3, "", &VAR_2, ((void*)0)), 0);
 FUNC_20(VAR_2);
 FUNC_14(VAR_3);
 FUNC_1(VAR_4 = FUNC_17(), ((void*)0));
 FUNC_3(VAR_1, VAR_5);
 for(; !FUNC_7(VAR_5); FUNC_9(VAR_5)) {
  VAR_6 = FUNC_18(VAR_4, FUNC_10(VAR_5), FUNC_8(VAR_5));
  FUNC_0(VAR_6, 0);
  if (FUNC_22(VAR_4, "", &VAR_2, ((void*)0)) == 0)
   FUNC_20(VAR_2);
  FUNC_19(VAR_4);
 }
 FUNC_14(VAR_4);
 FUNC_6(VAR_5);
 FUNC_2();

 FUNC_4("fuzz DSA private");
 VAR_3 = FUNC_11("dsa_1");
 VAR_5 = FUNC_5(VAR_0, FUNC_16(VAR_3),
     FUNC_15(VAR_3));
 FUNC_0(FUNC_22(VAR_3, "", &VAR_2, ((void*)0)), 0);
 FUNC_20(VAR_2);
 FUNC_14(VAR_3);
 FUNC_1(VAR_4 = FUNC_17(), ((void*)0));
 FUNC_3(VAR_1, VAR_5);
 for(; !FUNC_7(VAR_5); FUNC_9(VAR_5)) {
  VAR_6 = FUNC_18(VAR_4, FUNC_10(VAR_5), FUNC_8(VAR_5));
  FUNC_0(VAR_6, 0);
  if (FUNC_22(VAR_4, "", &VAR_2, ((void*)0)) == 0)
   FUNC_20(VAR_2);
  FUNC_19(VAR_4);
 }
 FUNC_14(VAR_4);
 FUNC_6(VAR_5);
 FUNC_2();

 FUNC_4("fuzz DSA new-format private");
 VAR_3 = FUNC_11("dsa_n");
 VAR_5 = FUNC_5(VAR_0, FUNC_16(VAR_3),
     FUNC_15(VAR_3));
 FUNC_0(FUNC_22(VAR_3, "", &VAR_2, ((void*)0)), 0);
 FUNC_20(VAR_2);
 FUNC_14(VAR_3);
 FUNC_1(VAR_4 = FUNC_17(), ((void*)0));
 FUNC_3(VAR_1, VAR_5);
 for(; !FUNC_7(VAR_5); FUNC_9(VAR_5)) {
  VAR_6 = FUNC_18(VAR_4, FUNC_10(VAR_5), FUNC_8(VAR_5));
  FUNC_0(VAR_6, 0);
  if (FUNC_22(VAR_4, "", &VAR_2, ((void*)0)) == 0)
   FUNC_20(VAR_2);
  FUNC_19(VAR_4);
 }
 FUNC_14(VAR_4);
 FUNC_6(VAR_5);
 FUNC_2();
 FUNC_4("fuzz Ed25519 private");
 VAR_3 = FUNC_11("ed25519_1");
 VAR_5 = FUNC_5(VAR_0, FUNC_16(VAR_3),
     FUNC_15(VAR_3));
 FUNC_0(FUNC_22(VAR_3, "", &VAR_2, ((void*)0)), 0);
 FUNC_20(VAR_2);
 FUNC_14(VAR_3);
 FUNC_1(VAR_4 = FUNC_17(), ((void*)0));
 FUNC_3(VAR_1, VAR_5);
 for(; !FUNC_7(VAR_5); FUNC_9(VAR_5)) {
  VAR_6 = FUNC_18(VAR_4, FUNC_10(VAR_5), FUNC_8(VAR_5));
  FUNC_0(VAR_6, 0);
  if (FUNC_22(VAR_4, "", &VAR_2, ((void*)0)) == 0)
   FUNC_20(VAR_2);
  FUNC_19(VAR_4);
 }
 FUNC_14(VAR_4);
 FUNC_6(VAR_5);
 FUNC_2();

 FUNC_4("fuzz RSA public");
 VAR_3 = FUNC_11("rsa_1");
 FUNC_0(FUNC_22(VAR_3, "", &VAR_2, ((void*)0)), 0);
 FUNC_14(VAR_3);
 FUNC_12(VAR_2);
 FUNC_20(VAR_2);
 FUNC_2();

 FUNC_4("fuzz RSA cert");
 FUNC_0(FUNC_21(FUNC_23("rsa_1"), &VAR_2), 0);
 FUNC_12(VAR_2);
 FUNC_20(VAR_2);
 FUNC_2();

 FUNC_4("fuzz DSA public");
 VAR_3 = FUNC_11("dsa_1");
 FUNC_0(FUNC_22(VAR_3, "", &VAR_2, ((void*)0)), 0);
 FUNC_14(VAR_3);
 FUNC_12(VAR_2);
 FUNC_20(VAR_2);
 FUNC_2();

 FUNC_4("fuzz DSA cert");
 FUNC_0(FUNC_21(FUNC_23("dsa_1"), &VAR_2), 0);
 FUNC_12(VAR_2);
 FUNC_20(VAR_2);
 FUNC_2();
 FUNC_4("fuzz Ed25519 public");
 VAR_3 = FUNC_11("ed25519_1");
 FUNC_0(FUNC_22(VAR_3, "", &VAR_2, ((void*)0)), 0);
 FUNC_14(VAR_3);
 FUNC_12(VAR_2);
 FUNC_20(VAR_2);
 FUNC_2();

 FUNC_4("fuzz Ed25519 cert");
 FUNC_0(FUNC_21(FUNC_23("ed25519_1"), &VAR_2), 0);
 FUNC_12(VAR_2);
 FUNC_20(VAR_2);
 FUNC_2();

 FUNC_4("fuzz RSA sig");
 VAR_3 = FUNC_11("rsa_1");
 FUNC_0(FUNC_22(VAR_3, "", &VAR_2, ((void*)0)), 0);
 FUNC_14(VAR_3);
 FUNC_13(VAR_2, "ssh-rsa");
 FUNC_20(VAR_2);
 FUNC_2();

 FUNC_4("fuzz RSA SHA256 sig");
 VAR_3 = FUNC_11("rsa_1");
 FUNC_0(FUNC_22(VAR_3, "", &VAR_2, ((void*)0)), 0);
 FUNC_14(VAR_3);
 FUNC_13(VAR_2, "rsa-sha2-256");
 FUNC_20(VAR_2);
 FUNC_2();

 FUNC_4("fuzz RSA SHA512 sig");
 VAR_3 = FUNC_11("rsa_1");
 FUNC_0(FUNC_22(VAR_3, "", &VAR_2, ((void*)0)), 0);
 FUNC_14(VAR_3);
 FUNC_13(VAR_2, "rsa-sha2-512");
 FUNC_20(VAR_2);
 FUNC_2();

 FUNC_4("fuzz DSA sig");
 VAR_3 = FUNC_11("dsa_1");
 FUNC_0(FUNC_22(VAR_3, "", &VAR_2, ((void*)0)), 0);
 FUNC_14(VAR_3);
 FUNC_13(VAR_2, ((void*)0));
 FUNC_20(VAR_2);
 FUNC_2();
 FUNC_4("fuzz Ed25519 sig");
 VAR_3 = FUNC_11("ed25519_1");
 FUNC_0(FUNC_22(VAR_3, "", &VAR_2, ((void*)0)), 0);
 FUNC_14(VAR_3);
 FUNC_13(VAR_2, ((void*)0));
 FUNC_20(VAR_2);
 FUNC_2();



}
