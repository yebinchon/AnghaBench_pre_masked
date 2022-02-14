
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_interval {scalar_t__ min; scalar_t__ max; int openmin; int openmax; scalar_t__ integer; scalar_t__ empty; } ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (scalar_t__,scalar_t__,unsigned int*) ;
 int FUNC_1 (struct snd_interval*) ;

void FUNC_2(const struct snd_interval *VAR_1, const struct snd_interval *VAR_2, struct snd_interval *VAR_3)
{
 unsigned int VAR_4;
 if (VAR_1->empty || VAR_2->empty) {
  FUNC_1(VAR_3);
  return;
 }
 VAR_3->empty = 0;
 VAR_3->min = FUNC_0(VAR_1->min, VAR_2->max, &VAR_4);
 VAR_3->openmin = (VAR_4 || VAR_1->openmin || VAR_2->openmax);
 if (VAR_2->min > 0) {
  VAR_3->max = FUNC_0(VAR_1->max, VAR_2->min, &VAR_4);
  if (VAR_4) {
   VAR_3->max++;
   VAR_3->openmax = 1;
  } else
   VAR_3->openmax = (VAR_1->openmax || VAR_2->openmin);
 } else {
  VAR_3->max = VAR_0;
  VAR_3->openmax = 0;
 }
 VAR_3->integer = 0;
}
