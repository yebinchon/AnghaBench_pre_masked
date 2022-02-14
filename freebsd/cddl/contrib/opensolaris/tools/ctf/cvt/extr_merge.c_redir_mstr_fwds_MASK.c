
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int * rmd_map; TYPE_1__* rmd_tgt; } ;
typedef TYPE_2__ redir_mstr_data_t ;
struct TYPE_8__ {TYPE_1__* md_tgt; int md_fdida; } ;
typedef TYPE_3__ merge_cb_data_t ;
typedef int alist_t ;
struct TYPE_6__ {int td_curvgen; int td_iihash; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,int ,TYPE_2__*) ;
 int * FUNC_2 (int *,int *) ;
 int VAR_0 ;
 int FUNC_3 (int ,int *,int ,int *,int *,int *) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_4(merge_cb_data_t *VAR_2)
{
 redir_mstr_data_t VAR_3;
 alist_t *VAR_4 = FUNC_2(((void*)0), ((void*)0));

 VAR_3.rmd_tgt = VAR_2->md_tgt;
 VAR_3.rmd_map = VAR_4;

 if (FUNC_1(VAR_2->md_fdida, VAR_1, &VAR_3)) {
  (void) FUNC_3(VAR_2->md_tgt->td_iihash,
      &VAR_2->md_tgt->td_curvgen, VAR_0, ((void*)0), ((void*)0), VAR_4);
 }

 FUNC_0(VAR_4);
}
