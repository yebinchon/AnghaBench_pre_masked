
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_timer {int sticks; struct snd_hrtimer* private_data; } ;
struct snd_hrtimer {int running; int hrt; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_4(struct snd_timer *VAR_2)
{
 struct snd_hrtimer *VAR_3 = VAR_2->private_data;

 FUNC_0(&VAR_3->running, 0);
 FUNC_1(&VAR_3->hrt);
 FUNC_2(&VAR_3->hrt, FUNC_3(VAR_2->sticks * VAR_1),
        VAR_0);
 FUNC_0(&VAR_3->running, 1);
 return 0;
}
