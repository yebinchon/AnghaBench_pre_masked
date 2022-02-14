
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int welcome ;
typedef int val ;
typedef int uintmax_t ;
struct proto_conn {int dummy; } ;
typedef int rnd ;
typedef int resp ;
typedef unsigned char int16_t ;
typedef int hash ;
struct TYPE_4__ {unsigned char* adc_name; int adc_timeout; } ;
struct TYPE_3__ {int adh_version; unsigned char adh_trail_offset; unsigned char adh_trail_name; struct proto_conn* adh_remote; int adh_remoteaddr; int adh_password; struct proto_conn* adh_conn; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int * FUNC_1 (int ,int ,int,unsigned char*,int,unsigned char*,int *) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 TYPE_2__* VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_3 (unsigned char*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (int *) ;
 unsigned char VAR_8 ;
 int FUNC_7 (char) ;
 unsigned char FUNC_8 (unsigned char) ;
 scalar_t__ FUNC_9 (unsigned char*,unsigned char*,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int,char*,...) ;
 int FUNC_13 (int ,char*,...) ;
 int FUNC_14 (int ,char*) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (char*,...) ;
 int FUNC_17 (struct proto_conn*) ;
 scalar_t__ FUNC_18 (struct proto_conn*,int ) ;
 scalar_t__ FUNC_19 (struct proto_conn*,int,struct proto_conn**) ;
 int FUNC_20 (struct proto_conn*,...) ;
 int FUNC_21 (struct proto_conn*,...) ;
 scalar_t__ FUNC_22 (struct proto_conn*,int ) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (char*,int,char*,int) ;
 scalar_t__ FUNC_26 (int ) ;
 scalar_t__ FUNC_27 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_28(void)
{
 unsigned char VAR_9[32], VAR_10[32], VAR_11[32];
 struct proto_conn *VAR_12;
 char VAR_13[8];
 int16_t VAR_14;

 VAR_14 = 1;
 if (FUNC_21(VAR_4->adh_conn, &VAR_14, sizeof(VAR_14)) < 0) {
  FUNC_14(VAR_1,
      "Unable to send connection request to parent");
 }
 if (FUNC_20(VAR_4->adh_conn, &VAR_14, sizeof(VAR_14)) < 0) {
  FUNC_14(VAR_1,
      "Unable to receive reply to connection request from parent");
 }
 if (VAR_14 != 0) {
  VAR_8 = VAR_14;
  FUNC_13(VAR_2, "Unable to connect to %s",
      VAR_4->adh_remoteaddr);
  return (-1);
 }
 if (FUNC_19(VAR_4->adh_conn, 1, &VAR_12) < 0) {
  FUNC_14(VAR_1,
      "Unable to receive connection from parent");
 }
 if (FUNC_18(VAR_12, VAR_3->adc_timeout) < 0) {
  FUNC_13(VAR_2, "Unable to connect to %s",
      VAR_4->adh_remoteaddr);
  FUNC_17(VAR_12);
  return (-1);
 }
 FUNC_12(1, "Connected to %s.", VAR_4->adh_remoteaddr);

 if (FUNC_22(VAR_12, VAR_3->adc_timeout) < 0)
  FUNC_13(VAR_2, "Unable to set connection timeout");
 else
  FUNC_12(1, "Timeout set to %d.", VAR_3->adc_timeout);


 (void)FUNC_25(VAR_13, sizeof(VAR_13), "ADIST%02d", VAR_0);
 if (FUNC_21(VAR_12, VAR_13, sizeof(VAR_13)) < 0) {
  FUNC_13(VAR_2,
      "Unable to send welcome message to %s",
      VAR_4->adh_remoteaddr);
  FUNC_17(VAR_12);
  return (-1);
 }
 FUNC_12(1, "Welcome message sent (%s).", VAR_13);
 FUNC_5(VAR_13, sizeof(VAR_13));
 if (FUNC_20(VAR_12, VAR_13, sizeof(VAR_13)) < 0) {
  FUNC_13(VAR_2,
      "Unable to receive welcome message from %s",
      VAR_4->adh_remoteaddr);
  FUNC_17(VAR_12);
  return (-1);
 }
 if (FUNC_27(VAR_13, "ADIST", 5) != 0 || !FUNC_7(VAR_13[5]) ||
     !FUNC_7(VAR_13[6]) || VAR_13[7] != '\0') {
  FUNC_16("Invalid welcome message from %s.",
      VAR_4->adh_remoteaddr);
  FUNC_17(VAR_12);
  return (-1);
 }
 FUNC_12(1, "Welcome message received (%s).", VAR_13);




 VAR_4->adh_version = FUNC_4(VAR_13 + 5);
 if (VAR_4->adh_version > VAR_0) {
  FUNC_16("Invalid version number from %s (%d received, up to %d supported).",
      VAR_4->adh_remoteaddr, VAR_4->adh_version, VAR_0);
  FUNC_17(VAR_12);
  return (-1);
 }

 FUNC_12(1, "Version %d negotiated with %s.", VAR_4->adh_version,
     VAR_4->adh_remoteaddr);

 if (FUNC_21(VAR_12, VAR_3->adc_name, sizeof(VAR_3->adc_name)) == -1) {
  FUNC_13(VAR_2, "Unable to send name to %s",
      VAR_4->adh_remoteaddr);
  FUNC_17(VAR_12);
  return (-1);
 }
 FUNC_12(1, "Name (%s) sent.", VAR_3->adc_name);

 if (FUNC_20(VAR_12, VAR_9, sizeof(VAR_9)) == -1) {
  FUNC_13(VAR_2, "Unable to receive challenge from %s",
      VAR_4->adh_remoteaddr);
  FUNC_17(VAR_12);
  return (-1);
 }
 FUNC_12(1, "Challenge received.");

 if (FUNC_1(FUNC_0(), VAR_4->adh_password,
     (int)FUNC_26(VAR_4->adh_password), VAR_9, (int)sizeof(VAR_9), VAR_10,
     ((void*)0)) == ((void*)0)) {
  FUNC_16("Unable to generate response.");
  FUNC_17(VAR_12);
  return (-1);
 }
 FUNC_12(1, "Response generated.");

 if (FUNC_21(VAR_12, VAR_10, sizeof(VAR_10)) == -1) {
  FUNC_13(VAR_2, "Unable to send response to %s",
      VAR_4->adh_remoteaddr);
  FUNC_17(VAR_12);
  return (-1);
 }
 FUNC_12(1, "Response sent.");

 if (FUNC_3(VAR_9, sizeof(VAR_9)) == -1) {
  FUNC_16("Unable to generate challenge.");
  FUNC_17(VAR_12);
  return (-1);
 }
 FUNC_12(1, "Challenge generated.");

 if (FUNC_21(VAR_12, VAR_9, sizeof(VAR_9)) == -1) {
  FUNC_13(VAR_2, "Unable to send challenge to %s",
      VAR_4->adh_remoteaddr);
  FUNC_17(VAR_12);
  return (-1);
 }
 FUNC_12(1, "Challenge sent.");

 if (FUNC_20(VAR_12, VAR_11, sizeof(VAR_11)) == -1) {
  FUNC_13(VAR_2, "Unable to receive response from %s",
      VAR_4->adh_remoteaddr);
  FUNC_17(VAR_12);
  return (-1);
 }
 FUNC_12(1, "Response received.");

 if (FUNC_1(FUNC_0(), VAR_4->adh_password,
     (int)FUNC_26(VAR_4->adh_password), VAR_9, (int)sizeof(VAR_9), VAR_10,
     ((void*)0)) == ((void*)0)) {
  FUNC_16("Unable to generate hash.");
  FUNC_17(VAR_12);
  return (-1);
 }
 FUNC_12(1, "Hash generated.");

 if (FUNC_9(VAR_11, VAR_10, sizeof(VAR_10)) != 0) {
  FUNC_16("Invalid response from %s (wrong password?).",
      VAR_4->adh_remoteaddr);
  FUNC_17(VAR_12);
  return (-1);
 }
 FUNC_15("Receiver authenticated.");

 if (FUNC_20(VAR_12, &VAR_4->adh_trail_offset,
     sizeof(VAR_4->adh_trail_offset)) == -1) {
  FUNC_13(VAR_2,
      "Unable to receive size of the most recent trail file from %s",
      VAR_4->adh_remoteaddr);
  FUNC_17(VAR_12);
  return (-1);
 }
 VAR_4->adh_trail_offset = FUNC_8(VAR_4->adh_trail_offset);
 if (FUNC_20(VAR_12, &VAR_4->adh_trail_name,
     sizeof(VAR_4->adh_trail_name)) == -1) {
  FUNC_13(VAR_2,
      "Unable to receive name of the most recent trail file from %s",
      VAR_4->adh_remoteaddr);
  FUNC_17(VAR_12);
  return (-1);
 }
 FUNC_12(1, "Trail name (%s) and offset (%ju) received.",
     VAR_4->adh_trail_name, (uintmax_t)VAR_4->adh_trail_offset);

 FUNC_24(&VAR_6);
 FUNC_10(&VAR_7);
 FUNC_2(VAR_4->adh_remote == ((void*)0));
 FUNC_2(VAR_12 != ((void*)0));
 VAR_4->adh_remote = VAR_12;
 FUNC_11(&VAR_7);
 FUNC_23(&VAR_6);
 FUNC_6(&VAR_5);

 return (0);
}
