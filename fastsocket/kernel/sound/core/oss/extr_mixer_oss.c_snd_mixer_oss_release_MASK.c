
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_mixer_oss_file {TYPE_1__* card; } ;
struct inode {int dummy; } ;
struct file {scalar_t__ private_data; } ;
struct TYPE_2__ {int module; } ;


 int FUNC_0 (struct snd_mixer_oss_file*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,struct file*) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_0, struct file *VAR_1)
{
 struct snd_mixer_oss_file *VAR_2;

 if (VAR_1->private_data) {
  VAR_2 = (struct snd_mixer_oss_file *) VAR_1->private_data;
  FUNC_1(VAR_2->card->module);
  FUNC_2(VAR_2->card, VAR_1);
  FUNC_0(VAR_2);
 }
 return 0;
}
