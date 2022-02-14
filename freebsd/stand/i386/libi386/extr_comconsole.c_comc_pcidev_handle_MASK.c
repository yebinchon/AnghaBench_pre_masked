
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int,int ,int*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,int) ;
 int VAR_8 ;
 int FUNC_3 (char*,int ,char*,int ,int ) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int
FUNC_7(uint32_t VAR_9)
{




 char VAR_10[64];
 uint32_t VAR_11;

 if (FUNC_1(VAR_9 & 0xffff,
     (VAR_9 & 0xff0000) >> 16, VAR_0, &VAR_11) == -1) {
  FUNC_4("Cannot read bar at 0x%x\n", VAR_9);
  return (VAR_1);
 }






 if (VAR_11 == 0xffffffff) {
  FUNC_4("Cannot find specified pcidev\n");
  return (VAR_1);
 }
 if (!FUNC_0(VAR_11)) {
  FUNC_4("Memory bar at 0x%x\n", VAR_9);
  return (VAR_1);
 }
        VAR_11 &= VAR_4;

 FUNC_5(VAR_10, "%d", VAR_11);
 FUNC_6("comconsole_port");
 FUNC_3("comconsole_port", VAR_3, VAR_10,
     VAR_7, VAR_8);

 FUNC_2(VAR_5, VAR_11);
 VAR_6 = VAR_9;

 return (VAR_2);

}
