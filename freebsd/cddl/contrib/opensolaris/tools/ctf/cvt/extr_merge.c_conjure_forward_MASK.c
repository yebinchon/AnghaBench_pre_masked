
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tdesc_t ;
struct TYPE_5__ {TYPE_1__* md_tgt; } ;
typedef TYPE_2__ merge_cb_data_t ;
struct TYPE_4__ {int td_fwdlist; } ;


 int * FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static tdesc_t *
FUNC_2(tdesc_t *VAR_0, int VAR_1, merge_cb_data_t *VAR_2)
{
 tdesc_t *VAR_3 = FUNC_0(VAR_0, VAR_1);

 FUNC_1(&VAR_2->md_tgt->td_fwdlist, VAR_3);

 return (VAR_3);
}
