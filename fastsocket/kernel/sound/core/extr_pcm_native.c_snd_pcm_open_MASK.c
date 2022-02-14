
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int wait_queue_t ;
struct snd_pcm_file {int dummy; } ;
struct snd_pcm {TYPE_1__* card; int open_mutex; int open_wait; } ;
struct file {int f_flags; } ;
struct TYPE_3__ {int module; scalar_t__ shutdown; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int *) ;
 int VAR_7 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (TYPE_1__*,struct file*) ;
 int FUNC_10 (TYPE_1__*,struct file*) ;
 int FUNC_11 (struct file*,struct snd_pcm*,int,struct snd_pcm_file**) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static int FUNC_13(struct file *VAR_8, struct snd_pcm *VAR_9, int VAR_10)
{
 int VAR_11;
 struct snd_pcm_file *VAR_12;
 wait_queue_t VAR_13;

 if (VAR_9 == ((void*)0)) {
  VAR_11 = -VAR_3;
  goto __error1;
 }
 VAR_11 = FUNC_9(VAR_9->card, VAR_8);
 if (VAR_11 < 0)
  goto __error1;
 if (!FUNC_12(VAR_9->card->module)) {
  VAR_11 = -VAR_2;
  goto __error2;
 }
 FUNC_1(&VAR_13, VAR_7);
 FUNC_0(&VAR_9->open_wait, &VAR_13);
 FUNC_3(&VAR_9->open_mutex);
 while (1) {
  VAR_11 = FUNC_11(VAR_8, VAR_9, VAR_10, &VAR_12);
  if (VAR_11 >= 0)
   break;
  if (VAR_11 == -VAR_0) {
   if (VAR_8->f_flags & VAR_5) {
    VAR_11 = -VAR_1;
    break;
   }
  } else
   break;
  FUNC_7(VAR_6);
  FUNC_4(&VAR_9->open_mutex);
  FUNC_6();
  FUNC_3(&VAR_9->open_mutex);
  if (VAR_9->card->shutdown) {
   VAR_11 = -VAR_3;
   break;
  }
  if (FUNC_8(VAR_7)) {
   VAR_11 = -VAR_4;
   break;
  }
 }
 FUNC_5(&VAR_9->open_wait, &VAR_13);
 FUNC_4(&VAR_9->open_mutex);
 if (VAR_11 < 0)
  goto __error;
 return VAR_11;

      __error:
 FUNC_2(VAR_9->card->module);
      __error2:
       FUNC_10(VAR_9->card, VAR_8);
      __error1:
       return VAR_11;
}
