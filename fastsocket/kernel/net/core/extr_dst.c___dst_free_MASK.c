
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dst_entry {struct dst_entry* next; } ;
struct TYPE_2__ {scalar_t__ timer_inc; int lock; int timer_expires; struct dst_entry* list; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dst_entry*) ;
 int FUNC_1 (int *) ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct dst_entry * VAR_4)
{
 FUNC_3(&VAR_2.lock);
 FUNC_0(VAR_4);
 VAR_4->next = VAR_2.list;
 VAR_2.list = VAR_4;
 if (VAR_2.timer_inc > VAR_0) {
  VAR_2.timer_inc = VAR_0;
  VAR_2.timer_expires = VAR_1;
  FUNC_1(&VAR_3);
  FUNC_2(&VAR_3, VAR_2.timer_expires);
 }
 FUNC_4(&VAR_2.lock);
}
