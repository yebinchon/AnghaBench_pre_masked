
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ops; int * ins; } ;
struct ins_operands {TYPE_1__ locked; } ;
struct ins {int name; } ;


 int FUNC_0 (struct ins*,char*,size_t,struct ins_operands*) ;
 int FUNC_1 (int *,char*,size_t,int ) ;
 int FUNC_2 (char*,size_t,char*,int ) ;

__attribute__((used)) static int FUNC_3(struct ins *VAR_0, char *VAR_1, size_t VAR_2,
      struct ins_operands *VAR_3)
{
 int VAR_4;

 if (VAR_3->locked.ins == ((void*)0))
  return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);

 VAR_4 = FUNC_2(VAR_1, VAR_2, "%-6.6s ", VAR_0->name);
 return VAR_4 + FUNC_1(VAR_3->locked.ins, VAR_1 + VAR_4,
     VAR_2 - VAR_4, VAR_3->locked.ops);
}
