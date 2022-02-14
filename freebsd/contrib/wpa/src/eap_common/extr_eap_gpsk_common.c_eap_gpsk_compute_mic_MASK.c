
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const*,size_t,int const*,size_t,int *) ;
 int FUNC_1 (int const*,size_t,int const*,size_t,int *) ;
 int FUNC_2 (int ,char*,...) ;

int FUNC_3(const u8 *VAR_2, size_t VAR_3, int VAR_4,
    int VAR_5, const u8 *VAR_6, size_t VAR_7, u8 *VAR_8)
{
 int VAR_9;

 if (VAR_4 != VAR_0)
  return -1;

 switch (VAR_5) {
 case 129:
  VAR_9 = FUNC_0(VAR_2, VAR_3, VAR_6, VAR_7, VAR_8);
  break;





 default:
  FUNC_2(VAR_1, "EAP-GPSK: Unknown cipher %d:%d used in "
      "MIC computation", VAR_4, VAR_5);
  VAR_9 = -1;
  break;
 }

 if (VAR_9)
  FUNC_2(VAR_1, "EAP-GPSK: Could not compute MIC");

 return VAR_9;
}
