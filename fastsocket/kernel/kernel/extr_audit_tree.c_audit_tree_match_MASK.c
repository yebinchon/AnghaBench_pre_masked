
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct audit_tree {int dummy; } ;
struct audit_chunk {int count; TYPE_1__* owners; } ;
struct TYPE_2__ {struct audit_tree* owner; } ;



int FUNC_0(struct audit_chunk *VAR_0, struct audit_tree *VAR_1)
{
 int VAR_2;
 for (VAR_2 = 0; VAR_2 < VAR_0->count; VAR_2++)
  if (VAR_0->owners[VAR_2].owner == VAR_1)
   return 1;
 return 0;
}
