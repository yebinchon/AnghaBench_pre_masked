
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int tdtrav_cb_f ;
struct TYPE_13__ {int md_flags; int md_iitba; TYPE_2__* md_parent; int md_ta; } ;
typedef TYPE_3__ merge_cb_data_t ;
struct TYPE_14__ {int iif_refmerge; int iif_newidx; int iif_ta; TYPE_5__* iif_template; } ;
typedef TYPE_4__ iifind_data_t ;
struct TYPE_15__ {char* ii_name; int ii_type; TYPE_1__* ii_dtype; } ;
typedef TYPE_5__ iidesc_t ;
struct TYPE_12__ {int td_iihash; int td_curvgen; } ;
struct TYPE_11__ {int t_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,char*,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,TYPE_5__*,int ,TYPE_4__*) ;
 int VAR_2 ;
 int FUNC_3 (TYPE_5__*,int *,int *,int ,int *,TYPE_3__*) ;
 int FUNC_4 (int ,TYPE_5__*) ;
 int * VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;

__attribute__((used)) static int
FUNC_5(void *VAR_6, void *VAR_7)
{
 iidesc_t *VAR_8 = VAR_6;
 merge_cb_data_t *VAR_9 = VAR_7;
 iifind_data_t VAR_10;
 tdtrav_cb_f *VAR_11;

 VAR_11 = (VAR_9->md_flags & VAR_1 ? VAR_5 : VAR_3);


 (void) FUNC_3(VAR_8, &VAR_9->md_parent->td_curvgen, ((void*)0), VAR_4, VAR_11,
     VAR_9);


 VAR_10.iif_template = VAR_8;
 VAR_10.iif_ta = VAR_9->md_ta;
 VAR_10.iif_newidx = FUNC_1(VAR_9->md_ta, VAR_8->ii_dtype->t_id);
 VAR_10.iif_refmerge = (VAR_9->md_flags & VAR_0);

 if (FUNC_2(VAR_9->md_parent->td_iihash, VAR_8, VAR_2,
     &VAR_10) == 1)

  return (1);

 FUNC_0(3, "tba %s (%d)\n", (VAR_8->ii_name ? VAR_8->ii_name : "(anon)"),
     VAR_8->ii_type);

 FUNC_4(VAR_9->md_iitba, VAR_8);

 return (0);
}
