
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_interval {int max; scalar_t__ openmax; scalar_t__ openmin; int min; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct snd_interval*) ;
 scalar_t__ FUNC_2 (struct snd_interval*) ;

__attribute__((used)) static int FUNC_3(struct snd_interval *VAR_1)
{
 if (FUNC_0(FUNC_1(VAR_1)))
  return -VAR_0;
 if (FUNC_2(VAR_1))
  return 0;
 VAR_1->max = VAR_1->min;
 VAR_1->openmax = VAR_1->openmin;
 if (VAR_1->openmax)
  VAR_1->max++;
 return 1;
}
