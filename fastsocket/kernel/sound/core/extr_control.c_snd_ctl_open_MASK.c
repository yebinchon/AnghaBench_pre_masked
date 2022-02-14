
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_ctl_file {int prefer_pcm_subdevice; int prefer_rawmidi_subdevice; int list; int pid; struct snd_card* card; int read_lock; int change_sleep; int events; } ;
struct snd_card {int module; int ctl_files_rwlock; int ctl_files; } ;
struct inode {int dummy; } ;
struct file {struct snd_ctl_file* private_data; } ;
struct TYPE_2__ {int pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (int *) ;
 struct snd_ctl_file* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct inode*,struct file*) ;
 int FUNC_7 (struct snd_card*,struct file*) ;
 int FUNC_8 (struct snd_card*,struct file*) ;
 struct snd_card* FUNC_9 (int ,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_14(struct inode *VAR_6, struct file *VAR_7)
{
 unsigned long VAR_8;
 struct snd_card *VAR_9;
 struct snd_ctl_file *VAR_10;
 int VAR_11;

 VAR_11 = FUNC_6(VAR_6, VAR_7);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_9 = FUNC_9(FUNC_1(VAR_6), VAR_4);
 if (!VAR_9) {
  VAR_11 = -VAR_1;
  goto __error1;
 }
 VAR_11 = FUNC_7(VAR_9, VAR_7);
 if (VAR_11 < 0) {
  VAR_11 = -VAR_1;
  goto __error1;
 }
 if (!FUNC_11(VAR_9->module)) {
  VAR_11 = -VAR_0;
  goto __error2;
 }
 VAR_10 = FUNC_3(sizeof(*VAR_10), VAR_3);
 if (VAR_10 == ((void*)0)) {
  VAR_11 = -VAR_2;
  goto __error;
 }
 FUNC_0(&VAR_10->events);
 FUNC_2(&VAR_10->change_sleep);
 FUNC_10(&VAR_10->read_lock);
 VAR_10->card = VAR_9;
 VAR_10->prefer_pcm_subdevice = -1;
 VAR_10->prefer_rawmidi_subdevice = -1;
 VAR_10->pid = VAR_5->pid;
 VAR_7->private_data = VAR_10;
 FUNC_12(&VAR_9->ctl_files_rwlock, VAR_8);
 FUNC_4(&VAR_10->list, &VAR_9->ctl_files);
 FUNC_13(&VAR_9->ctl_files_rwlock, VAR_8);
 return 0;

      __error:
 FUNC_5(VAR_9->module);
      __error2:
 FUNC_8(VAR_9, VAR_7);
      __error1:
       return VAR_11;
}
