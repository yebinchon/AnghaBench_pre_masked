
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int32_t ;
struct snd_mixer {scalar_t__* realdev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

void
FUNC_0(struct snd_mixer *VAR_2, u_int32_t VAR_3, u_int32_t VAR_4)
{
 if (VAR_2 == ((void*)0) || VAR_3 >= VAR_1 ||
     !(VAR_4 == VAR_0 || VAR_4 < VAR_1))
  return;
 VAR_2->realdev[VAR_3] = VAR_4;
}
