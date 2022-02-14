
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* t_ardef; int t_id; } ;
typedef TYPE_1__ tdesc_t ;
typedef int merge_cb_data_t ;
struct TYPE_10__ {int ad_nelems; int ad_idxtype; int ad_contents; } ;
typedef TYPE_2__ ardef_t ;


 TYPE_1__* FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int *,int ,int ,TYPE_1__*,int *) ;
 TYPE_2__* FUNC_2 (int) ;

__attribute__((used)) static tdesc_t *
FUNC_3(tdesc_t *VAR_0, int VAR_1, merge_cb_data_t *VAR_2)
{
 tdesc_t *VAR_3 = FUNC_0(VAR_0, VAR_1);
 ardef_t *VAR_4 = FUNC_2(sizeof (ardef_t));
 ardef_t *VAR_5 = VAR_0->t_ardef;

 (void) FUNC_1(&VAR_4->ad_contents, VAR_5->ad_contents, VAR_0->t_id, VAR_3,
     VAR_2);
 (void) FUNC_1(&VAR_4->ad_idxtype, VAR_5->ad_idxtype, VAR_0->t_id, VAR_3,
     VAR_2);

 VAR_4->ad_nelems = VAR_5->ad_nelems;

 VAR_3->t_ardef = VAR_4;

 return (VAR_3);
}
