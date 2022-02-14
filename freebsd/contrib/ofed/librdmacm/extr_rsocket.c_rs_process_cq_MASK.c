
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rsocket {int cq_armed; int cq_lock; int cq_wait_lock; TYPE_1__* cm_id; } ;
struct TYPE_2__ {int recv_cq; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct rsocket*) ;
 int FUNC_5 (struct rsocket*) ;
 int FUNC_6 (struct rsocket*) ;

__attribute__((used)) static int FUNC_7(struct rsocket *VAR_1, int VAR_2, int (*VAR_3)(struct rsocket *VAR_4))
{
 int VAR_5;

 FUNC_1(&VAR_1->cq_lock);
 do {
  FUNC_6(VAR_1);
  VAR_5 = FUNC_5(VAR_1);
  if (VAR_3(VAR_1)) {
   VAR_5 = 0;
   break;
  } else if (VAR_5) {
   break;
  } else if (VAR_2) {
   VAR_5 = FUNC_0(VAR_0);
  } else if (!VAR_1->cq_armed) {
   FUNC_3(VAR_1->cm_id->recv_cq, 0);
   VAR_1->cq_armed = 1;
  } else {
   FUNC_6(VAR_1);
   FUNC_1(&VAR_1->cq_wait_lock);
   FUNC_2(&VAR_1->cq_lock);

   VAR_5 = FUNC_4(VAR_1);
   FUNC_2(&VAR_1->cq_wait_lock);
   FUNC_1(&VAR_1->cq_lock);
  }
 } while (!VAR_5);

 FUNC_6(VAR_1);
 FUNC_2(&VAR_1->cq_lock);
 return VAR_5;
}
