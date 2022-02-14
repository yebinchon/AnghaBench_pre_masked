
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_mixer {int dummy; } ;
struct ac97_info {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct ac97_info*,unsigned int,unsigned int,unsigned int) ;
 struct ac97_info* FUNC_1 (struct snd_mixer*) ;

__attribute__((used)) static int
FUNC_2(struct snd_mixer *VAR_1, unsigned VAR_2, unsigned VAR_3, unsigned VAR_4)
{
 struct ac97_info *VAR_5 = FUNC_1(VAR_1);

 if (VAR_5 == ((void*)0) || VAR_2 >= VAR_0)
  return -1;
 return FUNC_0(VAR_5, VAR_2, VAR_3, VAR_4);
}
