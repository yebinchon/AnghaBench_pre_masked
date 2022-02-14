
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* t_members; } ;
typedef TYPE_1__ tdesc_t ;
struct TYPE_6__ {scalar_t__ ml_offset; scalar_t__ ml_size; struct TYPE_6__* ml_next; int ml_type; int ml_name; } ;
typedef TYPE_2__ mlist_t ;
typedef int equiv_data_t ;


 int FUNC_0 (int ,int ,int *) ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static int
FUNC_2(tdesc_t *VAR_0, tdesc_t *VAR_1, equiv_data_t *VAR_2)
{
 mlist_t *VAR_3 = VAR_0->t_members, *VAR_4 = VAR_1->t_members;

 while (VAR_3 && VAR_4) {
  if (VAR_3->ml_offset != VAR_4->ml_offset ||
      FUNC_1(VAR_3->ml_name, VAR_4->ml_name) != 0 ||
      VAR_3->ml_size != VAR_4->ml_size ||
      !FUNC_0(VAR_3->ml_type, VAR_4->ml_type, VAR_2))
   return (0);

  VAR_3 = VAR_3->ml_next;
  VAR_4 = VAR_4->ml_next;
 }

 if (VAR_3 || VAR_4)
  return (0);

 return (1);
}
