
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int ,char*,...) ;

int FUNC_2(const u8 *VAR_3, size_t VAR_4)
{
 const u8 *VAR_5, *VAR_6;
 int VAR_7 = 0;

 VAR_5 = VAR_3;
 VAR_6 = VAR_3 + VAR_4;
 while (VAR_6 - VAR_5 >= 4) {
  u16 VAR_8, VAR_9;

  VAR_8 = FUNC_0(VAR_5);
  VAR_5 += 2;
  VAR_9 = FUNC_0(VAR_5);
  VAR_5 += 2;
  FUNC_1(VAR_2, "DPP: Attribute ID %04x len %u",
      VAR_8, VAR_9);
  if (VAR_9 > VAR_6 - VAR_5) {
   FUNC_1(VAR_1,
       "DPP: Truncated message - not enough room for the attribute - dropped");
   return -1;
  }
  if (VAR_7) {
   FUNC_1(VAR_1,
       "DPP: An unexpected attribute included after the Wrapped Data attribute");
   return -1;
  }
  if (VAR_8 == VAR_0)
   VAR_7 = 1;
  VAR_5 += VAR_9;
 }

 if (VAR_6 != VAR_5) {
  FUNC_1(VAR_1,
      "DPP: Unexpected octets (%d) after the last attribute",
      (int) (VAR_6 - VAR_5));
  return -1;
 }

 return 0;
}
