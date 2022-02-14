
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int32_t ;
struct snd_mixer {size_t* child; } ;


 size_t VAR_0 ;

u_int32_t
FUNC_0(struct snd_mixer *VAR_1, u_int32_t VAR_2)
{
 if (VAR_1 == ((void*)0) || VAR_2 >= VAR_0)
  return 0;
 return VAR_1->child[VAR_2];
}
