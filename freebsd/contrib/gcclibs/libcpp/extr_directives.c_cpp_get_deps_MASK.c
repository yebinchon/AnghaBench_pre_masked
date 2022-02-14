
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct deps {int dummy; } ;
struct TYPE_3__ {struct deps* deps; } ;
typedef TYPE_1__ cpp_reader ;


 struct deps* FUNC_0 () ;

struct deps *
FUNC_1 (cpp_reader *VAR_0)
{
  if (!VAR_0->deps)
    VAR_0->deps = FUNC_0 ();
  return VAR_0->deps;
}
