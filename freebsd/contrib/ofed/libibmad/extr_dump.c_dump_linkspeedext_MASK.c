
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*,int,char*,...) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static void FUNC_2(char *VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3 = 0;

 if (VAR_2 == 0) {
  FUNC_1(VAR_0, "%d", VAR_2);
  return;
 }

 if (VAR_2 & 0x1)
  VAR_3 += FUNC_0(VAR_0 + VAR_3, VAR_1 - VAR_3, "14.0625 Gbps or ");
 if (VAR_3 < VAR_1 && VAR_2 & 0x2)
  VAR_3 += FUNC_0(VAR_0 + VAR_3, VAR_1 - VAR_3, "25.78125 Gbps or ");
 if (VAR_3 >= VAR_1) {
  if (VAR_1 > 3)
   VAR_0[VAR_3 - 4] = '\0';
  return;
 }

 if (VAR_2 >> 2) {
  VAR_3 += FUNC_0(VAR_0 + VAR_3, VAR_1 - VAR_3, "undefined (%d)", VAR_2);
  return;
 } else if (VAR_1 > 3)
  VAR_0[VAR_3 - 4] = '\0';
}
