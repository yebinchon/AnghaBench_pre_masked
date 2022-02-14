
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct views {int lock; int vtree; } ;
struct TYPE_2__ {struct view** key; } ;
struct view {char* name; int lock; TYPE_1__ node; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,TYPE_1__*) ;

struct view*
FUNC_4(struct views* VAR_0, const char* VAR_1, int VAR_2)
{
 struct view* VAR_3;
 struct view VAR_4;
 VAR_4.node.key = &VAR_3;
 VAR_4.name = (char *)VAR_1;
 FUNC_0(&VAR_0->lock);
 if(!(VAR_3 = (struct view*)FUNC_3(&VAR_0->vtree, &VAR_4.node))) {
  FUNC_1(&VAR_0->lock);
  return 0;
 }
 if(VAR_2) {
  FUNC_2(&VAR_3->lock);
 } else {
  FUNC_0(&VAR_3->lock);
 }
 FUNC_1(&VAR_0->lock);
 return VAR_3;
}
