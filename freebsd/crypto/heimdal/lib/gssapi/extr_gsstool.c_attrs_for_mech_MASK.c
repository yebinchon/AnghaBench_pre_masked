
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct attrs_for_mech_options {char* mech_string; scalar_t__ all_flag; } ;
typedef int * gss_OID_set ;
typedef int * gss_OID ;
typedef scalar_t__ OM_uint32 ;


 int * VAR_0 ;
 int FUNC_0 (int,char*,...) ;
 scalar_t__ FUNC_1 (scalar_t__*,int *,int **,int **) ;
 int * FUNC_2 (char*) ;
 int FUNC_3 (scalar_t__*,int **) ;
 int FUNC_4 (char*,int *,int *) ;

int
FUNC_5(struct attrs_for_mech_options *VAR_1, int VAR_2, char **VAR_3)
{
    gss_OID_set VAR_4 = ((void*)0), VAR_5 = ((void*)0);
    gss_OID VAR_6 = VAR_0;
    OM_uint32 VAR_7, VAR_8;

    if (VAR_1->mech_string) {
 VAR_6 = FUNC_2(VAR_1->mech_string);
 if (VAR_6 == ((void*)0))
     FUNC_0(1, "mech %s is unknown", VAR_1->mech_string);
    }

    VAR_7 = FUNC_1(&VAR_8, VAR_6, &VAR_4, &VAR_5);
    if (VAR_7)
 FUNC_0(1, "gss_inquire_attrs_for_mech");

    if (VAR_6) {
 FUNC_4(VAR_1->mech_string, VAR_6, VAR_4);
    }

    if (VAR_1->all_flag) {
 FUNC_4("all mechs", ((void*)0), VAR_5);
    }

    FUNC_3(&VAR_8, &VAR_4);
    FUNC_3(&VAR_8, &VAR_5);

    return 0;
}
