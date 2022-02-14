
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ cc; int* q; scalar_t__ head; } ;
struct TYPE_6__ {int ks_wsel; TYPE_2__ ks_inq; } ;
typedef TYPE_1__ vkbd_state_t ;
typedef TYPE_2__ vkbd_queue_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_1 (int*) ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_4(vkbd_state_t *VAR_2, int VAR_3)
{
 vkbd_queue_t *VAR_4 = &VAR_2->ks_inq;
 int VAR_5;

 FUNC_0(VAR_2, VAR_0);

 if (VAR_4->cc == 0)
  return (-1);


 VAR_4->cc --;
 VAR_5 = VAR_4->q[VAR_4->head ++];
 if (VAR_4->head == FUNC_1(VAR_4->q))
  VAR_4->head = 0;


 FUNC_2(&VAR_2->ks_wsel, VAR_1 + 1);
 FUNC_3(VAR_4);

 return (VAR_5);
}
