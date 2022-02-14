
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_timer_user {int ticks; int queue_size; int * queue; int tread_sem; int qchange_sleep; int qlock; } ;
struct snd_timer_read {int dummy; } ;
struct inode {int dummy; } ;
struct file {struct snd_timer_user* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct snd_timer_user*) ;
 int * FUNC_2 (int,int ) ;
 struct snd_timer_user* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct inode*,struct file*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_2, struct file *VAR_3)
{
 struct snd_timer_user *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_5(VAR_2, VAR_3);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_4 = FUNC_3(sizeof(*VAR_4), VAR_1);
 if (VAR_4 == ((void*)0))
  return -VAR_0;
 FUNC_6(&VAR_4->qlock);
 FUNC_0(&VAR_4->qchange_sleep);
 FUNC_4(&VAR_4->tread_sem);
 VAR_4->ticks = 1;
 VAR_4->queue_size = 128;
 VAR_4->queue = FUNC_2(VAR_4->queue_size * sizeof(struct snd_timer_read),
       VAR_1);
 if (VAR_4->queue == ((void*)0)) {
  FUNC_1(VAR_4);
  return -VAR_0;
 }
 VAR_3->private_data = VAR_4;
 return 0;
}
