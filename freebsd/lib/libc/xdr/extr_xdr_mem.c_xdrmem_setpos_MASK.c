
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
typedef int bool_t ;
struct TYPE_3__ {char* x_base; char* x_private; int x_handy; } ;
typedef TYPE_1__ XDR ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static bool_t
FUNC_0(XDR *VAR_2, u_int VAR_3)
{
 char *VAR_4 = VAR_2->x_base + VAR_3;
 char *VAR_5 = (char *)VAR_2->x_private + VAR_2->x_handy;

 if (VAR_4 > VAR_5)
  return (VAR_0);
 VAR_2->x_private = VAR_4;
 VAR_2->x_handy = (u_int)(VAR_5 - VAR_4);
 return (VAR_1);
}
