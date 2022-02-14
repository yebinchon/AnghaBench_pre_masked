
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cmdnames {unsigned int cnt; TYPE_1__** names; } ;
struct TYPE_2__ {int name; } ;


 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(struct cmdnames *VAR_0)
{
 unsigned int VAR_1, VAR_2;

 if (!VAR_0->cnt)
  return;

 for (VAR_1 = VAR_2 = 1; VAR_1 < VAR_0->cnt; VAR_1++)
  if (FUNC_0(VAR_0->names[VAR_1]->name, VAR_0->names[VAR_1-1]->name))
   VAR_0->names[VAR_2++] = VAR_0->names[VAR_1];

 VAR_0->cnt = VAR_2;
}
