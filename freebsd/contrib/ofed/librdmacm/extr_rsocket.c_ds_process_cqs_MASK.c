
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsocket {int cq_armed; int cq_lock; int cq_wait_lock; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct rsocket*) ;
 int FUNC_2 (struct rsocket*) ;
 int FUNC_3 (struct rsocket*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct rsocket *VAR_1, int VAR_2, int (*VAR_3)(struct rsocket *VAR_4))
{
 int VAR_5 = 0;

 FUNC_4(&VAR_1->cq_lock);
 do {
  FUNC_2(VAR_1);
  if (VAR_3(VAR_1)) {
   VAR_5 = 0;
   break;
  } else if (VAR_2) {
   VAR_5 = FUNC_0(VAR_0);
  } else if (!VAR_1->cq_armed) {
   FUNC_3(VAR_1);
   VAR_1->cq_armed = 1;
  } else {
   FUNC_4(&VAR_1->cq_wait_lock);
   FUNC_5(&VAR_1->cq_lock);

   VAR_5 = FUNC_1(VAR_1);
   FUNC_5(&VAR_1->cq_wait_lock);
   FUNC_4(&VAR_1->cq_lock);
  }
 } while (!VAR_5);

 FUNC_5(&VAR_1->cq_lock);
 return VAR_5;
}
