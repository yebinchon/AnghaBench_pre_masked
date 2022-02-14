
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ section; scalar_t__ sub_section; struct TYPE_4__* next; } ;
typedef TYPE_1__ literal_pool ;


 TYPE_1__* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static literal_pool *
FUNC_0 (void)
{
  literal_pool * VAR_3;

  for (VAR_3 = VAR_0; VAR_3 != ((void*)0); VAR_3 = VAR_3->next)
    {
      if (VAR_3->section == VAR_1
   && VAR_3->sub_section == VAR_2)
 break;
    }

  return VAR_3;
}
