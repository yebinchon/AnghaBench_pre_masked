
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct _s_x {int x; int s; } ;


 int FUNC_0 (char*,size_t,char*,char const*,int ) ;

void
FUNC_1(char *VAR_0, size_t VAR_1, struct _s_x *VAR_2, uint32_t VAR_3)
{
 char const *VAR_4 = "";
 int VAR_5, VAR_6;

 for (VAR_5 = 0; VAR_2[VAR_5].x != 0; VAR_5++) {
  if ((VAR_3 & VAR_2[VAR_5].x) == 0)
   continue;

  VAR_3 &= ~VAR_2[VAR_5].x;
  VAR_6 = FUNC_0(VAR_0, VAR_1, "%s%s", VAR_4, VAR_2[VAR_5].s);
  if (VAR_6 >= VAR_1)
   return;
  VAR_4 = ",";
  VAR_0 += VAR_6;
  VAR_1 -=VAR_6;
 }
}
