
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* current; } ;
struct TYPE_5__ {int cols; } ;
typedef TYPE_2__ FORM ;


 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(FORM *VAR_0)
{
  FUNC_1((FUNC_2("HSC_Horizontal_Half_Line_Forward(%p)"), (void *)VAR_0));
  FUNC_3(FUNC_0(VAR_0, (VAR_0->current->cols + 1) / 2));
}
