
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {size_t curpage; TYPE_1__* page; int * field; } ;
struct TYPE_5__ {size_t smax; } ;
typedef TYPE_2__ FORM ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(FORM *VAR_0)
{
  FUNC_1((FUNC_2("FN_Sorted_First_Field(%p)"), (void *)VAR_0));
  FUNC_4(FUNC_3(VAR_0,
       FUNC_0(VAR_0->field[VAR_0->page[VAR_0->curpage].smax])));
}
