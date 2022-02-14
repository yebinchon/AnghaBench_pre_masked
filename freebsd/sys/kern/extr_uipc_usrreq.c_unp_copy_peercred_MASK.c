
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unpcb {int unp_flags; int unp_peercred; } ;
struct thread {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct thread*,int *) ;
 int FUNC_1 (int *,int *,int) ;

void
FUNC_2(struct thread *VAR_2, struct unpcb *VAR_3,
    struct unpcb *VAR_4, struct unpcb *VAR_5)
{
 FUNC_0(VAR_2, &VAR_3->unp_peercred);
 VAR_3->unp_flags |= VAR_0;

 FUNC_1(&VAR_4->unp_peercred, &VAR_5->unp_peercred,
     sizeof(VAR_4->unp_peercred));
 VAR_4->unp_flags |= VAR_0;
 if (VAR_5->unp_flags & VAR_1)
  VAR_3->unp_flags |= VAR_1;
}
