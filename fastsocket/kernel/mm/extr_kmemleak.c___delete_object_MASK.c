
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmemleak_object {int flags; int lock; int use_count; int object_list; int tree_node; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct kmemleak_object*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_9(struct kmemleak_object *VAR_3)
{
 unsigned long VAR_4;

 FUNC_7(&VAR_1, VAR_4);
 FUNC_3(&VAR_2, &VAR_3->tree_node);
 FUNC_2(&VAR_3->object_list);
 FUNC_8(&VAR_1, VAR_4);

 FUNC_0(!(VAR_3->flags & VAR_0));
 FUNC_0(FUNC_1(&VAR_3->use_count) < 2);





 FUNC_5(&VAR_3->lock, VAR_4);
 VAR_3->flags &= ~VAR_0;
 FUNC_6(&VAR_3->lock, VAR_4);
 FUNC_4(VAR_3);
}
