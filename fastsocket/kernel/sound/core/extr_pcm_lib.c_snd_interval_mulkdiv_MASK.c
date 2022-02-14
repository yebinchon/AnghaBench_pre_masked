
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_interval {scalar_t__ min; scalar_t__ max; int openmin; int openmax; scalar_t__ integer; scalar_t__ empty; } ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (scalar_t__,unsigned int,scalar_t__,unsigned int*) ;
 int FUNC_1 (struct snd_interval*) ;

void FUNC_2(const struct snd_interval *VAR_1, unsigned int VAR_2,
        const struct snd_interval *VAR_3, struct snd_interval *VAR_4)
{
 unsigned int VAR_5;
 if (VAR_1->empty || VAR_3->empty) {
  FUNC_1(VAR_4);
  return;
 }
 VAR_4->empty = 0;
 VAR_4->min = FUNC_0(VAR_1->min, VAR_2, VAR_3->max, &VAR_5);
 VAR_4->openmin = (VAR_5 || VAR_1->openmin || VAR_3->openmax);
 if (VAR_3->min > 0) {
  VAR_4->max = FUNC_0(VAR_1->max, VAR_2, VAR_3->min, &VAR_5);
  if (VAR_5) {
   VAR_4->max++;
   VAR_4->openmax = 1;
  } else
   VAR_4->openmax = (VAR_1->openmax || VAR_3->openmin);
 } else {
  VAR_4->max = VAR_0;
  VAR_4->openmax = 0;
 }
 VAR_4->integer = 0;
}
