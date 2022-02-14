
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mps_softc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mps_softc*,int ,char*,int,char*,int,int) ;

__attribute__((used)) static void
FUNC_1(struct mps_softc *VAR_1 , u32 VAR_2)
{
 union loginfo_type {
  u32 loginfo;
  struct {
   u32 subcode:16;
   u32 code:8;
   u32 originator:4;
   u32 bus_type:4;
  } dw;
 };
 union loginfo_type VAR_3;
 char *VAR_4 = ((void*)0);

 VAR_3.loginfo = VAR_2;
 if (VAR_3.dw.bus_type != 3 )
  return;


 if (VAR_2 == 0x31170000)
  return;


 if ((VAR_2 == 30050000 || VAR_2 ==
     0x31140000 || VAR_2 == 0x31130000))
  return;

 switch (VAR_3.dw.originator) {
 case 0:
  VAR_4 = "IOP";
  break;
 case 1:
  VAR_4 = "PL";
  break;
 case 2:
  VAR_4 = "IR";
  break;
}

 FUNC_0(VAR_1, VAR_0, "log_info(0x%08x): originator(%s), "
 "code(0x%02x), sub_code(0x%04x)\n", VAR_2,
 VAR_4, VAR_3.dw.code,
 VAR_3.dw.subcode);
}
