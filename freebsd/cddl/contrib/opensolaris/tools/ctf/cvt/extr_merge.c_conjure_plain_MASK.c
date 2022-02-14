
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int t_id; int t_tdesc; } ;
typedef TYPE_1__ tdesc_t ;
typedef int merge_cb_data_t ;


 TYPE_1__* FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int *,int ,int ,TYPE_1__*,int *) ;

__attribute__((used)) static tdesc_t *
FUNC_2(tdesc_t *VAR_0, int VAR_1, merge_cb_data_t *VAR_2)
{
 tdesc_t *VAR_3 = FUNC_0(VAR_0, VAR_1);

 (void) FUNC_1(&VAR_3->t_tdesc, VAR_0->t_tdesc, VAR_0->t_id, VAR_3, VAR_2);

 return (VAR_3);
}
