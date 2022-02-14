
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mqueue_inode_info {int lock; } ;
struct ext_wait_queue {scalar_t__ state; int list; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 long FUNC_2 (long) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct mqueue_inode_info*,int,struct ext_wait_queue*) ;

__attribute__((used)) static int FUNC_8(struct mqueue_inode_info *VAR_6, int VAR_7,
   long VAR_8, struct ext_wait_queue *VAR_9)
{
 int VAR_10;
 signed long VAR_11;

 FUNC_7(VAR_6, VAR_7, VAR_9);

 for (;;) {
  FUNC_3(VAR_4);

  FUNC_6(&VAR_6->lock);
  VAR_11 = FUNC_2(VAR_8);

  while (VAR_9->state == VAR_2)
   FUNC_0();

  if (VAR_9->state == VAR_3) {
   VAR_10 = 0;
   goto out;
  }
  FUNC_5(&VAR_6->lock);
  if (VAR_9->state == VAR_3) {
   VAR_10 = 0;
   goto out_unlock;
  }
  if (FUNC_4(VAR_5)) {
   VAR_10 = -VAR_0;
   break;
  }
  if (VAR_11 == 0) {
   VAR_10 = -VAR_1;
   break;
  }
 }
 FUNC_1(&VAR_9->list);
out_unlock:
 FUNC_6(&VAR_6->lock);
out:
 return VAR_10;
}
