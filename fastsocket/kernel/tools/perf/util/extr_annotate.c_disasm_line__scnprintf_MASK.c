
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int raw; } ;
struct disasm_line {TYPE_1__ ops; int ins; int name; } ;


 int FUNC_0 (int ,char*,size_t,TYPE_1__*) ;
 int FUNC_1 (char*,size_t,char*,int ,int ) ;

int FUNC_2(struct disasm_line *VAR_0, char *VAR_1, size_t VAR_2, bool VAR_3)
{
 if (VAR_3 || !VAR_0->ins)
  return FUNC_1(VAR_1, VAR_2, "%-6.6s %s", VAR_0->name, VAR_0->ops.raw);

 return FUNC_0(VAR_0->ins, VAR_1, VAR_2, &VAR_0->ops);
}
