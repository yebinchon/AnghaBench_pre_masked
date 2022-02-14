
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* context; } ;
typedef TYPE_4__ cpp_reader ;
struct TYPE_9__ {TYPE_2__* macro; } ;
struct TYPE_11__ {TYPE_3__ value; } ;
typedef TYPE_5__ cpp_hashnode ;
struct TYPE_8__ {scalar_t__ syshdr; } ;
struct TYPE_7__ {TYPE_5__* macro; } ;



int
FUNC_0 (cpp_reader *VAR_0)
{
  cpp_hashnode *VAR_1 = VAR_0->context->macro;

  return VAR_1 && VAR_1->value.macro && VAR_1->value.macro->syshdr;
}
