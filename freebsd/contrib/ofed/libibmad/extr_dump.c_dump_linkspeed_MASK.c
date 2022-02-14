
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*,int,char*,...) ;

__attribute__((used)) static void FUNC_1(char *VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3 = 0;

 if (VAR_2 & 0x1)
  VAR_3 += FUNC_0(VAR_0 + VAR_3, VAR_1 - VAR_3, "2.5 Gbps or ");
 if (VAR_3 < VAR_1 && (VAR_2 & 0x2))
  VAR_3 += FUNC_0(VAR_0 + VAR_3, VAR_1 - VAR_3, "5.0 Gbps or ");
 if (VAR_3 < VAR_1 && (VAR_2 & 0x4))
  VAR_3 += FUNC_0(VAR_0 + VAR_3, VAR_1 - VAR_3, "10.0 Gbps or ");

 if (VAR_3 >= VAR_1)
  return;
 else if (VAR_2 == 0 || (VAR_2 >> 3)) {
  VAR_3 += FUNC_0(VAR_0 + VAR_3, VAR_1 - VAR_3, "undefined (%d)", VAR_2);
  if (VAR_3 >= VAR_1)
   return;
 } else if (VAR_1 > 3) {
  VAR_0[VAR_3 - 4] = '\0';
  VAR_3 -= 4;
 }

 switch (VAR_2) {
 case 1:
 case 3:
 case 5:
 case 7:
  break;
 default:
  if (!(VAR_2 >> 3))
   FUNC_0(VAR_0 + VAR_3, VAR_1 - VAR_3, " (IBA extension)");
  break;
 }
}
