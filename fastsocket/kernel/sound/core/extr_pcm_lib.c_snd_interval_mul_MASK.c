
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_interval {int openmin; int openmax; int integer; void* max; void* min; scalar_t__ empty; } ;


 void* FUNC_0 (void*,void*) ;
 int FUNC_1 (struct snd_interval*) ;

void FUNC_2(const struct snd_interval *VAR_0, const struct snd_interval *VAR_1, struct snd_interval *VAR_2)
{
 if (VAR_0->empty || VAR_1->empty) {
  FUNC_1(VAR_2);
  return;
 }
 VAR_2->empty = 0;
 VAR_2->min = FUNC_0(VAR_0->min, VAR_1->min);
 VAR_2->openmin = (VAR_0->openmin || VAR_1->openmin);
 VAR_2->max = FUNC_0(VAR_0->max, VAR_1->max);
 VAR_2->openmax = (VAR_0->openmax || VAR_1->openmax);
 VAR_2->integer = (VAR_0->integer && VAR_1->integer);
}
