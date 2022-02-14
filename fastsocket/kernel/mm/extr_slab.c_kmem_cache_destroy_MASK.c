
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmem_cache {int flags; int next; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct kmem_cache*) ;
 int FUNC_2 (struct kmem_cache*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (struct kmem_cache*,char*) ;
 scalar_t__ FUNC_12 (int) ;

void FUNC_13(struct kmem_cache *VAR_3)
{
 FUNC_0(!VAR_3 || FUNC_4());


 FUNC_3();
 FUNC_7(&VAR_2);



 FUNC_6(&VAR_3->next);
 if (FUNC_1(VAR_3)) {
  FUNC_11(VAR_3, "Can't free all objects");
  FUNC_5(&VAR_3->next, &VAR_1);
  FUNC_8(&VAR_2);
  FUNC_9();
  return;
 }

 if (FUNC_12(VAR_3->flags & VAR_0))
  FUNC_10();

 FUNC_2(VAR_3);
 FUNC_8(&VAR_2);
 FUNC_9();
}
