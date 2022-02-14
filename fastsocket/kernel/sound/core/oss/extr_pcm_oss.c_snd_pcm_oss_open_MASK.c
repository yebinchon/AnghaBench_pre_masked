
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int wait_queue_t ;
typedef int task_name ;
struct snd_pcm_oss_setup {int dummy; } ;
struct snd_pcm_oss_file {int dummy; } ;
struct snd_pcm {TYPE_1__* card; int open_mutex; int open_wait; } ;
struct inode {int dummy; } ;
struct file {int f_mode; int f_flags; } ;
typedef int setup ;
struct TYPE_3__ {int module; scalar_t__ shutdown; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int *,int *) ;
 int VAR_12 ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct snd_pcm_oss_setup*,int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_13 ;
 int FUNC_7 (struct inode*,struct file*) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 () ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (TYPE_1__*,struct file*) ;
 int FUNC_13 (TYPE_1__*,struct file*) ;
 struct snd_pcm* FUNC_14 (int ,int ) ;
 int FUNC_15 (struct snd_pcm*,int ,char*,struct snd_pcm_oss_setup*) ;
 int FUNC_16 (struct file*,struct snd_pcm*,struct snd_pcm_oss_file**,int ,struct snd_pcm_oss_setup*) ;
 scalar_t__ FUNC_17 (int ,char*,int) ;
 int FUNC_18 (int ) ;

__attribute__((used)) static int FUNC_19(struct inode *VAR_14, struct file *VAR_15)
{
 int VAR_16;
 char VAR_17[32];
 struct snd_pcm *VAR_18;
 struct snd_pcm_oss_file *VAR_19;
 struct snd_pcm_oss_setup VAR_20[2];
 int VAR_21;
 wait_queue_t VAR_22;

 VAR_16 = FUNC_7(VAR_14, VAR_15);
 if (VAR_16 < 0)
  return VAR_16;

 VAR_18 = FUNC_14(FUNC_1(VAR_14),
     VAR_8);
 if (VAR_18 == ((void*)0)) {
  VAR_16 = -VAR_3;
  goto __error1;
 }
 VAR_16 = FUNC_12(VAR_18->card, VAR_15);
 if (VAR_16 < 0)
  goto __error1;
 if (!FUNC_18(VAR_18->card->module)) {
  VAR_16 = -VAR_2;
  goto __error2;
 }
 if (FUNC_17(VAR_12, VAR_17, sizeof(VAR_17)) < 0) {
  VAR_16 = -VAR_2;
  goto __error;
 }
 FUNC_3(VAR_20, 0, sizeof(VAR_20));
 if (VAR_15->f_mode & VAR_6)
  FUNC_15(VAR_18, VAR_10,
        VAR_17, &VAR_20[0]);
 if (VAR_15->f_mode & VAR_5)
  FUNC_15(VAR_18, VAR_9,
        VAR_17, &VAR_20[1]);

 VAR_21 = !!(VAR_15->f_flags & VAR_7);
 if (!VAR_21)
  VAR_21 = VAR_13;

 FUNC_2(&VAR_22, VAR_12);
 FUNC_0(&VAR_18->open_wait, &VAR_22);
 FUNC_5(&VAR_18->open_mutex);
 while (1) {
  VAR_16 = FUNC_16(VAR_15, VAR_18, &VAR_19,
         FUNC_1(VAR_14), VAR_20);
  if (VAR_16 >= 0)
   break;
  if (VAR_16 == -VAR_0) {
   if (VAR_21) {
    VAR_16 = -VAR_1;
    break;
   }
  } else
   break;
  FUNC_10(VAR_11);
  FUNC_6(&VAR_18->open_mutex);
  FUNC_9();
  FUNC_5(&VAR_18->open_mutex);
  if (VAR_18->card->shutdown) {
   VAR_16 = -VAR_3;
   break;
  }
  if (FUNC_11(VAR_12)) {
   VAR_16 = -VAR_4;
   break;
  }
 }
 FUNC_8(&VAR_18->open_wait, &VAR_22);
 FUNC_6(&VAR_18->open_mutex);
 if (VAR_16 < 0)
  goto __error;
 return VAR_16;

      __error:
      FUNC_4(VAR_18->card->module);
      __error2:
       FUNC_13(VAR_18->card, VAR_15);
      __error1:
 return VAR_16;
}
