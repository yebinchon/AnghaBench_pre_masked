
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_segctor_wait_request {int err; int wq; int done; scalar_t__ seq; } ;
struct nilfs_sc_info {int sc_wait_request; int sc_wait_daemon; int sc_state_lock; scalar_t__ sc_seq_request; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int VAR_2 ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct nilfs_sc_info *VAR_3)
{
 struct nilfs_segctor_wait_request VAR_4;
 int VAR_5 = 0;

 FUNC_9(&VAR_3->sc_state_lock);
 FUNC_4(&VAR_4.wq);
 VAR_4.err = 0;
 FUNC_2(&VAR_4.done, 0);
 VAR_4.seq = ++VAR_3->sc_seq_request;
 FUNC_10(&VAR_3->sc_state_lock);

 FUNC_5(&VAR_4.wq, VAR_2);
 FUNC_0(&VAR_3->sc_wait_request, &VAR_4.wq);
 FUNC_7(VAR_1);
 FUNC_11(&VAR_3->sc_wait_daemon);

 for (;;) {
  if (FUNC_1(&VAR_4.done)) {
   VAR_5 = VAR_4.err;
   break;
  }
  if (!FUNC_8(VAR_2)) {
   FUNC_6();
   continue;
  }
  VAR_5 = -VAR_0;
  break;
 }
 FUNC_3(&VAR_3->sc_wait_request, &VAR_4.wq);
 return VAR_5;
}
