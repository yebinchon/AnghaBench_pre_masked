
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_seq_timer {int lock; } ;


 int VAR_0 ;
 struct snd_seq_timer* FUNC_0 (int,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct snd_seq_timer*) ;
 int FUNC_3 (struct snd_seq_timer*) ;
 int FUNC_4 (int *) ;

struct snd_seq_timer *FUNC_5(void)
{
 struct snd_seq_timer *VAR_1;

 VAR_1 = FUNC_0(sizeof(*VAR_1), VAR_0);
 if (VAR_1 == ((void*)0)) {
  FUNC_1("malloc failed for snd_seq_timer_new() \n");
  return ((void*)0);
 }
 FUNC_4(&VAR_1->lock);


 FUNC_2(VAR_1);


 FUNC_3(VAR_1);

 return VAR_1;
}
