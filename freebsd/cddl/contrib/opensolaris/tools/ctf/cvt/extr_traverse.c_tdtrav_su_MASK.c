
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tdtrav_data_t ;
struct TYPE_4__ {TYPE_2__* t_members; } ;
typedef TYPE_1__ tdesc_t ;
struct TYPE_5__ {int ml_type; struct TYPE_5__* ml_next; } ;
typedef TYPE_2__ mlist_t ;


 int FUNC_0 (int ,int *,int *) ;

__attribute__((used)) static int
FUNC_1(tdesc_t *VAR_0, tdtrav_data_t *VAR_1)
{
 mlist_t *VAR_2;
 int VAR_3 = 0;

 for (VAR_2 = VAR_0->t_members; VAR_2; VAR_2 = VAR_2->ml_next) {
  if ((VAR_3 = FUNC_0(VAR_2->ml_type, &VAR_2->ml_type, VAR_1)) < 0)
   return (VAR_3);
 }

 return (VAR_3);
}
