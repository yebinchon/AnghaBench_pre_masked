
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_timer_user {scalar_t__ qused; int qchange_sleep; } ;
struct file {struct snd_timer_user* private_data; } ;
typedef int poll_table ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct file*,int *,int *) ;

__attribute__((used)) static unsigned int FUNC_1(struct file *VAR_2, poll_table * VAR_3)
{
        unsigned int VAR_4;
        struct snd_timer_user *VAR_5;

        VAR_5 = VAR_2->private_data;

        FUNC_0(VAR_2, &VAR_5->qchange_sleep, VAR_3);

 VAR_4 = 0;
 if (VAR_5->qused)
  VAR_4 |= VAR_0 | VAR_1;

 return VAR_4;
}
