
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scard_data {int dummy; } ;
struct eapol_test_data {int pcsc_reader; } ;
typedef int imsi ;
typedef int _rand ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (unsigned char*,int,int) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (struct scard_data*) ;
 scalar_t__ FUNC_5 (struct scard_data*,char*,size_t*) ;
 scalar_t__ FUNC_6 (struct scard_data*,unsigned char*,unsigned char*,unsigned char*) ;
 struct scard_data* FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (struct scard_data*,char*) ;
 int VAR_1 ;
 int FUNC_9 (int ,char*) ;

__attribute__((used)) static int FUNC_10(struct eapol_test_data *VAR_2, int VAR_3, char *VAR_4[])
{
 struct scard_data *VAR_5;
 size_t VAR_6;
 char VAR_7[20];
 unsigned char VAR_8[16];
 unsigned char VAR_9[4];
 unsigned char VAR_10[8];
 int VAR_11;
 int VAR_12;
 size_t VAR_13;

 if (VAR_3 < 2 || ((VAR_11 = FUNC_0(VAR_4[1])) <= 0)) {
  FUNC_3("invalid parameters for sim command\n");
  return -1;
 }

 if (VAR_3 <= 2 || FUNC_2(VAR_4[2], "debug") != 0) {

  VAR_1 = 99;
 }

 VAR_5 = FUNC_7(VAR_2->pcsc_reader);
 if (VAR_5 == ((void*)0)) {
  FUNC_3("Failed to open smartcard connection\n");
  return -1;
 }
 if (FUNC_8(VAR_5, VAR_4[0])) {
  FUNC_9(VAR_0, "PIN validation failed");
  FUNC_4(VAR_5);
  return -1;
 }

 VAR_6 = sizeof(VAR_7);
 if (FUNC_5(VAR_5, VAR_7, &VAR_6)) {
  FUNC_4(VAR_5);
  return -1;
 }

 for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++) {
  FUNC_1(VAR_8, VAR_12, sizeof(VAR_8));
  if (FUNC_6(VAR_5, VAR_8, VAR_9, VAR_10))
   break;


  for (VAR_13 = 0; VAR_13 < VAR_6; VAR_13++)
   FUNC_3("%c", VAR_7[VAR_13]);
  FUNC_3(":");
  for (VAR_13 = 0; VAR_13 < 8; VAR_13++)
   FUNC_3("%02X", VAR_10[VAR_13]);
  FUNC_3(":");
  for (VAR_13 = 0; VAR_13 < 4; VAR_13++)
   FUNC_3("%02X", VAR_9[VAR_13]);
  FUNC_3(":");
  for (VAR_13 = 0; VAR_13 < 16; VAR_13++)
   FUNC_3("%02X", VAR_8[VAR_13]);
  FUNC_3("\n");
 }

 FUNC_4(VAR_5);

 return 0;
}
