
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int64_t ;
struct sshkey {int type; int ecdsa_nid; int serial; int nprincipals; int signature_key; struct sshkey* cert; struct sshkey* extensions; struct sshkey* critical; scalar_t__ valid_before; scalar_t__ valid_after; struct sshkey** principals; struct sshkey* key_id; struct sshkey* ed25519_sk; struct sshkey* ed25519_pk; struct sshkey* ecdsa; struct sshkey* dsa; struct sshkey* rsa; } ;
struct sshbuf {int type; int ecdsa_nid; int serial; int nprincipals; int signature_key; struct sshbuf* cert; struct sshbuf* extensions; struct sshbuf* critical; scalar_t__ valid_before; scalar_t__ valid_after; struct sshbuf** principals; struct sshbuf* key_id; struct sshbuf* ed25519_sk; struct sshbuf* ed25519_pk; struct sshbuf* ecdsa; struct sshbuf* dsa; struct sshbuf* rsa; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (struct sshkey*,int *) ;
 int FUNC_2 (struct sshkey*,struct sshkey*) ;
 int FUNC_3 (struct sshkey*) ;
 struct sshkey* FUNC_4 (struct sshkey*) ;
 struct sshkey* FUNC_5 (struct sshkey*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 () ;
 int FUNC_7 (char*) ;
 int FUNC_8 (struct sshkey*,struct sshkey*,char*,struct sshkey*,struct sshkey*,int *) ;
 struct sshkey* FUNC_9 (int,int) ;
 struct sshkey* FUNC_10 (struct sshkey*) ;
 struct sshkey* FUNC_11 (struct sshkey*) ;
 struct sshkey* FUNC_12 (char*) ;
 int FUNC_13 (struct sshkey*,char*,char*) ;
 struct sshkey* FUNC_14 (struct sshkey*) ;
 struct sshkey* FUNC_15 (struct sshkey*) ;
 struct sshkey* FUNC_16 (struct sshkey*) ;
 int FUNC_17 (struct sshkey*,struct sshkey*,char*) ;
 int FUNC_18 (struct sshkey*) ;
 int FUNC_19 (struct sshkey*) ;
 void* FUNC_20 () ;
 int FUNC_21 (struct sshkey*) ;
 int FUNC_22 (struct sshkey*) ;
 int FUNC_23 (struct sshkey*,struct sshkey*,int *) ;
 int FUNC_24 (struct sshkey*,struct sshkey**) ;
 int FUNC_25 (struct sshkey*,struct sshkey*) ;
 int FUNC_26 (struct sshkey*) ;
 int FUNC_27 (int ,int ,struct sshkey**) ;
 int FUNC_28 (struct sshkey*,int *) ;
 int FUNC_29 (int,int,struct sshkey**) ;
 int FUNC_30 (int ,struct sshkey**) ;
 int FUNC_31 (int ,struct sshkey**,int *) ;
 struct sshkey* FUNC_32 (int) ;
 int FUNC_33 (struct sshkey*,struct sshkey*) ;
 int FUNC_34 (struct sshkey*) ;
 void* FUNC_35 (char*) ;
 int FUNC_36 (char*) ;

void
FUNC_37(void)
{
 struct sshkey *VAR_8, *VAR_9, *VAR_10, *VAR_11, *VAR_12, *VAR_13, *VAR_14;



 struct sshbuf *VAR_15;

 FUNC_7("new invalid");
 VAR_8 = FUNC_32(-42);
 FUNC_1(VAR_8, ((void*)0));
 FUNC_6();

 FUNC_7("new/free KEY_UNSPEC");
 VAR_8 = FUNC_32(VAR_4);
 FUNC_2(VAR_8, ((void*)0));
 FUNC_26(VAR_8);
 FUNC_6();

 FUNC_7("new/free KEY_RSA");
 VAR_8 = FUNC_32(VAR_3);
 FUNC_2(VAR_8, ((void*)0));
 FUNC_2(VAR_8->rsa, ((void*)0));
 FUNC_26(VAR_8);
 FUNC_6();

 FUNC_7("new/free KEY_DSA");
 VAR_8 = FUNC_32(VAR_0);
 FUNC_2(VAR_8, ((void*)0));
 FUNC_2(VAR_8->dsa, ((void*)0));
 FUNC_26(VAR_8);
 FUNC_6();
 FUNC_7("new/free KEY_ED25519");
 VAR_8 = FUNC_32(VAR_2);
 FUNC_2(VAR_8, ((void*)0));

 FUNC_1(VAR_8->ed25519_sk, ((void*)0));
 FUNC_1(VAR_8->ed25519_pk, ((void*)0));
 FUNC_26(VAR_8);
 FUNC_6();

 FUNC_7("generate KEY_RSA too small modulus");
 FUNC_0(FUNC_29(VAR_3, 128, &VAR_8),
     VAR_7);
 FUNC_1(VAR_8, ((void*)0));
 FUNC_6();

 FUNC_7("generate KEY_RSA too large modulus");
 FUNC_0(FUNC_29(VAR_3, 1 << 20, &VAR_8),
     VAR_7);
 FUNC_1(VAR_8, ((void*)0));
 FUNC_6();

 FUNC_7("generate KEY_DSA wrong bits");
 FUNC_0(FUNC_29(VAR_0, 2048, &VAR_8),
     VAR_7);
 FUNC_1(VAR_8, ((void*)0));
 FUNC_26(VAR_8);
 FUNC_6();
 FUNC_7("generate KEY_RSA");
 FUNC_0(FUNC_29(VAR_3, 767, &VAR_12),
     VAR_7);
 FUNC_0(FUNC_29(VAR_3, 1024, &VAR_12), 0);
 FUNC_2(VAR_12, ((void*)0));
 FUNC_2(VAR_12->rsa, ((void*)0));
 FUNC_2(FUNC_15(VAR_12), ((void*)0));
 FUNC_2(FUNC_14(VAR_12), ((void*)0));
 FUNC_2(FUNC_16(VAR_12), ((void*)0));
 FUNC_0(FUNC_3(FUNC_15(VAR_12)), 1024);
 FUNC_6();

 FUNC_7("generate KEY_DSA");
 FUNC_0(FUNC_29(VAR_0, 1024, &VAR_13), 0);
 FUNC_2(VAR_13, ((void*)0));
 FUNC_2(VAR_13->dsa, ((void*)0));
 FUNC_2(FUNC_10(VAR_13), ((void*)0));
 FUNC_2(FUNC_11(VAR_13), ((void*)0));
 FUNC_6();
 FUNC_7("generate KEY_ED25519");
 FUNC_0(FUNC_29(VAR_2, 256, &VAR_14), 0);
 FUNC_2(VAR_14, ((void*)0));
 FUNC_0(VAR_14->type, VAR_2);
 FUNC_2(VAR_14->ed25519_pk, ((void*)0));
 FUNC_2(VAR_14->ed25519_sk, ((void*)0));
 FUNC_6();

 FUNC_7("demote KEY_RSA");
 FUNC_0(FUNC_24(VAR_12, &VAR_8), 0);
 FUNC_2(VAR_8, ((void*)0));
 FUNC_2(VAR_12, VAR_8);
 FUNC_0(VAR_8->type, VAR_3);
 FUNC_2(VAR_8->rsa, ((void*)0));
 FUNC_2(FUNC_15(VAR_8), ((void*)0));
 FUNC_2(FUNC_14(VAR_8), ((void*)0));
 FUNC_1(FUNC_16(VAR_8), ((void*)0));
 FUNC_6();

 FUNC_7("equal KEY_RSA/demoted KEY_RSA");
 FUNC_0(FUNC_25(VAR_12, VAR_8), 1);
 FUNC_26(VAR_8);
 FUNC_6();

 FUNC_7("demote KEY_DSA");
 FUNC_0(FUNC_24(VAR_13, &VAR_8), 0);
 FUNC_2(VAR_8, ((void*)0));
 FUNC_2(VAR_13, VAR_8);
 FUNC_0(VAR_8->type, VAR_0);
 FUNC_2(VAR_8->dsa, ((void*)0));
 FUNC_2(FUNC_10(VAR_8), ((void*)0));
 FUNC_1(FUNC_11(VAR_8), ((void*)0));
 FUNC_6();

 FUNC_7("equal KEY_DSA/demoted KEY_DSA");
 FUNC_0(FUNC_25(VAR_13, VAR_8), 1);
 FUNC_26(VAR_8);
 FUNC_6();
 FUNC_7("demote KEY_ED25519");
 FUNC_0(FUNC_24(VAR_14, &VAR_8), 0);
 FUNC_2(VAR_8, ((void*)0));
 FUNC_2(VAR_14, VAR_8);
 FUNC_0(VAR_8->type, VAR_2);
 FUNC_2(VAR_8->ed25519_pk, ((void*)0));
 FUNC_1(VAR_8->ed25519_sk, ((void*)0));
 FUNC_6();

 FUNC_7("equal KEY_ED25519/demoted KEY_ED25519");
 FUNC_0(FUNC_25(VAR_14, VAR_8), 1);
 FUNC_26(VAR_8);
 FUNC_6();

 FUNC_7("equal mismatched key types");
 FUNC_0(FUNC_25(VAR_13, VAR_12), 0);





 FUNC_0(FUNC_25(VAR_13, VAR_14), 0);
 FUNC_6();

 FUNC_7("equal different keys");
 FUNC_0(FUNC_29(VAR_3, 1024, &VAR_8), 0);
 FUNC_0(FUNC_25(VAR_12, VAR_8), 0);
 FUNC_26(VAR_8);
 FUNC_0(FUNC_29(VAR_0, 1024, &VAR_8), 0);
 FUNC_0(FUNC_25(VAR_13, VAR_8), 0);
 FUNC_26(VAR_8);





 FUNC_0(FUNC_29(VAR_2, 256, &VAR_8), 0);
 FUNC_0(FUNC_25(VAR_14, VAR_8), 0);
 FUNC_26(VAR_8);
 FUNC_6();

 FUNC_26(VAR_12);
 FUNC_26(VAR_13);



 FUNC_26(VAR_14);

 FUNC_7("certify key");
 FUNC_0(FUNC_31(FUNC_36("ed25519_1.pub"),
     &VAR_8, ((void*)0)), 0);
 VAR_9 = FUNC_12("ed25519_2");
 FUNC_0(FUNC_34(VAR_8), 0);
 FUNC_2(VAR_8->cert, ((void*)0));
 VAR_8->cert->type = VAR_5;
 VAR_8->cert->serial = 1234;
 VAR_8->cert->key_id = FUNC_35("estragon");
 FUNC_2(VAR_8->cert->key_id, ((void*)0));
 VAR_8->cert->principals = FUNC_9(4, sizeof(*VAR_8->cert->principals));
 FUNC_2(*VAR_8->cert->principals, ((void*)0));
 VAR_8->cert->principals[0] = FUNC_35("estragon");
 VAR_8->cert->principals[1] = FUNC_35("vladimir");
 VAR_8->cert->principals[2] = FUNC_35("pozzo");
 VAR_8->cert->principals[3] = FUNC_35("lucky");
 FUNC_2(VAR_8->cert->principals[0], ((void*)0));
 FUNC_2(VAR_8->cert->principals[1], ((void*)0));
 FUNC_2(VAR_8->cert->principals[2], ((void*)0));
 FUNC_2(VAR_8->cert->principals[3], ((void*)0));
 VAR_8->cert->nprincipals = 4;
 VAR_8->cert->valid_after = 0;
 VAR_8->cert->valid_before = (u_int64_t)-1;
 FUNC_18(VAR_8->cert->critical);
 VAR_8->cert->critical = FUNC_20();
 FUNC_2(VAR_8->cert->critical, ((void*)0));
 FUNC_18(VAR_8->cert->extensions);
 VAR_8->cert->extensions = FUNC_20();
 FUNC_2(VAR_8->cert->extensions, ((void*)0));
 FUNC_13(VAR_8->cert->critical, "force-command", "/usr/bin/true");
 FUNC_13(VAR_8->cert->critical, "source-address", "127.0.0.1");
 FUNC_13(VAR_8->cert->extensions, "permit-X11-forwarding", ((void*)0));
 FUNC_13(VAR_8->cert->extensions, "permit-agent-forwarding", ((void*)0));
 FUNC_0(FUNC_28(VAR_9, &VAR_8->cert->signature_key), 0);
 FUNC_0(FUNC_23(VAR_8, VAR_9, ((void*)0)), 0);
 VAR_15 = FUNC_20();
 FUNC_2(VAR_15, ((void*)0));
 FUNC_0(FUNC_33(VAR_8, VAR_15), 0);
 FUNC_0(FUNC_27(FUNC_21(VAR_15), FUNC_19(VAR_15), &VAR_10), 0);

 FUNC_26(VAR_8);
 FUNC_26(VAR_9);
 FUNC_26(VAR_10);
 FUNC_22(VAR_15);
 FUNC_6();

 FUNC_7("sign and verify RSA");
 VAR_8 = FUNC_12("rsa_1");
 FUNC_0(FUNC_31(FUNC_36("rsa_2.pub"), &VAR_9,
     ((void*)0)), 0);
 FUNC_17(VAR_8, VAR_9, "ssh-rsa");
 FUNC_26(VAR_8);
 FUNC_26(VAR_9);
 FUNC_6();

 FUNC_7("sign and verify RSA-SHA256");
 VAR_8 = FUNC_12("rsa_1");
 FUNC_0(FUNC_31(FUNC_36("rsa_2.pub"), &VAR_9,
     ((void*)0)), 0);
 FUNC_17(VAR_8, VAR_9, "rsa-sha2-256");
 FUNC_26(VAR_8);
 FUNC_26(VAR_9);
 FUNC_6();

 FUNC_7("sign and verify RSA-SHA512");
 VAR_8 = FUNC_12("rsa_1");
 FUNC_0(FUNC_31(FUNC_36("rsa_2.pub"), &VAR_9,
     ((void*)0)), 0);
 FUNC_17(VAR_8, VAR_9, "rsa-sha2-512");
 FUNC_26(VAR_8);
 FUNC_26(VAR_9);
 FUNC_6();

 FUNC_7("sign and verify DSA");
 VAR_8 = FUNC_12("dsa_1");
 FUNC_0(FUNC_31(FUNC_36("dsa_2.pub"), &VAR_9,
     ((void*)0)), 0);
 FUNC_17(VAR_8, VAR_9, ((void*)0));
 FUNC_26(VAR_8);
 FUNC_26(VAR_9);
 FUNC_6();
 FUNC_7("sign and verify ED25519");
 VAR_8 = FUNC_12("ed25519_1");
 FUNC_0(FUNC_31(FUNC_36("ed25519_2.pub"), &VAR_9,
     ((void*)0)), 0);
 FUNC_17(VAR_8, VAR_9, ((void*)0));
 FUNC_26(VAR_8);
 FUNC_26(VAR_9);
 FUNC_6();

 FUNC_7("nested certificate");
 FUNC_0(FUNC_30(FUNC_36("rsa_1"), &VAR_8), 0);
 FUNC_0(FUNC_31(FUNC_36("rsa_1.pub"), &VAR_9,
     ((void*)0)), 0);
 VAR_10 = FUNC_12("rsa_1");
 FUNC_8(VAR_15, VAR_9, "ssh-rsa-cert-v01@openssh.com", VAR_10, VAR_8, ((void*)0));
 FUNC_0(FUNC_27(FUNC_21(VAR_15), FUNC_19(VAR_15), &VAR_11),
     VAR_6);
 FUNC_1(VAR_11, ((void*)0));
 FUNC_26(VAR_8);
 FUNC_26(VAR_9);
 FUNC_26(VAR_10);
 FUNC_18(VAR_15);
 FUNC_6();

}
