
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct snd_mixer {int dummy; } ;
struct ac97_info {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ac97_info*,int) ;
 struct ac97_info* FUNC_1 (struct snd_mixer*) ;

__attribute__((used)) static u_int32_t
FUNC_2(struct snd_mixer *VAR_1, u_int32_t VAR_2)
{
 int VAR_3;
 struct ac97_info *VAR_4 = FUNC_1(VAR_1);

 if (VAR_4 == ((void*)0))
  return -1;
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  if ((VAR_2 & (1 << VAR_3)) != 0)
   break;
 return (FUNC_0(VAR_4, VAR_3) == 0)? 1U << VAR_3 : 0xffffffffU;
}
