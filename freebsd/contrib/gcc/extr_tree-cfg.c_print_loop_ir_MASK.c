
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* basic_block ;
struct TYPE_3__ {scalar_t__ loop_father; } ;
typedef int FILE ;


 TYPE_1__* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,scalar_t__,int ) ;

void
FUNC_2 (FILE *VAR_1)
{
  basic_block VAR_2;

  VAR_2 = FUNC_0 (VAR_0);
  if (VAR_2 && VAR_2->loop_father)
    FUNC_1 (VAR_1, VAR_2->loop_father, 0);
}
