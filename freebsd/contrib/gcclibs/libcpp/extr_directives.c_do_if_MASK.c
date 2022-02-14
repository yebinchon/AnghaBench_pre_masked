
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int skipping; } ;
struct TYPE_7__ {int mi_ind_cmacro; TYPE_1__ state; } ;
typedef TYPE_2__ cpp_reader ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int,int ,int ) ;

__attribute__((used)) static void
FUNC_2 (cpp_reader *VAR_1)
{
  int VAR_2 = 1;

  if (! VAR_1->state.skipping)
    VAR_2 = FUNC_0 (VAR_1) == 0;

  FUNC_1 (VAR_1, VAR_2, VAR_0, VAR_1->mi_ind_cmacro);
}
