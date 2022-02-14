
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int*) ;
 char* FUNC_6 (char*) ;
 int FUNC_7 (char*,int*) ;
 int FUNC_8 (char*,char*,char*) ;
 int FUNC_9 (int ,int ,char*,char const**) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_0, uint8_t *VAR_1)
{
 char *VAR_2;
 if (!FUNC_9(FUNC_0(VAR_0),
     FUNC_2(VAR_0), "macaddr", (const char **)&VAR_2)) {

  if(!FUNC_7(VAR_2, VAR_1)) {
   FUNC_8("%s: use %s macaddr from hints\n",
       FUNC_1(VAR_0), VAR_2);
   return (0);
  }
 }
 VAR_1[0] = 0x00;
 VAR_1[1] = 0x18;
 VAR_1[2] = 0xe7;
 VAR_1[3] = 0xd5;
 VAR_1[4] = 0x83;
 VAR_1[5] = 0x90;

 FUNC_3(VAR_0, "use hardcoded 00:18:e7:d5:83:90 macaddr\n");


 return (0);
}
