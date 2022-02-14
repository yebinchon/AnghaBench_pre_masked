
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct devsw {int dummy; } ;
struct TYPE_2__ {scalar_t__ handle; int unit; int extra; int * alias; struct devsw* dev; } ;
typedef scalar_t__ EFI_HANDLE ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;

int
FUNC_0(EFI_HANDLE VAR_3, struct devsw *VAR_4, int VAR_5,
    uint64_t VAR_6)
{
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  if (VAR_1[VAR_7].handle != VAR_3)
   continue;
  VAR_1[VAR_7].dev = VAR_4;
  VAR_1[VAR_7].unit = VAR_5;
  VAR_1[VAR_7].alias = ((void*)0);
  VAR_1[VAR_7].extra = VAR_6;
  return (0);
 }

 return (VAR_0);
}
