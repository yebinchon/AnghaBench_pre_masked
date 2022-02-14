
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int u_int ;
typedef int netdissect_options ;


 int FUNC_0 (int *) ;

void
FUNC_1(netdissect_options *VAR_0,
                     uint32_t VAR_1)
{
 static const char *VAR_2[] = {"y", "w", "d", "h", "m", "s"};
 static const u_int VAR_3[] = {31536000, 604800, 86400, 3600, 60, 1};
 const char **VAR_4 = VAR_2;
 const u_int *VAR_5 = VAR_3;

 if (VAR_1 == 0) {
  FUNC_0((VAR_0, "0s"));
  return;
 }
 while (VAR_1 > 0) {
  if (VAR_1 >= *VAR_5) {
   FUNC_0((VAR_0, "%d%s", VAR_1 / *VAR_5, *VAR_4));
   VAR_1 -= (VAR_1 / *VAR_5) * *VAR_5;
  }
  VAR_5++;
  VAR_4++;
 }
}
