
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct entry {int dummy; } ;
struct devsw {int dummy; } ;
struct TYPE_5__ {int unit; struct devsw* dev; int * alias; void* handle; } ;
typedef void* EFI_HANDLE ;


 TYPE_1__* VAR_0 ;
 TYPE_1__* FUNC_0 (size_t) ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (TYPE_1__*,size_t) ;

int
FUNC_2(struct devsw *VAR_2, EFI_HANDLE *VAR_3,
    EFI_HANDLE *VAR_4, int VAR_5)
{
 size_t VAR_6;
 int VAR_7, VAR_8;

 VAR_7 = VAR_1;
 VAR_1 += VAR_5;
 VAR_6 = VAR_1 * sizeof(struct entry);
 VAR_0 = (VAR_0 == ((void*)0)) ? FUNC_0(VAR_6) : FUNC_1(VAR_0, VAR_6);
 for (VAR_8 = 0; VAR_7 < VAR_1; VAR_7++, VAR_8++) {
  VAR_0[VAR_7].handle = VAR_3[VAR_8];
  if (VAR_4 != ((void*)0))
   VAR_0[VAR_7].alias = VAR_4[VAR_8];
  else
   VAR_0[VAR_7].alias = ((void*)0);
  VAR_0[VAR_7].dev = VAR_2;
  VAR_0[VAR_7].unit = VAR_8;
 }
 return (0);
}
