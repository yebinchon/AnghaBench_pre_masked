
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct disasm_line {int ops; TYPE_2__* ins; int name; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* parse ) (int *) ;} ;


 TYPE_2__* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct disasm_line *VAR_0)
{
 VAR_0->ins = FUNC_0(VAR_0->name);

 if (VAR_0->ins == ((void*)0))
  return;

 if (!VAR_0->ins->ops)
  return;

 if (VAR_0->ins->ops->parse)
  VAR_0->ins->ops->parse(&VAR_0->ops);
}
