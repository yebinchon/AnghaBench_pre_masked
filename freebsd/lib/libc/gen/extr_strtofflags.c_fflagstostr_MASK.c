
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
typedef int u_int ;
struct TYPE_2__ {int flag; char* name; scalar_t__ invert; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;

char *
FUNC_1(u_long VAR_3)
{
 char *VAR_4;
 const char *VAR_5;
 char *VAR_6;
 u_long VAR_7;
 u_int VAR_8;

 if ((VAR_4 = (char *)FUNC_0(VAR_2 * (VAR_0 + 1))) == ((void*)0))
  return (((void*)0));

 VAR_7 = VAR_3;
 VAR_6 = VAR_4;
 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
  if (VAR_7 & VAR_1[VAR_8].flag) {
   if (VAR_6 > VAR_4)
    *VAR_6++ = ',';
   for (VAR_5 = VAR_1[VAR_8].invert ? VAR_1[VAR_8].name :
       VAR_1[VAR_8].name + 2; *VAR_5; *VAR_6++ = *VAR_5++) ;
   VAR_7 &= ~VAR_1[VAR_8].flag;
  }
 }
 *VAR_6 = '\0';
 return (VAR_4);
}
