
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ratden {unsigned int den; unsigned int num_max; unsigned int num_min; unsigned int num_step; } ;
struct snd_interval {unsigned int min; int empty; int openmin; unsigned int max; int openmax; scalar_t__ integer; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 unsigned int FUNC_1 (unsigned int,unsigned int) ;
 unsigned int FUNC_2 (unsigned int,unsigned int) ;
 int FUNC_3 (struct snd_interval*,struct snd_interval*) ;
 scalar_t__ FUNC_4 (struct snd_interval*) ;

__attribute__((used)) static int FUNC_5(struct snd_interval *VAR_1,
          unsigned int VAR_2, struct snd_ratden *VAR_3,
          unsigned int *VAR_4, unsigned int *VAR_5)
{
 unsigned int VAR_6, VAR_7, VAR_8;
 unsigned int VAR_9;
 struct snd_interval VAR_10;
 int VAR_11;

 VAR_6 = VAR_8 = VAR_7 = 0;
 for (VAR_9 = 0; VAR_9 < VAR_2; ++VAR_9) {
  unsigned int VAR_12;
  unsigned int VAR_13 = VAR_3[VAR_9].den;
  unsigned int VAR_14 = VAR_1->min;
  int VAR_15;
  VAR_12 = FUNC_2(VAR_14, VAR_13);
  if (VAR_12 > VAR_3[VAR_9].num_max)
   continue;
  if (VAR_12 < VAR_3[VAR_9].num_min)
   VAR_12 = VAR_3[VAR_9].num_max;
  else {
   unsigned int VAR_16;
   VAR_16 = (VAR_12 - VAR_3[VAR_9].num_min) % VAR_3[VAR_9].num_step;
   if (VAR_16 != 0)
    VAR_12 += VAR_3[VAR_9].num_step - VAR_16;
  }
  VAR_15 = VAR_12 - VAR_14 * VAR_13;
  if (VAR_6 == 0 ||
      VAR_15 * VAR_8 < VAR_7 * VAR_13) {
   VAR_7 = VAR_15;
   VAR_8 = VAR_13;
   VAR_6 = VAR_12;
  }
 }
 if (VAR_8 == 0) {
  VAR_1->empty = 1;
  return -VAR_0;
 }
 VAR_10.min = FUNC_0(VAR_6, VAR_8);
 VAR_10.openmin = !!(VAR_6 % VAR_8);

 VAR_6 = VAR_8 = VAR_7 = 0;
 for (VAR_9 = 0; VAR_9 < VAR_2; ++VAR_9) {
  unsigned int VAR_17;
  unsigned int VAR_18 = VAR_3[VAR_9].den;
  unsigned int VAR_19 = VAR_1->max;
  int VAR_20;
  VAR_17 = FUNC_2(VAR_19, VAR_18);
  if (VAR_17 < VAR_3[VAR_9].num_min)
   continue;
  if (VAR_17 > VAR_3[VAR_9].num_max)
   VAR_17 = VAR_3[VAR_9].num_max;
  else {
   unsigned int VAR_21;
   VAR_21 = (VAR_17 - VAR_3[VAR_9].num_min) % VAR_3[VAR_9].num_step;
   if (VAR_21 != 0)
    VAR_17 -= VAR_21;
  }
  VAR_20 = VAR_19 * VAR_18 - VAR_17;
  if (VAR_6 == 0 ||
      VAR_20 * VAR_8 < VAR_7 * VAR_18) {
   VAR_7 = VAR_20;
   VAR_8 = VAR_18;
   VAR_6 = VAR_17;
  }
 }
 if (VAR_8 == 0) {
  VAR_1->empty = 1;
  return -VAR_0;
 }
 VAR_10.max = FUNC_1(VAR_6, VAR_8);
 VAR_10.openmax = !!(VAR_6 % VAR_8);
 VAR_10.integer = 0;
 VAR_11 = FUNC_3(VAR_1, &VAR_10);
 if (VAR_11 < 0)
  return VAR_11;

 if (FUNC_4(VAR_1)) {
  if (VAR_4)
   *VAR_4 = VAR_6;
  if (VAR_5)
   *VAR_5 = VAR_8;
 }
 return VAR_11;
}
