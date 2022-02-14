
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;

int
FUNC_5(const char *VAR_2, u_long *VAR_3) {
 u_long VAR_4, VAR_5;
 int VAR_6, VAR_7, VAR_8;

 VAR_4 = 0;
 VAR_5 = 0;
 VAR_7 = 0;
 VAR_8 = 0;
 while ((VAR_6 = *VAR_2++) != '\0') {
  if (!FUNC_0(VAR_6) || !FUNC_3(VAR_6))
   goto einval;
  if (FUNC_1(VAR_6)) {
   VAR_5 *= 10;
   VAR_5 += (VAR_6 - '0');
   VAR_7++;
   continue;
  }
  if (VAR_7 == 0)
   goto einval;
  if (FUNC_2(VAR_6))
   VAR_6 = FUNC_4(VAR_6);
  switch (VAR_6) {
  case 'W': VAR_5 *= 7;
  case 'D': VAR_5 *= 24;
  case 'H': VAR_5 *= 60;
  case 'M': VAR_5 *= 60;
  case 'S': break;
  default: goto einval;
  }
  VAR_4 += VAR_5;
  VAR_5 = 0;
  VAR_7 = 0;
  VAR_8 = 1;
 }
 if (VAR_7 > 0) {
  if (VAR_8)
   goto einval;
  else
   VAR_4 += VAR_5;
 } else if (!VAR_8)
  goto einval;
 *VAR_3 = VAR_4;
 return (0);

 einval:
 VAR_1 = VAR_0;
 return (-1);
}
