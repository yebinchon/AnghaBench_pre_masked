
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct disasm_line {int ops; TYPE_2__* ins; struct disasm_line* name; struct disasm_line* line; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* free ) (int *) ;} ;


 int FUNC_0 (struct disasm_line*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct disasm_line *VAR_0)
{
 FUNC_0(VAR_0->line);
 FUNC_0(VAR_0->name);
 if (VAR_0->ins && VAR_0->ins->ops->free)
  VAR_0->ins->ops->free(&VAR_0->ops);
 else
  FUNC_1(&VAR_0->ops);
 FUNC_0(VAR_0);
}
