
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_timer_user {int timeri; } ;
struct file {struct snd_timer_user* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_1)
{
 int VAR_2;
 struct snd_timer_user *VAR_3;

 VAR_3 = VAR_1->private_data;
 if (!VAR_3->timeri)
  return -VAR_0;
 return (VAR_2 = FUNC_0(VAR_3->timeri)) < 0 ? VAR_2 : 0;
}
