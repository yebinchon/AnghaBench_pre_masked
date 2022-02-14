
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dummy_systimer_pcm {int elapsed; int substream; int lock; } ;


 int FUNC_0 (struct dummy_systimer_pcm*) ;
 int FUNC_1 (struct dummy_systimer_pcm*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(unsigned long VAR_0)
{
 struct dummy_systimer_pcm *VAR_1 = (struct dummy_systimer_pcm *)VAR_0;
 unsigned long VAR_2;
 int VAR_3 = 0;

 FUNC_3(&VAR_1->lock, VAR_2);
 FUNC_1(VAR_1);
 FUNC_0(VAR_1);
 VAR_3 = VAR_1->elapsed;
 VAR_1->elapsed = 0;
 FUNC_4(&VAR_1->lock, VAR_2);
 if (VAR_3)
  FUNC_2(VAR_1->substream);
}
