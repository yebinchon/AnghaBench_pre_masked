
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct sadb_msg {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (struct sadb_msg*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*,int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 struct sadb_msg* FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int,struct sockaddr*,int,struct sockaddr*,int,int,char*,int,int ) ;
 scalar_t__ FUNC_9 (int,struct sockaddr*,int,struct sockaddr*,int,int,int ,int,char*,int,int ) ;
 scalar_t__ FUNC_10 (int,struct sockaddr*,int,struct sockaddr*,int,int,char*,int,int ) ;
 scalar_t__ FUNC_11 (int,int) ;
 scalar_t__ FUNC_12 (int) ;
 scalar_t__ FUNC_13 (int,int) ;
 scalar_t__ FUNC_14 (int,struct sockaddr*,int,struct sockaddr*,int,int,char*,int,int ) ;
 scalar_t__ FUNC_15 (int,struct sockaddr*,int,struct sockaddr*,int,int,char*,int,int ) ;
 int FUNC_16 (char*,...) ;
 int FUNC_17 (int) ;
 int FUNC_18 (char*) ;
 int FUNC_19 (int) ;
 int FUNC_20 (char*) ;

int
FUNC_21()
{
 int VAR_1;
 char *VAR_2 = "out ipsec";
 char *VAR_3 = "out ipsec ah/transport//use";
 char *VAR_4, *VAR_5;
 int VAR_6, VAR_7;
 int VAR_8;
 struct sadb_msg *VAR_9;

 FUNC_16("TEST2\n");
 if (FUNC_2() != 0)
  FUNC_0(1, "root privilege required.");

 VAR_4 = FUNC_4(VAR_2, FUNC_18(VAR_2));
 VAR_6 = FUNC_3(VAR_4);
 VAR_5 = FUNC_4(VAR_3, FUNC_18(VAR_3));
 VAR_7 = FUNC_3(VAR_5);

 if ((VAR_1 = FUNC_6()) < 0)
  FUNC_0(1, "ERROR: %s", FUNC_5());

 FUNC_16("spdflush()\n");
 if (FUNC_12(VAR_1) < 0)
  FUNC_0(1, "ERROR: %s", FUNC_5());
 VAR_9 = FUNC_7(VAR_1);
 FUNC_1(VAR_9);

 FUNC_16("spdsetidx()\n");
 if (FUNC_14(VAR_1, (struct sockaddr *)VAR_0, 128,
    (struct sockaddr *)VAR_0, 128,
    255, VAR_4, VAR_6, 0) < 0)
  FUNC_0(1, "ERROR: %s", FUNC_5());
 VAR_9 = FUNC_7(VAR_1);
 FUNC_1(VAR_9);

 FUNC_16("spdupdate()\n");
 if (FUNC_15(VAR_1, (struct sockaddr *)VAR_0, 128,
    (struct sockaddr *)VAR_0, 128,
    255, VAR_5, VAR_7, 0) < 0)
  FUNC_0(1, "ERROR: %s", FUNC_5());
 VAR_9 = FUNC_7(VAR_1);
 FUNC_1(VAR_9);

 FUNC_16("sleep(4)\n");
 FUNC_17(4);

 FUNC_16("spddelete()\n");
 if (FUNC_10(VAR_1, (struct sockaddr *)VAR_0, 128,
    (struct sockaddr *)VAR_0, 128,
    255, VAR_4, VAR_6, 0) < 0)
  FUNC_0(1, "ERROR: %s", FUNC_5());
 VAR_9 = FUNC_7(VAR_1);
 FUNC_1(VAR_9);

 FUNC_16("spdadd()\n");
 if (FUNC_8(VAR_1, (struct sockaddr *)VAR_0, 128,
    (struct sockaddr *)VAR_0, 128,
    255, VAR_5, VAR_7, 0) < 0)
  FUNC_0(1, "ERROR: %s", FUNC_5());
 VAR_8 = FUNC_19(VAR_1);

 FUNC_16("spdget(%u)\n", VAR_8);
 if (FUNC_13(VAR_1, VAR_8) < 0)
  FUNC_0(1, "ERROR: %s", FUNC_5());
 VAR_9 = FUNC_7(VAR_1);
 FUNC_1(VAR_9);

 FUNC_16("sleep(4)\n");
 FUNC_17(4);

 FUNC_16("spddelete2()\n");
 if (FUNC_11(VAR_1, VAR_8) < 0)
  FUNC_0(1, "ERROR: %s", FUNC_5());
 VAR_9 = FUNC_7(VAR_1);
 FUNC_1(VAR_9);

 FUNC_16("spdadd() with lifetime's 10(s)\n");
 if (FUNC_9(VAR_1, (struct sockaddr *)VAR_0, 128,
    (struct sockaddr *)VAR_0, 128,
    255, 0, 10, VAR_5, VAR_7, 0) < 0)
  FUNC_0(1, "ERROR: %s", FUNC_5());
 VAR_8 = FUNC_19(VAR_1);


 FUNC_16("spdupdate()\n");
 if (FUNC_15(VAR_1, (struct sockaddr *)VAR_0, 128,
    (struct sockaddr *)VAR_0, 128,
    255, VAR_5, VAR_7, 0) == 0) {
  FUNC_20("ERROR: expecting failure.");
 }

 return 0;
}
