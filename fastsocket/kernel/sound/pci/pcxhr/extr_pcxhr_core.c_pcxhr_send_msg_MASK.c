
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcxhr_rmh {int dummy; } ;
struct pcxhr_mgr {int msg_lock; } ;


 int FUNC_0 (struct pcxhr_mgr*,struct pcxhr_rmh*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

int FUNC_3(struct pcxhr_mgr *VAR_0, struct pcxhr_rmh *VAR_1)
{
 unsigned long VAR_2;
 int VAR_3;
 FUNC_1(&VAR_0->msg_lock, VAR_2);
 VAR_3 = FUNC_0(VAR_0, VAR_1);
 FUNC_2(&VAR_0->msg_lock, VAR_2);
 return VAR_3;
}
