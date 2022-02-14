
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct roffnode {scalar_t__ tok; struct roffnode* end; struct roffnode* name; struct roffnode* parent; } ;
struct roff {struct roffnode* last; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct roffnode*) ;

__attribute__((used)) static int
FUNC_1(struct roff *VAR_1)
{
 struct roffnode *VAR_2;
 int VAR_3;

 VAR_2 = VAR_1->last;
 VAR_3 = VAR_2->tok == VAR_0;
 VAR_1->last = VAR_2->parent;
 FUNC_0(VAR_2->name);
 FUNC_0(VAR_2->end);
 FUNC_0(VAR_2);
 return VAR_3;
}
