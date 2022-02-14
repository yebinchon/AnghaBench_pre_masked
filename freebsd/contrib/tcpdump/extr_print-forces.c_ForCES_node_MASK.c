
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



__attribute__((used)) static inline const char *FUNC_0(uint32_t VAR_0)
{
 if (VAR_0 <= 0x3FFFFFFF)
  return "FE";
 if (VAR_0 >= 0x40000000 && VAR_0 <= 0x7FFFFFFF)
  return "CE";
 if (VAR_0 >= 0xC0000000 && VAR_0 <= 0xFFFFFFEF)
  return "AllMulticast";
 if (VAR_0 == 0xFFFFFFFD)
  return "AllCEsBroadcast";
 if (VAR_0 == 0xFFFFFFFE)
  return "AllFEsBroadcast";
 if (VAR_0 == 0xFFFFFFFF)
  return "AllBroadcast";

 return "ForCESreserved";

}
