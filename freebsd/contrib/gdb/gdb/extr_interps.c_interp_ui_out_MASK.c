
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ui_out {int dummy; } ;
struct interp {struct ui_out* interpreter_out; } ;
struct TYPE_2__ {struct ui_out* interpreter_out; } ;


 TYPE_1__* VAR_0 ;

struct ui_out *
FUNC_0 (struct interp *VAR_1)
{
  if (VAR_1 != ((void*)0))
    return VAR_1->interpreter_out;

  return VAR_0->interpreter_out;
}
