
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct view* key; } ;
struct view {int name; int lock; TYPE_1__ node; } ;
typedef int rbnode_type ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (struct view*) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static struct view*
FUNC_5(char* VAR_0)
{
 struct view* VAR_1 = (struct view*)FUNC_0(1, sizeof(*VAR_1));
 if(!VAR_1)
  return ((void*)0);
 VAR_1->node.key = VAR_1;
 if(!(VAR_1->name = FUNC_4(VAR_0))) {
  FUNC_1(VAR_1);
  return ((void*)0);
 }
 FUNC_3(&VAR_1->lock);
 FUNC_2(&VAR_1->lock, &VAR_1->name, sizeof(*VAR_1)-sizeof(rbnode_type));
 return VAR_1;
}
