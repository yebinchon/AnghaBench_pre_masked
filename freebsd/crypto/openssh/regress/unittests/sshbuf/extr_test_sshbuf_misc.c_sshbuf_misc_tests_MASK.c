
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmp ;
typedef char sshbuf ;
typedef char FILE ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,int *) ;
 int FUNC_3 (char*,int *) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (size_t,int ) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 () ;
 int FUNC_13 (char*) ;
 int FUNC_14 (int ,int) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (char*) ;
 int FUNC_17 (char*) ;
 int FUNC_18 (char*) ;
 size_t FUNC_19 (char*,int,int,char*) ;
 int FUNC_20 (char*) ;
 int FUNC_21 (char*) ;
 int FUNC_22 (char*,char*) ;
 char* FUNC_23 (char*) ;
 char* FUNC_24 (char*) ;
 int FUNC_25 (char*,char*) ;
 char* FUNC_26 (char*) ;
 int FUNC_27 (char*) ;
 int FUNC_28 (char*) ;
 int FUNC_29 (char*) ;
 char* FUNC_30 () ;
 int * FUNC_31 (char*) ;
 int FUNC_32 (char*,char*,int) ;
 int FUNC_33 (char*,int) ;
 int FUNC_34 (char*,int) ;
 int FUNC_35 (char*,int,int *) ;
 int FUNC_36 (char*) ;
 char* FUNC_37 (char*,char*) ;
 char* FUNC_38 () ;

