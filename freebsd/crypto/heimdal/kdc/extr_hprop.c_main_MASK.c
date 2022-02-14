
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
typedef int * krb5_ccache ;
struct TYPE_7__ {scalar_t__ (* hdb_open ) (int ,TYPE_1__*,int ,int ) ;int (* hdb_destroy ) (int ,TYPE_1__*) ;} ;
typedef TYPE_1__ HDB ;


 scalar_t__ VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int,int *,TYPE_1__*) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int **) ;
 scalar_t__ FUNC_3 (int ,int ,int,char**,int*) ;
 scalar_t__ FUNC_4 (int ,TYPE_1__**,int *) ;
 scalar_t__ FUNC_5 (int ,int ,int *) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,int,scalar_t__,char*,...) ;
 int FUNC_9 (int ,int,char*,...) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int *) ;
 int FUNC_12 (int ,scalar_t__) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ,int,int *,TYPE_1__*,int *,int,int,char**) ;
 int FUNC_16 (char*) ;
 int * VAR_11 ;
 scalar_t__ FUNC_17 (int ,TYPE_1__*,int ,int ) ;
 int FUNC_18 (int ,TYPE_1__*) ;
 scalar_t__ VAR_12 ;
 int FUNC_19 (int) ;
 scalar_t__ VAR_13 ;

int
FUNC_20(int VAR_14, char **VAR_15)
{
    krb5_error_code VAR_16;
    krb5_context VAR_17;
    krb5_ccache VAR_18 = ((void*)0);
    HDB *VAR_19 = ((void*)0);
    int VAR_20 = 0;

    int VAR_21, VAR_22;

    FUNC_16(VAR_15[0]);

    if(FUNC_3(VAR_2, VAR_10, VAR_14, VAR_15, &VAR_20))
 FUNC_19(1);

    if(VAR_6)
 FUNC_19(0);

    if(VAR_13){
 FUNC_14(((void*)0));
 FUNC_1(0);
    }

    VAR_16 = FUNC_11(&VAR_17);
    if(VAR_16)
 FUNC_1(1);


    VAR_16 = FUNC_6(VAR_17, 1);
    if(VAR_16)
        FUNC_8(VAR_17, 1, VAR_16, "krb5_allow_weak_crypto");

    if(VAR_7)
 FUNC_12(VAR_17, VAR_7);

    if(VAR_5 && VAR_4)
 FUNC_9(VAR_17, 1,
    "only one of `--encrypt' and `--decrypt' is meaningful");

    if(VAR_11 != ((void*)0)) {
 VAR_21 = FUNC_13(VAR_11);
 if(VAR_21 == 0)
     FUNC_9(VAR_17, 1, "unknown source type `%s'", VAR_11);
    } else
 VAR_21 = 129;

    if(!VAR_12)
 FUNC_2(VAR_17, &VAR_18);

    if(VAR_4 || VAR_5) {
 VAR_16 = FUNC_5(VAR_17, VAR_9, &VAR_8);
 if(VAR_16 && VAR_16 != VAR_0)
     FUNC_8(VAR_17, 1, VAR_16, "hdb_read_master_key");
 if(VAR_16)
     FUNC_9(VAR_17, 1, "No master key file found");
    }

    switch(VAR_21) {
    case 128:
 if (VAR_3 == ((void*)0))
     FUNC_9(VAR_17, 1, "no dump file specified");
 break;
    case 129:
 VAR_16 = FUNC_4 (VAR_17, &VAR_19, VAR_3);
 if(VAR_16)
     FUNC_8(VAR_17, 1, VAR_16, "hdb_create: %s", VAR_3);
 VAR_16 = VAR_19->hdb_open(VAR_17, VAR_19, VAR_1, 0);
 if(VAR_16)
     FUNC_8(VAR_17, 1, VAR_16, "db->hdb_open");
 break;
    default:
 FUNC_9(VAR_17, 1, "unknown dump type `%d'", VAR_21);
 break;
    }

    if (VAR_12)
 VAR_22 = FUNC_0 (VAR_17, VAR_21, VAR_3, VAR_19);
    else
 VAR_22 = FUNC_15 (VAR_17, VAR_21, VAR_3,
     VAR_19, VAR_18, VAR_20, VAR_14, VAR_15);

    if(VAR_18 != ((void*)0))
 FUNC_7(VAR_17, VAR_18);

    if(VAR_19 != ((void*)0))
 (*VAR_19->hdb_destroy)(VAR_17, VAR_19);

    FUNC_10(VAR_17);
    return VAR_22;
}
