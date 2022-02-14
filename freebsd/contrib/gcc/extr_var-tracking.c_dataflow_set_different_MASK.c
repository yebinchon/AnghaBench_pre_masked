
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int vars; } ;
typedef TYPE_1__ dataflow_set ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static bool
FUNC_1 (dataflow_set *VAR_3, dataflow_set *VAR_4)
{
  VAR_2 = 0;

  FUNC_0 (VAR_3->vars, VAR_0, VAR_4->vars);
  if (!VAR_2)
    {



      FUNC_0 (VAR_4->vars, VAR_1, VAR_3->vars);
    }
  return VAR_2;
}
