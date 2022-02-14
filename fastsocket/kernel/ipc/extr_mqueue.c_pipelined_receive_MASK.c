
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mqueue_inode_info {int wait_q; } ;
struct ext_wait_queue {int state; int task; int list; int msg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,struct mqueue_inode_info*) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 struct ext_wait_queue* FUNC_5 (struct mqueue_inode_info*,int ) ;

__attribute__((used)) static inline void FUNC_6(struct mqueue_inode_info *VAR_3)
{
 struct ext_wait_queue *VAR_4 = FUNC_5(VAR_3, VAR_0);

 if (!VAR_4) {

  FUNC_3(&VAR_3->wait_q);
  return;
 }
 if (FUNC_1(VAR_4->msg, VAR_3))
  return;
 FUNC_0(&VAR_4->list);
 VAR_4->state = VAR_1;
 FUNC_4(VAR_4->task);
 FUNC_2();
 VAR_4->state = VAR_2;
}
