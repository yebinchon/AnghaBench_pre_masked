
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* t_next; struct TYPE_4__* t_hash; } ;
typedef TYPE_1__ tdesc_t ;


 int VAR_0 ;
 TYPE_1__** VAR_1 ;
 TYPE_1__** VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int) ;

void
FUNC_2(void)
{
 tdesc_t *VAR_3;
 int VAR_4;

 FUNC_0("checking hash\n");
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (VAR_1[VAR_4]) {
   for (VAR_3 = VAR_1[VAR_4]->t_hash;
       VAR_3 && VAR_3 != VAR_1[VAR_4];
       VAR_3 = VAR_3->t_hash)
    continue;
   if (VAR_3) {
    FUNC_1("cycle in hash bucket %d\n", VAR_4);
    return;
   }
  }

  if (VAR_2[VAR_4]) {
   for (VAR_3 = VAR_2[VAR_4]->t_next;
       VAR_3 && VAR_3 != VAR_2[VAR_4];
       VAR_3 = VAR_3->t_next)
    continue;
   if (VAR_3) {
    FUNC_1("cycle in name bucket %d\n", VAR_4);
    return;
   }
  }
 }
 FUNC_0("done\n");
}
