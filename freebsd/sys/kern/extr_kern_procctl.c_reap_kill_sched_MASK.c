
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reap_kill_tracker_head {int dummy; } ;
struct reap_kill_tracker {struct proc* parent; } ;
struct proc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct reap_kill_tracker_head*,struct reap_kill_tracker*,int ) ;
 int VAR_2 ;
 struct reap_kill_tracker* FUNC_1 (int,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct reap_kill_tracker_head *VAR_3, struct proc *VAR_4)
{
 struct reap_kill_tracker *VAR_5;

 VAR_5 = FUNC_1(sizeof(struct reap_kill_tracker), VAR_0, VAR_1);
 VAR_5->parent = VAR_4;
 FUNC_0(VAR_3, VAR_5, VAR_2);
}
