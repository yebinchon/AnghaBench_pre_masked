
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int src_loc; } ;
typedef TYPE_1__ cpp_token ;
struct TYPE_8__ {TYPE_1__* cur_token; TYPE_3__* cur_run; } ;
typedef TYPE_2__ cpp_reader ;
struct TYPE_9__ {TYPE_1__* base; TYPE_1__* limit; } ;


 TYPE_3__* FUNC_0 (TYPE_3__*) ;

cpp_token *
FUNC_1 (cpp_reader *VAR_0)
{
  cpp_token *VAR_1, *VAR_2;

  VAR_1 = VAR_0->cur_token - 1;
  if (VAR_0->cur_token == VAR_0->cur_run->limit)
    {
      VAR_0->cur_run = FUNC_0 (VAR_0->cur_run);
      VAR_0->cur_token = VAR_0->cur_run->base;
    }

  VAR_2 = VAR_0->cur_token++;
  VAR_2->src_loc = VAR_1->src_loc;
  return VAR_2;
}
