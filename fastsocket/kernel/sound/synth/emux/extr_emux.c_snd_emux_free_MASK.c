
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_emux {struct snd_emux* name; struct snd_emux* voices; scalar_t__ sflist; int voice_lock; int tlist; scalar_t__ timer_active; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct snd_emux*) ;
 int FUNC_2 (struct snd_emux*) ;
 int FUNC_3 (struct snd_emux*) ;
 int FUNC_4 (struct snd_emux*) ;
 int FUNC_5 (struct snd_emux*) ;
 int FUNC_6 (struct snd_emux*) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

int FUNC_10(struct snd_emux *VAR_1)
{
 unsigned long VAR_2;

 if (! VAR_1)
  return -VAR_0;

 FUNC_8(&VAR_1->voice_lock, VAR_2);
 if (VAR_1->timer_active)
  FUNC_0(&VAR_1->tlist);
 FUNC_9(&VAR_1->voice_lock, VAR_2);




 FUNC_3(VAR_1);



 FUNC_4(VAR_1);

 FUNC_2(VAR_1);

 if (VAR_1->sflist)
  FUNC_7(VAR_1->sflist);

 FUNC_1(VAR_1->voices);
 FUNC_1(VAR_1->name);
 FUNC_1(VAR_1);
 return 0;
}
