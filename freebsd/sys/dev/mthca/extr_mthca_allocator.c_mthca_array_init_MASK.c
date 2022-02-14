
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mthca_array {TYPE_1__* page_list; } ;
struct TYPE_2__ {scalar_t__ used; int * page; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int,int ) ;

int FUNC_1(struct mthca_array *VAR_3, int VAR_4)
{
 int VAR_5 = (VAR_4 * sizeof (void *) + VAR_2 - 1) / VAR_2;
 int VAR_6;

 VAR_3->page_list = FUNC_0(VAR_5 * sizeof *VAR_3->page_list, VAR_1);
 if (!VAR_3->page_list)
  return -VAR_0;

 for (VAR_6 = 0; VAR_6 < VAR_5; ++VAR_6) {
  VAR_3->page_list[VAR_6].page = ((void*)0);
  VAR_3->page_list[VAR_6].used = 0;
 }

 return 0;
}
