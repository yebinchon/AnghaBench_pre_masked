
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inet6_dev {int lock; scalar_t__ mc_v1_seen; int mc_maxdelay; int mc_qrv; int mc_ifc_timer; scalar_t__ mc_ifc_count; int * mc_tomb; int mc_gq_timer; scalar_t__ mc_gq_running; int mc_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,unsigned long) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct inet6_dev *VAR_4)
{
 FUNC_2(&VAR_4->lock);
 FUNC_0(&VAR_4->mc_lock);
 VAR_4->mc_gq_running = 0;
 FUNC_1(&VAR_4->mc_gq_timer, VAR_2,
   (unsigned long)VAR_4);
 VAR_4->mc_tomb = ((void*)0);
 VAR_4->mc_ifc_count = 0;
 FUNC_1(&VAR_4->mc_ifc_timer, VAR_3,
   (unsigned long)VAR_4);
 VAR_4->mc_qrv = VAR_1;
 VAR_4->mc_maxdelay = VAR_0;
 VAR_4->mc_v1_seen = 0;
 FUNC_3(&VAR_4->lock);
}
