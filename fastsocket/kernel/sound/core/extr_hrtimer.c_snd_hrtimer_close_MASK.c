
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_timer {struct snd_hrtimer* private_data; } ;
struct snd_hrtimer {int hrt; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct snd_hrtimer*) ;

__attribute__((used)) static int FUNC_2(struct snd_timer *VAR_0)
{
 struct snd_hrtimer *VAR_1 = VAR_0->private_data;

 if (VAR_1) {
  FUNC_0(&VAR_1->hrt);
  FUNC_1(VAR_1);
  VAR_0->private_data = ((void*)0);
 }
 return 0;
}
