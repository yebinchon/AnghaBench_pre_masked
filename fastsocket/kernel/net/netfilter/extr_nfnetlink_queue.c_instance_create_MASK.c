
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int16_t ;
struct nfqnl_instance {int peer_pid; int copy_range; int hlist; int rcu; int queue_list; int lock; int copy_mode; int queue_maxlen; int queue_num; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct nfqnl_instance* FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int *,int *) ;
 unsigned int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int * VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (struct nfqnl_instance*) ;
 struct nfqnl_instance* FUNC_7 (int,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static struct nfqnl_instance *
FUNC_12(u_int16_t VAR_9, int VAR_10)
{
 struct nfqnl_instance *VAR_11;
 unsigned int VAR_12;
 int VAR_13;

 FUNC_8(&VAR_8);
 if (FUNC_5(VAR_9)) {
  VAR_13 = -VAR_1;
  goto out_unlock;
 }

 VAR_11 = FUNC_7(sizeof(*VAR_11), VAR_3);
 if (!VAR_11) {
  VAR_13 = -VAR_2;
  goto out_unlock;
 }

 VAR_11->queue_num = VAR_9;
 VAR_11->peer_pid = VAR_10;
 VAR_11->queue_maxlen = VAR_5;
 VAR_11->copy_range = 0xfffff;
 VAR_11->copy_mode = VAR_4;
 FUNC_9(&VAR_11->lock);
 FUNC_1(&VAR_11->queue_list);
 FUNC_2(&VAR_11->rcu);

 if (!FUNC_11(VAR_6)) {
  VAR_13 = -VAR_0;
  goto out_free;
 }

 VAR_12 = FUNC_4(VAR_9);
 FUNC_3(&VAR_11->hlist, &VAR_7[VAR_12]);

 FUNC_10(&VAR_8);

 return VAR_11;

out_free:
 FUNC_6(VAR_11);
out_unlock:
 FUNC_10(&VAR_8);
 return FUNC_0(VAR_13);
}
