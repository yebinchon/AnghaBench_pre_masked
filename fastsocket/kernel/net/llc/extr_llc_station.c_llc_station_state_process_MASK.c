
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_3__ {int lock; int list; } ;
struct TYPE_4__ {TYPE_1__ ev_q; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,struct sk_buff*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct sk_buff *VAR_1)
{
 FUNC_2(&VAR_0.ev_q.lock);
 FUNC_1(&VAR_0.ev_q.list, VAR_1);
 FUNC_0();
 FUNC_3(&VAR_0.ev_q.lock);
}
