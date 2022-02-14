
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int t_id; } ;
typedef TYPE_1__ tdesc_t ;
struct TYPE_7__ {TYPE_1__* ed_tgt; scalar_t__ ed_clear_mark; scalar_t__ ed_cur_mark; TYPE_1__* ed_node; } ;
typedef TYPE_2__ equiv_data_t ;


 int FUNC_0 (int,char*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*,TYPE_1__*,TYPE_2__*) ;

__attribute__((used)) static int
FUNC_2(void *VAR_0, void *VAR_1)
{
 equiv_data_t *VAR_2 = VAR_1;
 tdesc_t *VAR_3 = VAR_0;
 tdesc_t *VAR_4 = VAR_2->ed_node;

 VAR_2->ed_clear_mark = VAR_2->ed_cur_mark + 1;
 VAR_2->ed_cur_mark = VAR_2->ed_clear_mark + 1;

 if (FUNC_1(VAR_4, VAR_3, VAR_2)) {
  FUNC_0(3, "equiv_node matched %d <%x> %d <%x>\n",
      VAR_4->t_id, VAR_4->t_id, VAR_3->t_id, VAR_3->t_id);
  VAR_2->ed_tgt = VAR_3;

  return (-1);
 }

 return (0);
}
