
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ t_emark; int t_id; scalar_t__ t_type; int t_name; } ;
typedef TYPE_1__ tdesc_t ;
struct TYPE_13__ {scalar_t__ ed_clear_mark; scalar_t__ ed_cur_mark; int ed_selfuniquify; int ed_ta; } ;
typedef TYPE_4__ equiv_data_t ;
struct TYPE_14__ {int (* equiv ) (TYPE_1__*,TYPE_1__*,TYPE_4__*) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ) ;
 TYPE_6__* VAR_1 ;

__attribute__((used)) static int
FUNC_3(tdesc_t *VAR_2, tdesc_t *VAR_3, equiv_data_t *VAR_4)
{
 int (*VAR_5)(tdesc_t *, tdesc_t *, equiv_data_t *);
 int VAR_6;

 if (VAR_2->t_emark > VAR_4->ed_clear_mark &&
     VAR_3->t_emark > VAR_4->ed_clear_mark)
  return (VAR_2->t_emark == VAR_3->t_emark);
 if ((VAR_6 = FUNC_1(VAR_4->ed_ta, VAR_2->t_id)) > 0 &&
     VAR_6 == VAR_3->t_id && !VAR_4->ed_selfuniquify)
  return (1);

 if (!FUNC_2(VAR_2->t_name, VAR_3->t_name))
  return (0);

 if (VAR_2->t_type != VAR_3->t_type) {
  if (VAR_2->t_type == VAR_0 || VAR_3->t_type == VAR_0)
   return (FUNC_0(VAR_2, VAR_3));
  else
   return (0);
 }

 VAR_2->t_emark = VAR_4->ed_cur_mark;
 VAR_3->t_emark = VAR_4->ed_cur_mark;
 VAR_4->ed_cur_mark++;

 if ((VAR_5 = VAR_1[VAR_2->t_type].equiv) != ((void*)0))
  return (VAR_5(VAR_2, VAR_3, VAR_4));

 return (1);
}
