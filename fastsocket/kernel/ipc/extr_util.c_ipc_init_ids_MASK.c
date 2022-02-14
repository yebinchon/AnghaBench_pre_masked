
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipc_ids {int seq_max; int ipcs_idr; scalar_t__ seq; scalar_t__ in_use; int rw_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct ipc_ids *VAR_3)
{
 FUNC_1(&VAR_3->rw_mutex);

 VAR_3->in_use = 0;
 VAR_3->seq = 0;
 {
  int VAR_4 = VAR_0/VAR_1;
  if (VAR_4 > VAR_2)
   VAR_3->seq_max = VAR_2;
   else
    VAR_3->seq_max = VAR_4;
 }

 FUNC_0(&VAR_3->ipcs_idr);
}
