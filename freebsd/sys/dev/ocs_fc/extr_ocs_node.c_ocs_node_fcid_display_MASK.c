
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;




 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

 int FUNC_2 (char*,int,char*,...) ;

void
FUNC_3(uint32_t VAR_0, char *VAR_1, uint32_t VAR_2)
{
 switch (VAR_0) {
 case 129:
  FUNC_2(VAR_1, VAR_2, "fabric");
  break;
 case 130:
  FUNC_2(VAR_1, VAR_2, "fabctl");
  break;
 case 128:
  FUNC_2(VAR_1, VAR_2, "nserve");
  break;
 default:
  if (FUNC_1(VAR_0)) {
   FUNC_2(VAR_1, VAR_2, "dctl%02x",
    FUNC_0(VAR_0));
  } else {
   FUNC_2(VAR_1, VAR_2, "%06x", VAR_0);
  }
  break;
 }

}
