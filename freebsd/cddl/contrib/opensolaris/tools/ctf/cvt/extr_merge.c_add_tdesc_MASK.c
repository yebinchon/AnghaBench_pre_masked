
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {int t_id; size_t t_type; } ;
typedef TYPE_3__ tdesc_t ;
struct TYPE_16__ {TYPE_2__* md_tgt; TYPE_1__* md_parent; } ;
typedef TYPE_4__ merge_cb_data_t ;
struct TYPE_17__ {TYPE_3__* (* conjure ) (TYPE_3__*,int,TYPE_4__*) ;} ;
struct TYPE_14__ {int td_layouthash; int td_idhash; } ;
struct TYPE_13__ {int td_idhash; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (int ,TYPE_3__*) ;
 scalar_t__ FUNC_3 (int ,void*,int *) ;
 TYPE_3__* FUNC_4 (TYPE_3__*,int,TYPE_4__*) ;
 int FUNC_5 (TYPE_3__*) ;
 TYPE_5__* VAR_0 ;

__attribute__((used)) static int
FUNC_6(tdesc_t *VAR_1, int VAR_2, merge_cb_data_t *VAR_3)
{
 tdesc_t *VAR_4;
 tdesc_t VAR_5;

 VAR_5.t_id = VAR_2;
 FUNC_0(FUNC_3(VAR_3->md_parent->td_idhash,
     (void *)&VAR_5, ((void*)0)) == 0);

 FUNC_1(3, "trying to conjure %d %s (%d, <%x>) as %d, <%x>\n",
     VAR_1->t_type, FUNC_5(VAR_1), VAR_1->t_id,
     VAR_1->t_id, VAR_2, VAR_2);

 if ((VAR_4 = VAR_0[VAR_1->t_type].conjure(VAR_1, VAR_2,
     VAR_3)) == ((void*)0))

  return (0);

 FUNC_1(3, "succeeded\n");

 FUNC_2(VAR_3->md_tgt->td_idhash, VAR_4);
 FUNC_2(VAR_3->md_tgt->td_layouthash, VAR_4);

 return (1);
}
