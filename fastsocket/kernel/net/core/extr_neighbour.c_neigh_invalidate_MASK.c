
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct neighbour {scalar_t__ nud_state; int arp_queue; int lock; TYPE_1__* ops; int updated; int tbl; } ;
struct TYPE_2__ {int (* error_report ) (struct neighbour*,struct sk_buff*) ;} ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,struct neighbour*) ;
 scalar_t__ VAR_0 ;
 struct sk_buff* FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct neighbour*,struct sk_buff*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct neighbour *VAR_3)
{
 struct sk_buff *VAR_4;

 FUNC_0(VAR_3->tbl, VAR_2);
 FUNC_1("neigh %p is failed.\n", VAR_3);
 VAR_3->updated = VAR_1;






 while (VAR_3->nud_state == VAR_0 &&
        (VAR_4 = FUNC_2(&VAR_3->arp_queue)) != ((void*)0)) {
  FUNC_6(&VAR_3->lock);
  VAR_3->ops->error_report(VAR_3, VAR_4);
  FUNC_5(&VAR_3->lock);
 }
 FUNC_3(&VAR_3->arp_queue);
}
