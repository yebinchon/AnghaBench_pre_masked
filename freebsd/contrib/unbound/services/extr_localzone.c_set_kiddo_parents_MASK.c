
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct local_zone {scalar_t__ dclass; int node; int lock; struct local_zone* parent; int namelabs; int name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct local_zone* VAR_1, struct local_zone* VAR_2,
 struct local_zone* VAR_3)
{



 struct local_zone* VAR_4 = VAR_1;
 VAR_4 = (struct local_zone*)FUNC_3(&VAR_4->node);
 while(VAR_4!=(struct local_zone*)VAR_0 &&
  VAR_4->dclass == VAR_1->dclass && FUNC_0(VAR_4->name,
  VAR_4->namelabs, VAR_1->name, VAR_1->namelabs)) {





  FUNC_2(&VAR_4->lock);
  if(VAR_4->parent == VAR_2)
   VAR_4->parent = VAR_3;
  FUNC_1(&VAR_4->lock);
  VAR_4 = (struct local_zone*)FUNC_3(&VAR_4->node);
 }
}
