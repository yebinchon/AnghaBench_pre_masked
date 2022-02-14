
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_mixer_oss_file {int dummy; } ;
struct file {scalar_t__ private_data; } ;


 long FUNC_0 (struct snd_mixer_oss_file*,unsigned int,unsigned long) ;

__attribute__((used)) static long FUNC_1(struct file *VAR_0, unsigned int VAR_1, unsigned long VAR_2)
{
 return FUNC_0((struct snd_mixer_oss_file *) VAR_0->private_data, VAR_1, VAR_2);
}
