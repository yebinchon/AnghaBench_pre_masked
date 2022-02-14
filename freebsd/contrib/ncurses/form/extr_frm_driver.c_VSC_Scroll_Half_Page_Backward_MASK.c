
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* current; } ;
struct TYPE_5__ {int rows; } ;
typedef TYPE_2__ FORM ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(FORM *VAR_0)
{
  FUNC_0((FUNC_1("VSC_Scroll_Half_Page_Backward(%p)"), (void *)VAR_0));
  FUNC_3(FUNC_2(VAR_0, -((VAR_0->current->rows + 1) / 2)));
}
