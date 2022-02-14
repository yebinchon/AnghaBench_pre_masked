
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc {int dummy; } ;
struct filedesc_to_leader {int fdl_refcount; struct filedesc_to_leader* fdl_prev; struct filedesc_to_leader* fdl_next; struct proc* fdl_leader; scalar_t__ fdl_wakeup; scalar_t__ fdl_holdcount; } ;
struct filedesc {int dummy; } ;


 int FUNC_0 (struct filedesc*) ;
 int FUNC_1 (struct filedesc*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct filedesc_to_leader* FUNC_2 (int,int ,int ) ;

struct filedesc_to_leader *
FUNC_3(struct filedesc_to_leader *VAR_2, struct filedesc *VAR_3, struct proc *VAR_4)
{
 struct filedesc_to_leader *VAR_5;

 VAR_5 = FUNC_2(sizeof(struct filedesc_to_leader),
     VAR_0, VAR_1);
 VAR_5->fdl_refcount = 1;
 VAR_5->fdl_holdcount = 0;
 VAR_5->fdl_wakeup = 0;
 VAR_5->fdl_leader = VAR_4;
 if (VAR_2 != ((void*)0)) {
  FUNC_0(VAR_3);
  VAR_5->fdl_next = VAR_2->fdl_next;
  VAR_5->fdl_prev = VAR_2;
  VAR_2->fdl_next = VAR_5;
  VAR_5->fdl_next->fdl_prev = VAR_5;
  FUNC_1(VAR_3);
 } else {
  VAR_5->fdl_next = VAR_5;
  VAR_5->fdl_prev = VAR_5;
 }
 return (VAR_5);
}
