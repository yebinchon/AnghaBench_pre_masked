
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int password_hash ;
typedef int buf ;


 int * FUNC_0 (char*,int,int ) ;
 scalar_t__ FUNC_1 (int *,int ,unsigned char*) ;
 int FUNC_2 (char*,...) ;
 int VAR_0 ;
 int FUNC_3 (char*) ;

int FUNC_4(int VAR_1, char *VAR_2[])
{
 unsigned char VAR_3[16];
 size_t VAR_4;
 char *VAR_5, VAR_6[64], *VAR_7;

 if (VAR_1 > 1)
  VAR_5 = VAR_2[1];
 else {
  if (FUNC_0(VAR_6, sizeof(VAR_6), VAR_0) == ((void*)0)) {
   FUNC_2("Failed to read password\n");
   return 1;
  }
  VAR_6[sizeof(VAR_6) - 1] = '\0';
  VAR_7 = VAR_6;
  while (*VAR_7 != '\0') {
   if (*VAR_7 == '\r' || *VAR_7 == '\n') {
    *VAR_7 = '\0';
    break;
   }
   VAR_7++;
  }
  VAR_5 = VAR_6;
 }

 if (FUNC_1((u8 *) VAR_5, FUNC_3(VAR_5), VAR_3))
  return -1;
 for (VAR_4 = 0; VAR_4 < sizeof(VAR_3); VAR_4++)
  FUNC_2("%02x", VAR_3[VAR_4]);
 FUNC_2("\n");

 return 0;
}
