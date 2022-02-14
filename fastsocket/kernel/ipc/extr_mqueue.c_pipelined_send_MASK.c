
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msg_msg {int dummy; } ;
struct mqueue_inode_info {int dummy; } ;
struct ext_wait_queue {int state; int task; int list; struct msg_msg* msg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;

__attribute__((used)) static inline void FUNC_3(struct mqueue_inode_info *VAR_2,
      struct msg_msg *VAR_3,
      struct ext_wait_queue *VAR_4)
{
 VAR_4->msg = VAR_3;
 FUNC_0(&VAR_4->list);
 VAR_4->state = VAR_0;
 FUNC_2(VAR_4->task);
 FUNC_1();
 VAR_4->state = VAR_1;
}
