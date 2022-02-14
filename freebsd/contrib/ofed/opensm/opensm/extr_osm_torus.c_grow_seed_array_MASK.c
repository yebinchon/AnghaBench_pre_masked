
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct torus {int seed_cnt; unsigned int seed_sz; int * seed; } ;


 int FUNC_0 (int *,int ,unsigned int) ;
 void* FUNC_1 (int *,unsigned int) ;

__attribute__((used)) static
bool FUNC_2(struct torus *VAR_0, int VAR_1)
{
 unsigned VAR_2;
 void *VAR_3;

 VAR_2 = VAR_0->seed_cnt + VAR_1;
 if (VAR_2 > VAR_0->seed_sz) {
  VAR_2 += 2 + VAR_2 / 2;
  VAR_3 = FUNC_1(VAR_0->seed, VAR_2 * sizeof(*VAR_0->seed));
  if (!VAR_3)
   return 0;
  VAR_0->seed = VAR_3;
  VAR_0->seed_sz = VAR_2;
  FUNC_0(&VAR_0->seed[VAR_0->seed_cnt], 0,
         (VAR_2 - VAR_0->seed_cnt) * sizeof(*VAR_0->seed));
 }
 return 1;
}
