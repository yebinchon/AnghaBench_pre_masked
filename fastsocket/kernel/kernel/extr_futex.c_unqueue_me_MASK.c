
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int plist; } ;
struct futex_q {int key; int pi_state; TYPE_1__ list; int * lock_ptr; } ;
typedef int spinlock_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct futex_q *VAR_0)
{
 spinlock_t *VAR_1;
 int VAR_2 = 0;


retry:
 VAR_1 = VAR_0->lock_ptr;
 FUNC_2();
 if (VAR_1 != ((void*)0)) {
  FUNC_6(VAR_1);
  if (FUNC_8(VAR_1 != VAR_0->lock_ptr)) {
   FUNC_7(VAR_1);
   goto retry;
  }
  FUNC_1(FUNC_5(&VAR_0->list));
  FUNC_4(&VAR_0->list, &VAR_0->list.plist);

  FUNC_0(VAR_0->pi_state);

  FUNC_7(VAR_1);
  VAR_2 = 1;
 }

 FUNC_3(&VAR_0->key);
 return VAR_2;
}
