
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int devpath; struct TYPE_4__* next; } ;
typedef TYPE_1__ dev_info_t ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static dev_info_t *
FUNC_1(int VAR_1)
{
 dev_info_t *VAR_2;

 if (VAR_1 == 0)
  return (((void*)0));
 for (VAR_2 = VAR_0; VAR_2 != ((void*)0); VAR_2 = VAR_2->next)
  if (FUNC_0(VAR_2->devpath) == VAR_1)
   break;
 return (VAR_2);
}
