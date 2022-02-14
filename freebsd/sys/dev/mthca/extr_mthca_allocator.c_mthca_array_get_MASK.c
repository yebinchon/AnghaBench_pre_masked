
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mthca_array {TYPE_1__* page_list; } ;
struct TYPE_2__ {void** page; } ;


 int VAR_0 ;
 int VAR_1 ;

void *FUNC_0(struct mthca_array *VAR_2, int VAR_3)
{
 int VAR_4 = (VAR_3 * sizeof (void *)) >> VAR_1;

 if (VAR_2->page_list[VAR_4].page)
  return VAR_2->page_list[VAR_4].page[VAR_3 & VAR_0];
 else
  return ((void*)0);
}
