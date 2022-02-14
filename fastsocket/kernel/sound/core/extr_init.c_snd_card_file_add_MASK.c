
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_monitor_file {int list; int shutdown_list; int * disconnected_f_op; struct file* file; } ;
struct snd_card {int files_lock; int files_list; scalar_t__ shutdown; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct snd_monitor_file*) ;
 struct snd_monitor_file* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct snd_card *VAR_3, struct file *VAR_4)
{
 struct snd_monitor_file *VAR_5;

 VAR_5 = FUNC_2(sizeof(*VAR_5), VAR_2);
 if (VAR_5 == ((void*)0))
  return -VAR_1;
 VAR_5->file = VAR_4;
 VAR_5->disconnected_f_op = ((void*)0);
 FUNC_0(&VAR_5->shutdown_list);
 FUNC_4(&VAR_3->files_lock);
 if (VAR_3->shutdown) {
  FUNC_5(&VAR_3->files_lock);
  FUNC_1(VAR_5);
  return -VAR_0;
 }
 FUNC_3(&VAR_5->list, &VAR_3->files_list);
 FUNC_5(&VAR_3->files_lock);
 return 0;
}
