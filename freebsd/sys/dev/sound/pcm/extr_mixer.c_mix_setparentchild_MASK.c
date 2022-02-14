
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct snd_mixer {int* parent; int* child; } ;


 int VAR_0 ;

void
FUNC_0(struct snd_mixer *VAR_1, u_int32_t VAR_2, u_int32_t VAR_3)
{
 u_int32_t VAR_4 = 0;
 int VAR_5;

 if (VAR_1 == ((void*)0) || VAR_2 >= VAR_0)
  return;
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  if (VAR_5 == VAR_2)
   continue;
  if (VAR_3 & (1 << VAR_5)) {
   VAR_4 |= 1 << VAR_5;
   if (VAR_1->parent[VAR_5] < VAR_0)
    VAR_1->child[VAR_1->parent[VAR_5]] &= ~(1 << VAR_5);
   VAR_1->parent[VAR_5] = VAR_2;
   VAR_1->child[VAR_5] = 0;
  }
 }
 VAR_4 &= ~(1 << VAR_2);
 VAR_1->child[VAR_2] = VAR_4;
}
