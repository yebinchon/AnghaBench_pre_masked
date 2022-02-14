
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct torus {unsigned int x_sz; unsigned int y_sz; unsigned int z_sz; unsigned int max_changes; TYPE_1__* osm; int *** sw; } ;
struct TYPE_2__ {int log; } ;


 int FUNC_0 (int *,int ,char*,...) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct torus*) ;
 scalar_t__ FUNC_3 (int ,int ) ;

__attribute__((used)) static
void FUNC_4(struct torus *VAR_2, struct torus *VAR_3)
{
 unsigned VAR_4 = 0;
 unsigned VAR_5, VAR_6, VAR_7;
 unsigned VAR_8 = VAR_2->x_sz;
 unsigned VAR_9 = VAR_2->y_sz;
 unsigned VAR_10 = VAR_2->z_sz;
 unsigned VAR_11 = VAR_2->max_changes;

 if (FUNC_1(&VAR_2->osm->log, VAR_1))
  FUNC_2(VAR_2);

 if (!VAR_3)
  return;

 if (VAR_8 != VAR_3->x_sz) {
  VAR_4++;
  FUNC_0(&VAR_2->osm->log, VAR_0,
   "Torus x radix was %d now %d\n",
   VAR_3->x_sz, VAR_2->x_sz);
  if (VAR_8 > VAR_3->x_sz)
   VAR_8 = VAR_3->x_sz;
 }
 if (VAR_9 != VAR_3->y_sz) {
  VAR_4++;
  FUNC_0(&VAR_2->osm->log, VAR_0,
   "Torus y radix was %d now %d\n",
   VAR_3->y_sz, VAR_2->y_sz);
  if (VAR_9 > VAR_3->y_sz)
   VAR_9 = VAR_3->y_sz;
 }
 if (VAR_10 != VAR_3->z_sz) {
  VAR_4++;
  FUNC_0(&VAR_2->osm->log, VAR_0,
   "Torus z radix was %d now %d\n",
   VAR_3->z_sz, VAR_2->z_sz);
  if (VAR_10 > VAR_3->z_sz)
   VAR_10 = VAR_3->z_sz;
 }

 for (VAR_7 = 0; VAR_7 < VAR_10; VAR_7++)
  for (VAR_6 = 0; VAR_6 < VAR_9; VAR_6++)
   for (VAR_5 = 0; VAR_5 < VAR_8; VAR_5++) {
    VAR_4 += FUNC_3(VAR_2->sw[VAR_5][VAR_6][VAR_7],
         VAR_3->sw[VAR_5][VAR_6][VAR_7]);






    if (VAR_4 > VAR_11) {
     FUNC_0(&VAR_2->osm->log, VAR_0,
      "Too many torus changes; "
      "stopping reporting early\n");
     return;
    }
   }
}
