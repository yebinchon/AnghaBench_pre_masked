
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int ,char*,int,char*,char*) ;
 char* FUNC_1 (int) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (char*,char*,char*,...) ;
 int VAR_0 ;

void FUNC_4(int VAR_1)
{
 int VAR_2 = VAR_1 & 0xff;
 char VAR_3[64] = { 0 };
 char VAR_4[64] = { 0 };

 if (VAR_2)
  FUNC_3(VAR_3, " (%s; %s; %s)",
   (VAR_2 & 0x1) ? "BUSY" : "",
   (VAR_2 & 0x2) ? "Redirection Required" : "",
   FUNC_1(VAR_2>>2));


 VAR_2 = VAR_1 >> 8;
 if (VAR_2)
  FUNC_3(VAR_4, " SA(%s)", FUNC_2((uint8_t) VAR_2));

 FUNC_0(VAR_0, "ERROR: Query result returned 0x%04x, %s%s\n",
  VAR_1, VAR_3, VAR_4);
}
