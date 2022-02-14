
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct emu_rm {int num_gprs; int last_free_gpr; int* allocmap; int num_used; int gpr_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int
FUNC_2(struct emu_rm *VAR_0, int VAR_1)
{
 int VAR_2, VAR_3;
 int VAR_4;

 VAR_4 = VAR_0->num_gprs;

 FUNC_0(&(VAR_0->gpr_lock));
 if (VAR_0->last_free_gpr + VAR_1 <= VAR_0->num_gprs) {
  VAR_4 = VAR_0->last_free_gpr;
  VAR_0->last_free_gpr += VAR_1;
  VAR_0->allocmap[VAR_4] = VAR_1;
  for (VAR_2 = 1; VAR_2 < VAR_1; VAR_2++)
   VAR_0->allocmap[VAR_4 + VAR_2] = -(VAR_1 - VAR_2);
 } else {

  VAR_2 = 0;
  VAR_4 = VAR_0->num_gprs;
  while (VAR_2 < VAR_0->last_free_gpr - VAR_1) {
   if (VAR_0->allocmap[VAR_2] > 0) {
    VAR_2 += VAR_0->allocmap[VAR_2];
   } else {
    VAR_4 = VAR_2;
    for (VAR_3 = 1; VAR_3 < VAR_1; VAR_3++) {
     if (VAR_0->allocmap[VAR_2 + VAR_3] != 0)
      VAR_4 = VAR_0->num_gprs;
    }
    if (VAR_4 == VAR_2)
     break;
   }
  }
  if (VAR_4 + VAR_1 < VAR_0->last_free_gpr) {
   VAR_0->allocmap[VAR_4] = VAR_1;
   for (VAR_2 = 1; VAR_2 < VAR_1; VAR_2++)
    VAR_0->allocmap[VAR_4 + VAR_2] = -(VAR_1 - VAR_2);

  }
 }
 if (VAR_4 == VAR_0->num_gprs)
  VAR_4 = (-1);
 if (VAR_4 >= 0)
  VAR_0->num_used += VAR_1;
 FUNC_1(&(VAR_0->gpr_lock));
 return (VAR_4);
}
