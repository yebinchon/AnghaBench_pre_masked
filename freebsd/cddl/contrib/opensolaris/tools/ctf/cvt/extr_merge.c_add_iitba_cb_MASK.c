
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_16__ {int md_flags; TYPE_3__* md_tgt; TYPE_2__* md_parent; int md_ta; int md_iitba; } ;
typedef TYPE_4__ merge_cb_data_t ;
struct TYPE_17__ {int iif_newidx; int iif_refmerge; int iif_ta; TYPE_6__* iif_template; } ;
typedef TYPE_5__ iifind_data_t ;
struct TYPE_18__ {char* ii_name; TYPE_1__* ii_dtype; } ;
typedef TYPE_6__ iidesc_t ;
struct TYPE_15__ {int td_iihash; } ;
struct TYPE_14__ {int td_iihash; } ;
struct TYPE_13__ {int t_id; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_6__* FUNC_1 (TYPE_6__*,TYPE_4__*) ;
 int FUNC_2 (int,char*,char*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,TYPE_6__*) ;
 int FUNC_5 (int ,TYPE_6__*,int ,TYPE_5__*) ;
 int VAR_1 ;
 int FUNC_6 (int ,void*,int *,int *) ;

__attribute__((used)) static int
FUNC_7(void *VAR_2, void *VAR_3)
{
 merge_cb_data_t *VAR_4 = VAR_3;
 iidesc_t *VAR_5 = VAR_2;
 iidesc_t *VAR_6;
 iifind_data_t VAR_7;
 int VAR_8;

 VAR_8 = FUNC_3(VAR_4->md_ta, VAR_5->ii_dtype->t_id);
 FUNC_0(VAR_8 != -1);

 (void) FUNC_6(VAR_4->md_iitba, VAR_2, ((void*)0), ((void*)0));

 VAR_7.iif_template = VAR_5;
 VAR_7.iif_ta = VAR_4->md_ta;
 VAR_7.iif_newidx = VAR_8;
 VAR_7.iif_refmerge = (VAR_4->md_flags & VAR_0);

 if (FUNC_5(VAR_4->md_parent->td_iihash, VAR_5, VAR_1,
     &VAR_7) == 1) {
  FUNC_2(3, "iidesc_t %s already exists\n",
      (VAR_5->ii_name ? VAR_5->ii_name : "(anon)"));
  return (1);
 }

 VAR_6 = FUNC_1(VAR_5, VAR_4);
 FUNC_4(VAR_4->md_tgt->td_iihash, VAR_6);

 return (1);
}
