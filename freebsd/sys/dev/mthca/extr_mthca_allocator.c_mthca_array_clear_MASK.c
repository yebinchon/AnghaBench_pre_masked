
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mthca_array {TYPE_1__* page_list; } ;
struct TYPE_2__ {scalar_t__ used; int ** page; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (char*,struct mthca_array*,int,int,scalar_t__) ;

void FUNC_2(struct mthca_array *VAR_2, int VAR_3)
{
 int VAR_4 = (VAR_3 * sizeof (void *)) >> VAR_1;

 if (--VAR_2->page_list[VAR_4].used == 0) {
  FUNC_0((unsigned long) VAR_2->page_list[VAR_4].page);
  VAR_2->page_list[VAR_4].page = ((void*)0);
 } else
  VAR_2->page_list[VAR_4].page[VAR_3 & VAR_0] = ((void*)0);

 if (VAR_2->page_list[VAR_4].used < 0)
  FUNC_1("Array %p index %d page %d with ref count %d < 0\n",
    VAR_2, VAR_3, VAR_4, VAR_2->page_list[VAR_4].used);
}
