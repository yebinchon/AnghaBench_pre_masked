
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_interval {scalar_t__ min; int openmin; scalar_t__ max; int openmax; int integer; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct snd_interval*) ;
 int FUNC_2 (struct snd_interval*) ;
 int FUNC_3 (struct snd_interval*) ;

int FUNC_4(struct snd_interval *VAR_1, const struct snd_interval *VAR_2)
{
 int VAR_3 = 0;
 if (FUNC_0(FUNC_2(VAR_1)))
  return -VAR_0;
 if (VAR_1->min < VAR_2->min) {
  VAR_1->min = VAR_2->min;
  VAR_1->openmin = VAR_2->openmin;
  VAR_3 = 1;
 } else if (VAR_1->min == VAR_2->min && !VAR_1->openmin && VAR_2->openmin) {
  VAR_1->openmin = 1;
  VAR_3 = 1;
 }
 if (VAR_1->max > VAR_2->max) {
  VAR_1->max = VAR_2->max;
  VAR_1->openmax = VAR_2->openmax;
  VAR_3 = 1;
 } else if (VAR_1->max == VAR_2->max && !VAR_1->openmax && VAR_2->openmax) {
  VAR_1->openmax = 1;
  VAR_3 = 1;
 }
 if (!VAR_1->integer && VAR_2->integer) {
  VAR_1->integer = 1;
  VAR_3 = 1;
 }
 if (VAR_1->integer) {
  if (VAR_1->openmin) {
   VAR_1->min++;
   VAR_1->openmin = 0;
  }
  if (VAR_1->openmax) {
   VAR_1->max--;
   VAR_1->openmax = 0;
  }
 } else if (!VAR_1->openmin && !VAR_1->openmax && VAR_1->min == VAR_1->max)
  VAR_1->integer = 1;
 if (FUNC_1(VAR_1)) {
  FUNC_3(VAR_1);
  return -VAR_0;
 }
 return VAR_3;
}
