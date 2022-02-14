
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_timer {struct snd_hrtimer* private_data; } ;
struct TYPE_2__ {int function; } ;
struct snd_hrtimer {int running; TYPE_1__ hrt; struct snd_timer* timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;
 struct snd_hrtimer* FUNC_2 (int,int ) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_3(struct snd_timer *VAR_5)
{
 struct snd_hrtimer *VAR_6;

 VAR_6 = FUNC_2(sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return -VAR_1;
 FUNC_1(&VAR_6->hrt, VAR_0, VAR_3);
 VAR_6->timer = VAR_5;
 VAR_6->hrt.function = VAR_4;
 FUNC_0(&VAR_6->running, 0);
 VAR_5->private_data = VAR_6;
 return 0;
}
