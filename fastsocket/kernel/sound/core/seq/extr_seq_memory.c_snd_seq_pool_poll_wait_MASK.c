
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_seq_pool {int output_sleep; } ;
struct file {int dummy; } ;
typedef int poll_table ;


 int FUNC_0 (struct file*,int *,int *) ;
 int FUNC_1 (struct snd_seq_pool*) ;

int FUNC_2(struct snd_seq_pool *VAR_0, struct file *VAR_1,
      poll_table *VAR_2)
{
 FUNC_0(VAR_1, &VAR_0->output_sleep, VAR_2);
 return FUNC_1(VAR_0);
}
