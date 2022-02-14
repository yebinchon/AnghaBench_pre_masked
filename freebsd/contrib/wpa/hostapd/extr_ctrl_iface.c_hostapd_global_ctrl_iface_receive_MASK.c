
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef int from ;
typedef int buffer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int VAR_3 ;
 int FUNC_1 (char*,char*,int const) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 (char*,unsigned char*,int) ;
 scalar_t__ FUNC_4 (void*,char*) ;
 int FUNC_5 (void*) ;
 scalar_t__ FUNC_6 (void*,char*) ;
 scalar_t__ FUNC_7 (void*,struct sockaddr_storage*,int,char*) ;
 scalar_t__ FUNC_8 (void*,struct sockaddr_storage*,int) ;
 int FUNC_9 (void*,char*) ;
 int FUNC_10 (void*,char*) ;
 int FUNC_11 (void*,char*) ;
 int FUNC_12 (void*,char*,char*,char*,int const,struct sockaddr_storage*,int) ;
 int FUNC_13 (void*,char*,char*,int) ;
 int FUNC_14 (char*) ;
 char* FUNC_15 (int const) ;
 scalar_t__ FUNC_16 (int ,unsigned char*,int) ;
 int FUNC_17 (char*,char*,int) ;
 int FUNC_18 (char*,int const,char*) ;
 char* FUNC_19 (char*,char) ;
 scalar_t__ FUNC_20 (char*,char*) ;
 scalar_t__ FUNC_21 (char*,char*,int) ;
 int FUNC_22 (int,char*,int,int ,struct sockaddr*,int*) ;
 scalar_t__ FUNC_23 (int,char*,int,int ,struct sockaddr*,int) ;
 char* FUNC_24 (int ) ;
 scalar_t__ FUNC_25 () ;
 int FUNC_26 (int ,char*,...) ;
 int FUNC_27 (char*,int,int ,int) ;

__attribute__((used)) static void FUNC_28(int VAR_5, void *VAR_6,
           void *VAR_7)
{
 void *VAR_8 = VAR_6;
 char VAR_9[256], *VAR_10 = VAR_9;
 int VAR_11;
 struct sockaddr_storage VAR_12;
 socklen_t VAR_13 = sizeof(VAR_12);
 char *VAR_14;
 int VAR_15;
 const int VAR_16 = 4096;




 VAR_11 = FUNC_22(VAR_5, VAR_9, sizeof(VAR_9) - 1, 0,
         (struct sockaddr *) &VAR_12, &VAR_13);
 if (VAR_11 < 0) {
  FUNC_26(VAR_2, "recvfrom(ctrl_iface): %s",
      FUNC_24(VAR_3));
  return;
 }
 VAR_10[VAR_11] = '\0';
 FUNC_26(VAR_1, "Global ctrl_iface command: %s", VAR_10);

 VAR_14 = FUNC_15(VAR_16);
 if (VAR_14 == ((void*)0)) {
  if (FUNC_23(VAR_5, "FAIL\n", 5, 0, (struct sockaddr *) &VAR_12,
      VAR_13) < 0) {
   FUNC_26(VAR_1, "CTRL: sendto failed: %s",
       FUNC_24(VAR_3));
  }
  return;
 }

 FUNC_17(VAR_14, "OK\n", 3);
 VAR_15 = 3;
 if (FUNC_21(VAR_10, "IFNAME=", 7) == 0) {
  char *VAR_17 = FUNC_19(VAR_10 + 7, ' ');

  if (VAR_17) {
   *VAR_17++ = '\0';
   VAR_15 = FUNC_12(
    VAR_8, VAR_10 + 7, VAR_17, VAR_14, VAR_16,
    &VAR_12, VAR_13);
   goto send_reply;
  }
 }

 if (FUNC_20(VAR_10, "PING") == 0) {
  FUNC_17(VAR_14, "PONG\n", 5);
  VAR_15 = 5;
 } else if (FUNC_21(VAR_10, "RELOG", 5) == 0) {
  if (FUNC_25() < 0)
   VAR_15 = -1;
 } else if (FUNC_20(VAR_10, "FLUSH") == 0) {
  FUNC_5(VAR_8);
 } else if (FUNC_21(VAR_10, "ADD ", 4) == 0) {
  if (FUNC_4(VAR_8, VAR_10 + 4) < 0)
   VAR_15 = -1;
 } else if (FUNC_21(VAR_10, "REMOVE ", 7) == 0) {
  if (FUNC_6(VAR_8, VAR_10 + 7) < 0)
   VAR_15 = -1;
 } else if (FUNC_20(VAR_10, "ATTACH") == 0) {
  if (FUNC_7(VAR_8, &VAR_12,
           VAR_13, ((void*)0)))
   VAR_15 = -1;
 } else if (FUNC_21(VAR_10, "ATTACH ", 7) == 0) {
  if (FUNC_7(VAR_8, &VAR_12,
           VAR_13, VAR_10 + 7))
   VAR_15 = -1;
 } else if (FUNC_20(VAR_10, "DETACH") == 0) {
  if (FUNC_8(VAR_8, &VAR_12,
   VAR_13))
   VAR_15 = -1;
 } else if (FUNC_21(VAR_10, "DUP_NETWORK ", 12) == 0) {
  if (!FUNC_9(VAR_8,
          VAR_10 + 12))
   VAR_15 = FUNC_18(VAR_14, VAR_16, "OK\n");
  else
   VAR_15 = -1;
 } else if (FUNC_21(VAR_10, "INTERFACES", 10) == 0) {
  VAR_15 = FUNC_13(
   VAR_8, VAR_10 + 10, VAR_14, sizeof(VAR_9));
 } else if (FUNC_20(VAR_10, "TERMINATE") == 0) {
  FUNC_0();
 } else {
  FUNC_26(VAR_1, "Unrecognized global ctrl_iface command "
      "ignored");
  VAR_15 = -1;
 }

send_reply:
 if (VAR_15 < 0) {
  FUNC_17(VAR_14, "FAIL\n", 5);
  VAR_15 = 5;
 }

 if (FUNC_23(VAR_5, VAR_14, VAR_15, 0, (struct sockaddr *) &VAR_12,
     VAR_13) < 0) {
  FUNC_26(VAR_1, "CTRL: sendto failed: %s",
      FUNC_24(VAR_3));
 }
 FUNC_14(VAR_14);
}
