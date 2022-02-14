
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int printf_render ;
typedef int printf_arginfo_function ;
struct TYPE_2__ {int * arginfo; int * render; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;

int
FUNC_0(int VAR_2, printf_render *VAR_3, printf_arginfo_function *VAR_4)
{

 if (VAR_2 > 255 || VAR_2 < 0)
  return (-1);
 VAR_1[VAR_2].render = VAR_3;
 VAR_1[VAR_2].arginfo = VAR_4;
 VAR_0 = 1;
 return (0);
}
