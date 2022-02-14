
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int32_t ;
struct snd_mixer {size_t* parent; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;

u_int32_t
FUNC_0(struct snd_mixer *VAR_2, u_int32_t VAR_3)
{
 if (VAR_2 == ((void*)0) || VAR_3 >= VAR_1)
  return VAR_0;
 return VAR_2->parent[VAR_3];
}
