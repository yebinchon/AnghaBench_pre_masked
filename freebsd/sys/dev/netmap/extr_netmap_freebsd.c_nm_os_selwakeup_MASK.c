
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nm_selinfo {scalar_t__ kqueue_users; int ntfytask; int ntfytq; int si; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int *) ;

void
FUNC_2(struct nm_selinfo *VAR_1)
{
 FUNC_0(&VAR_1->si, VAR_0);
 if (VAR_1->kqueue_users > 0) {
  FUNC_1(VAR_1->ntfytq, &VAR_1->ntfytask);
 }
}
