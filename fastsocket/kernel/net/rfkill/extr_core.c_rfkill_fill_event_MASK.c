
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rfkill_event {int op; int hard; int soft; int type; int idx; } ;
struct rfkill {int state; int lock; int type; int idx; } ;
typedef enum rfkill_operation { ____Placeholder_rfkill_operation } rfkill_operation ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct rfkill_event *VAR_3, struct rfkill *VAR_4,
         enum rfkill_operation VAR_5)
{
 unsigned long VAR_6;

 VAR_3->idx = VAR_4->idx;
 VAR_3->type = VAR_4->type;
 VAR_3->op = VAR_5;

 FUNC_0(&VAR_4->lock, VAR_6);
 VAR_3->hard = !!(VAR_4->state & VAR_0);
 VAR_3->soft = !!(VAR_4->state & (VAR_1 |
     VAR_2));
 FUNC_1(&VAR_4->lock, VAR_6);
}
