
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_mixer {int devs; int* level; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct snd_mixer *VAR_1, int VAR_2)
{
 if ((VAR_2 < VAR_0) && (VAR_1->devs & (1 << VAR_2)))
  return VAR_1->level[VAR_2];
 else
  return -1;
}
