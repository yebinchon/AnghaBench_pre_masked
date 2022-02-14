
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pmac {struct pmac_beep* beep; } ;
struct pmac_beep {scalar_t__ running; } ;


 int FUNC_0 (struct snd_pmac*) ;

void FUNC_1(struct snd_pmac *VAR_0)
{
 struct pmac_beep *VAR_1 = VAR_0->beep;
 if (VAR_1 && VAR_1->running) {
  VAR_1->running = 0;
  FUNC_0(VAR_0);
 }
}
