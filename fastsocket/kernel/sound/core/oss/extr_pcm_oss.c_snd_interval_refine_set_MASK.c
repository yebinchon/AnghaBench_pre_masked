
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_interval {unsigned int min; unsigned int max; int integer; scalar_t__ openmax; scalar_t__ openmin; scalar_t__ empty; } ;


 int FUNC_0 (struct snd_interval*,struct snd_interval*) ;

__attribute__((used)) static int FUNC_1(struct snd_interval *VAR_0, unsigned int VAR_1)
{
 struct snd_interval VAR_2;
 VAR_2.empty = 0;
 VAR_2.min = VAR_2.max = VAR_1;
 VAR_2.openmin = VAR_2.openmax = 0;
 VAR_2.integer = 1;
 return FUNC_0(VAR_0, &VAR_2);
}
