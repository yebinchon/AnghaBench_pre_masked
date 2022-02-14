
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct speedtab {int speed; int uxname; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct speedtab* VAR_2 ;

int
FUNC_0(int VAR_3)
{
 struct speedtab *VAR_4;

 if (VAR_3 <= VAR_0)
  return (VAR_3);

 for (VAR_4 = VAR_2; VAR_4->speed; VAR_4++)
  if (VAR_4->speed == VAR_3)
   return (VAR_4->uxname);

 return (VAR_1);
}
