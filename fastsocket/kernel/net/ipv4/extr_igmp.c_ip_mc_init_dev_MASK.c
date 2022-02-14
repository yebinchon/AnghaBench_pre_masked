
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_device {int mc_tomb_lock; int mc_list_lock; int mr_qrv; int mr_ifc_timer; scalar_t__ mc_count; scalar_t__ mr_ifc_count; int mr_gq_timer; scalar_t__ mr_gq_running; int * mc_tomb; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,unsigned long) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct in_device *VAR_3)
{
 FUNC_0();

 VAR_3->mc_tomb = ((void*)0);
 FUNC_1(&VAR_3->mc_list_lock);
 FUNC_3(&VAR_3->mc_tomb_lock);
}
