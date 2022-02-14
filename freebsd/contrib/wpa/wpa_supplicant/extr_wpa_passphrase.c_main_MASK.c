
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int buf ;


 int * FUNC_0 (char*,int,int ) ;
 scalar_t__ FUNC_1 (int *,size_t) ;
 size_t FUNC_2 (char*) ;
 int FUNC_3 (char*,int *,size_t,int,unsigned char*,int) ;
 int FUNC_4 (char*,...) ;
 int VAR_0 ;

int FUNC_5(int VAR_1, char *VAR_2[])
{
 unsigned char VAR_3[32];
 int VAR_4;
 char *VAR_5, *VAR_6, VAR_7[64], *VAR_8;
 size_t VAR_9;

 if (VAR_1 < 2) {
  FUNC_4("usage: wpa_passphrase <ssid> [passphrase]\n"
   "\nIf passphrase is left out, it will be read from "
   "stdin\n");
  return 1;
 }

 VAR_5 = VAR_2[1];

 if (VAR_1 > 2) {
  VAR_6 = VAR_2[2];
 } else {
  FUNC_4("# reading passphrase from stdin\n");
  if (FUNC_0(VAR_7, sizeof(VAR_7), VAR_0) == ((void*)0)) {
   FUNC_4("Failed to read passphrase\n");
   return 1;
  }
  VAR_7[sizeof(VAR_7) - 1] = '\0';
  VAR_8 = VAR_7;
  while (*VAR_8 != '\0') {
   if (*VAR_8 == '\r' || *VAR_8 == '\n') {
    *VAR_8 = '\0';
    break;
   }
   VAR_8++;
  }
  VAR_6 = VAR_7;
 }

 VAR_9 = FUNC_2(VAR_6);
 if (VAR_9 < 8 || VAR_9 > 63) {
  FUNC_4("Passphrase must be 8..63 characters\n");
  return 1;
 }
 if (FUNC_1((u8 *) VAR_6, VAR_9)) {
  FUNC_4("Invalid passphrase character\n");
  return 1;
 }

 FUNC_3(VAR_6, (u8 *) VAR_5, FUNC_2(VAR_5), 4096, VAR_3, 32);

 FUNC_4("network={\n");
 FUNC_4("\tssid=\"%s\"\n", VAR_5);
 FUNC_4("\t#psk=\"%s\"\n", VAR_6);
 FUNC_4("\tpsk=");
 for (VAR_4 = 0; VAR_4 < 32; VAR_4++)
  FUNC_4("%02x", VAR_3[VAR_4]);
 FUNC_4("\n");
 FUNC_4("}\n");

 return 0;
}
