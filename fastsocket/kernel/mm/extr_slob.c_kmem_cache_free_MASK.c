
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slob_rcu {int size; int head; } ;
struct kmem_cache {int flags; int size; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (void*,int) ;
 int FUNC_2 (int *,int ) ;
 int VAR_2 ;
 int FUNC_3 (void*,int) ;
 int FUNC_4 (int ,void*) ;
 scalar_t__ FUNC_5 (int) ;

void FUNC_6(struct kmem_cache *VAR_3, void *VAR_4)
{
 FUNC_3(VAR_4, VAR_3->flags);
 if (FUNC_5(VAR_3->flags & VAR_0)) {
  struct slob_rcu *VAR_5;
  VAR_5 = VAR_4 + (VAR_3->size - sizeof(struct slob_rcu));
  FUNC_0(&VAR_5->head);
  VAR_5->size = VAR_3->size;
  FUNC_2(&VAR_5->head, VAR_2);
 } else {
  FUNC_1(VAR_4, VAR_3->size);
 }

 FUNC_4(VAR_1, VAR_4);
}
