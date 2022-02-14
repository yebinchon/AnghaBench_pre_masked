
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uchar ;
struct fun_macro {size_t* args; scalar_t__ argc; int const* offset; TYPE_5__* node; int buff; } ;
struct TYPE_10__ {int base; } ;
struct TYPE_13__ {TYPE_1__ out; } ;
typedef TYPE_4__ cpp_reader ;
struct TYPE_12__ {TYPE_2__* macro; } ;
struct TYPE_14__ {TYPE_3__ value; } ;
typedef TYPE_5__ cpp_hashnode ;
struct TYPE_11__ {int paramc; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_4__*,unsigned int) ;
 int FUNC_2 (TYPE_4__*,int ) ;

__attribute__((used)) static void
FUNC_3 (cpp_reader *VAR_0, cpp_hashnode *VAR_1, const uchar *VAR_2, struct fun_macro *VAR_3)
{
  unsigned int VAR_4 = VAR_1->value.macro->paramc + 1;

  if (VAR_3->buff)
    FUNC_2 (VAR_0, VAR_3->buff);
  VAR_3->buff = FUNC_1 (VAR_0, VAR_4 * sizeof (size_t));
  VAR_3->args = (size_t *) FUNC_0 (VAR_3->buff);
  VAR_3->node = VAR_1;
  VAR_3->offset = VAR_2 - VAR_0->out.base;
  VAR_3->argc = 0;
}