void
FUNC_39(void)
{
 struct sshbuf *VAR_0;
 char VAR_1[512], *VAR_2;
 FILE *VAR_3;
 size_t VAR_4;

 FUNC_13("sshbuf_dump");
 VAR_3 = FUNC_38();
 FUNC_3(VAR_3, ((void*)0));
 VAR_0 = FUNC_30();
 FUNC_3(VAR_0, ((void*)0));
 FUNC_0(FUNC_33(VAR_0, 0x12345678), 0);
 FUNC_25(VAR_0, VAR_3);
 FUNC_18(VAR_3);
 FUNC_21(VAR_3);
 VAR_4 = FUNC_19(VAR_1, 1, sizeof(VAR_1), VAR_3);
 FUNC_0(FUNC_17(VAR_3), 0);
 FUNC_1(FUNC_16(VAR_3), 0);
 FUNC_5(VAR_4, 0);
 VAR_1[VAR_4] = '\0';
 FUNC_3(FUNC_37(VAR_1, "12 34 56 78"), ((void*)0));
 FUNC_15(VAR_3);
 FUNC_27(VAR_0);
 FUNC_12();

 FUNC_13("sshbuf_dtob16");
 VAR_0 = FUNC_30();
 FUNC_3(VAR_0, ((void*)0));
 FUNC_0(FUNC_33(VAR_0, 0x12345678), 0);
 VAR_2 = FUNC_23(VAR_0);
 FUNC_3(VAR_2, ((void*)0));
 FUNC_6(VAR_2, "12345678");
 FUNC_20(VAR_2);
 FUNC_27(VAR_0);
 FUNC_12();

 FUNC_13("sshbuf_dtob64 len 1");
 VAR_0 = FUNC_30();
 FUNC_3(VAR_0, ((void*)0));
 FUNC_0(FUNC_34(VAR_0, 0x11), 0);
 VAR_2 = FUNC_24(VAR_0);
 FUNC_3(VAR_2, ((void*)0));
 FUNC_6(VAR_2, "EQ==");
 FUNC_20(VAR_2);
 FUNC_27(VAR_0);
 FUNC_12();

 FUNC_13("sshbuf_dtob64 len 2");
 VAR_0 = FUNC_30();
 FUNC_3(VAR_0, ((void*)0));
 FUNC_0(FUNC_34(VAR_0, 0x11), 0);
 FUNC_0(FUNC_34(VAR_0, 0x22), 0);
 VAR_2 = FUNC_24(VAR_0);
 FUNC_3(VAR_2, ((void*)0));
 FUNC_6(VAR_2, "ESI=");
 FUNC_20(VAR_2);
 FUNC_27(VAR_0);
 FUNC_12();

 FUNC_13("sshbuf_dtob64 len 3");
 VAR_0 = FUNC_30();
 FUNC_3(VAR_0, ((void*)0));
 FUNC_0(FUNC_34(VAR_0, 0x11), 0);
 FUNC_0(FUNC_34(VAR_0, 0x22), 0);
 FUNC_0(FUNC_34(VAR_0, 0x33), 0);
 VAR_2 = FUNC_24(VAR_0);
 FUNC_3(VAR_2, ((void*)0));
 FUNC_6(VAR_2, "ESIz");
 FUNC_20(VAR_2);
 FUNC_27(VAR_0);
 FUNC_12();

 FUNC_13("sshbuf_dtob64 len 8191");
 VAR_0 = FUNC_30();
 FUNC_3(VAR_0, ((void*)0));
 FUNC_0(FUNC_35(VAR_0, 8192, ((void*)0)), 0);
 FUNC_14(FUNC_29(VAR_0), 8192);
 VAR_2 = FUNC_24(VAR_0);
 FUNC_3(VAR_2, ((void*)0));
 FUNC_4(FUNC_36(VAR_2), ((8191 + 2) / 3) * 4);
 FUNC_20(VAR_2);
 FUNC_27(VAR_0);
 FUNC_12();

 FUNC_13("sshbuf_b64tod len 1");
 VAR_0 = FUNC_30();
 FUNC_3(VAR_0, ((void*)0));
 FUNC_0(FUNC_22(VAR_0, "0A=="), 0);
 FUNC_4(FUNC_28(VAR_0), 1);
 FUNC_9(*FUNC_31(VAR_0), 0xd0);
 FUNC_27(VAR_0);
 FUNC_12();

 FUNC_13("sshbuf_b64tod len 2");
 VAR_0 = FUNC_30();
 FUNC_3(VAR_0, ((void*)0));
 FUNC_0(FUNC_22(VAR_0, "0A8="), 0);
 FUNC_4(FUNC_28(VAR_0), 2);
 FUNC_7(FUNC_10(FUNC_31(VAR_0)), 0xd00f);
 FUNC_27(VAR_0);
 FUNC_12();

 FUNC_13("sshbuf_b64tod len 4");
 VAR_0 = FUNC_30();
 FUNC_3(VAR_0, ((void*)0));
 FUNC_0(FUNC_22(VAR_0, "0A/QDw=="), 0);
 FUNC_4(FUNC_28(VAR_0), 4);
 FUNC_8(FUNC_11(FUNC_31(VAR_0)), 0xd00fd00f);
 FUNC_27(VAR_0);
 FUNC_12();

 FUNC_13("sshbuf_dup_string");
 VAR_0 = FUNC_30();
 FUNC_3(VAR_0, ((void*)0));

 VAR_2 = FUNC_26(VAR_0);
 FUNC_3(VAR_2, ((void*)0));
 FUNC_4(FUNC_36(VAR_2), 0);
 FUNC_20(VAR_2);

 FUNC_0(FUNC_32(VAR_0, "quad1", FUNC_36("quad1")), 0);
 VAR_2 = FUNC_26(VAR_0);
 FUNC_3(VAR_2, ((void*)0));
 FUNC_4(FUNC_36(VAR_2), FUNC_36("quad1"));
 FUNC_6(VAR_2, "quad1");
 FUNC_20(VAR_2);

 FUNC_0(FUNC_32(VAR_0, "\0", 1), 0);
 VAR_2 = FUNC_26(VAR_0);
 FUNC_3(VAR_2, ((void*)0));
 FUNC_4(FUNC_36(VAR_2), FUNC_36("quad1"));
 FUNC_6(VAR_2, "quad1");
 FUNC_20(VAR_2);

 FUNC_0(FUNC_32(VAR_0, "quad2", FUNC_36("quad2")), 0);
 VAR_2 = FUNC_26(VAR_0);
 FUNC_2(VAR_2, ((void*)0));
 FUNC_27(VAR_0);
 FUNC_12();
}
