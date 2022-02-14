
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int gm_mech_oid; int (* gm_inquire_names_for_mech ) (int *,int *,int **) ;} ;
struct _gss_mech_switch {int * gm_name_types; TYPE_1__ gm_mech; int gm_mech_oid; int * gm_so; } ;
typedef TYPE_1__* gssapi_mech_interface ;
typedef int OM_uint32 ;


 int VAR_0 ;
 int FUNC_0 (int *,struct _gss_mech_switch*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct _gss_mech_switch* FUNC_1 (int,int) ;
 int VAR_3 ;
 int FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (int *,int **) ;
 int FUNC_4 (int *,int *,int **) ;

__attribute__((used)) static int
FUNC_5(gssapi_mech_interface VAR_4)
{
    struct _gss_mech_switch *VAR_5;
    OM_uint32 VAR_6;


    if (VAR_4 == ((void*)0))
 return 0;

    VAR_5 = FUNC_1(1, sizeof(*VAR_5));
    if (VAR_5 == ((void*)0))
 return VAR_0;
    VAR_5->gm_so = ((void*)0);
    VAR_5->gm_mech = *VAR_4;
    VAR_5->gm_mech_oid = VAR_4->gm_mech_oid;
    FUNC_2(&VAR_6,
      &VAR_5->gm_mech.gm_mech_oid, &VAR_1);



    if (VAR_5->gm_mech.gm_inquire_names_for_mech)
 (*VAR_5->gm_mech.gm_inquire_names_for_mech)(&VAR_6,
     &VAR_5->gm_mech.gm_mech_oid, &VAR_5->gm_name_types);

    if (VAR_5->gm_name_types == ((void*)0))
 FUNC_3(&VAR_6, &VAR_5->gm_name_types);

    FUNC_0(&VAR_2, VAR_5, VAR_3);
    return 0;
}
