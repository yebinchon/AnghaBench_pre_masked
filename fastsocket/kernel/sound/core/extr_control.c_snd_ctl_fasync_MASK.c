
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ctl_file {int fasync; } ;
struct file {struct snd_ctl_file* private_data; } ;


 int FUNC_0 (int,struct file*,int,int *) ;

__attribute__((used)) static int FUNC_1(int VAR_0, struct file * VAR_1, int VAR_2)
{
 struct snd_ctl_file *VAR_3;

 VAR_3 = VAR_1->private_data;
 return FUNC_0(VAR_0, VAR_1, VAR_2, &VAR_3->fasync);
}
