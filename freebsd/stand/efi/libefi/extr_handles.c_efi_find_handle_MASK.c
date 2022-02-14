
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct devsw {int dummy; } ;
struct TYPE_2__ {int unit; int * handle; struct devsw* dev; } ;
typedef int * EFI_HANDLE ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;

EFI_HANDLE
FUNC_0(struct devsw *VAR_2, int VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  if (VAR_0[VAR_4].dev != VAR_2)
   continue;
  if (VAR_0[VAR_4].unit != VAR_3)
   continue;
  return (VAR_0[VAR_4].handle);
 }
 return (((void*)0));
}
