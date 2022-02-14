
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct views {int lock; int vtree; } ;
struct view {int lock; int node; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (int *,int *) ;
 struct view* FUNC_5 (char*) ;
 int FUNC_6 (struct view*) ;

__attribute__((used)) static struct view*
FUNC_7(struct views* VAR_0, char* VAR_1)
{
 struct view* VAR_2 = FUNC_5(VAR_1);
 if(!VAR_2) {
  FUNC_2("out of memory");
  return ((void*)0);
 }


 FUNC_1(&VAR_0->lock);
 FUNC_1(&VAR_2->lock);
 if(!FUNC_4(&VAR_0->vtree, &VAR_2->node)) {
  FUNC_3("duplicate view: %s", VAR_1);
  FUNC_0(&VAR_2->lock);
  FUNC_6(VAR_2);
  FUNC_0(&VAR_0->lock);
  return ((void*)0);
 }
 FUNC_0(&VAR_0->lock);
 return VAR_2;
}
