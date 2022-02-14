
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int t_id; struct TYPE_4__* t_hash; } ;
typedef TYPE_1__ tdesc_t ;


 int FUNC_0 (int) ;
 TYPE_1__** VAR_0 ;

tdesc_t *
FUNC_1(int VAR_1)
{
 int VAR_2 = FUNC_0(VAR_1);
 tdesc_t *VAR_3 = VAR_0[VAR_2];

 while (VAR_3 != ((void*)0)) {
  if (VAR_3->t_id == VAR_1)
   return (VAR_3);
  VAR_3 = VAR_3->t_hash;
 }
 return (((void*)0));
}
