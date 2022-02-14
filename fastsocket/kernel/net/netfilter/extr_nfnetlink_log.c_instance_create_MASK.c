
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int16_t ;
struct nfulnl_instance {int peer_pid; int hlist; int copy_range; int copy_mode; int nlbufsiz; int flushtimeout; int qthreshold; int group_num; int timer; int use; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct nfulnl_instance* FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int *) ;
 size_t FUNC_5 (int ) ;
 int * VAR_10 ;
 int VAR_11 ;
 int FUNC_6 (struct nfulnl_instance*) ;
 struct nfulnl_instance* FUNC_7 (int,int ) ;
 int VAR_12 ;
 int FUNC_8 (int *,int ,unsigned long) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static struct nfulnl_instance *
FUNC_13(u_int16_t VAR_13, int VAR_14)
{
 struct nfulnl_instance *VAR_15;
 int VAR_16;

 FUNC_11(&VAR_11);
 if (FUNC_2(VAR_13)) {
  VAR_16 = -VAR_1;
  goto out_unlock;
 }

 VAR_15 = FUNC_7(sizeof(*VAR_15), VAR_3);
 if (!VAR_15) {
  VAR_16 = -VAR_2;
  goto out_unlock;
 }

 if (!FUNC_10(VAR_9)) {
  FUNC_6(VAR_15);
  VAR_16 = -VAR_0;
  goto out_unlock;
 }

 FUNC_1(&VAR_15->hlist);
 FUNC_9(&VAR_15->lock);

 FUNC_3(&VAR_15->use, 2);

 FUNC_8(&VAR_15->timer, VAR_12, (unsigned long)VAR_15);

 VAR_15->peer_pid = VAR_14;
 VAR_15->group_num = VAR_13;

 VAR_15->qthreshold = VAR_7;
 VAR_15->flushtimeout = VAR_8;
 VAR_15->nlbufsiz = VAR_6;
 VAR_15->copy_mode = VAR_4;
 VAR_15->copy_range = VAR_5;

 FUNC_4(&VAR_15->hlist,
         &VAR_10[FUNC_5(VAR_13)]);

 FUNC_12(&VAR_11);

 return VAR_15;

out_unlock:
 FUNC_12(&VAR_11);
 return FUNC_0(VAR_16);
}
