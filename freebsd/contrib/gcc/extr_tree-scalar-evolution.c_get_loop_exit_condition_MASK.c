
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tree ;
struct loop {TYPE_1__* single_exit; } ;
typedef TYPE_1__* edge ;
struct TYPE_2__ {int src; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__,int ,int ) ;

tree
FUNC_4 (struct loop *VAR_4)
{
  tree VAR_5 = VAR_0;
  edge VAR_6 = VAR_4->single_exit;


  if (VAR_2 && (VAR_3 & VAR_1))
    FUNC_1 (VAR_2, "(get_loop_exit_condition \n  ");

  if (VAR_6)
    {
      tree VAR_7;

      VAR_7 = FUNC_2 (VAR_6->src);
      if (FUNC_0 (VAR_7))
 VAR_5 = VAR_7;
    }

  if (VAR_2 && (VAR_3 & VAR_1))
    {
      FUNC_3 (VAR_2, VAR_5, 0);
      FUNC_1 (VAR_2, ")\n");
    }

  return VAR_5;
}
