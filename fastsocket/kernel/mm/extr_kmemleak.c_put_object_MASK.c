
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmemleak_object {int flags; int rcu; int use_count; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_3(struct kmemleak_object *VAR_2)
{
 if (!FUNC_1(&VAR_2->use_count))
  return;


 FUNC_0(VAR_2->flags & VAR_0);

 FUNC_2(&VAR_2->rcu, VAR_1);
}
