
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * data; scalar_t__ length; } ;
struct TYPE_7__ {TYPE_1__ saltvalue; int salttype; } ;
typedef TYPE_2__ krb5_salt ;
typedef int krb5_principal ;
typedef scalar_t__ krb5_error_code ;
typedef scalar_t__ krb5_enctype ;
typedef int krb5_context ;
typedef int buf ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (char*,int,char*,int ) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 void* FUNC_1 (char*) ;
 int * FUNC_2 (char*,int,int ) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int ,int,scalar_t__,char*) ;
 int FUNC_4 (int ,int,char*) ;
 int FUNC_5 (int ,TYPE_2__) ;
 int FUNC_6 (int ,int ,TYPE_2__*) ;
 int FUNC_7 (int ,int *,int *) ;
 int FUNC_8 (int *,int,char**,int ,int ,int *) ;
 scalar_t__ FUNC_9 (int ,int ,scalar_t__*) ;
 int VAR_10 ;
 char* VAR_11 ;
 int * VAR_12 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (char*) ;
 int VAR_13 ;
 size_t FUNC_12 (char*,char*) ;
 scalar_t__ FUNC_13 (int *) ;
 int FUNC_14 (int ,scalar_t__,char*,TYPE_2__,char*) ;
 int FUNC_15 (int) ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;

int
FUNC_16(int VAR_17, char **VAR_18)
{
    krb5_context VAR_19;
    krb5_principal VAR_20;
    krb5_salt VAR_21;
    int VAR_22;
    char VAR_23[1024];
    krb5_enctype VAR_24;
    krb5_error_code VAR_25;

    VAR_22 = FUNC_8(&VAR_19, VAR_17, VAR_18, VAR_6, VAR_10, ((void*)0));

    if(VAR_8)
 FUNC_15(0);

    if(VAR_14){
 FUNC_10 (((void*)0));
 return 0;
    }

    VAR_17 -= VAR_22;
    VAR_18 += VAR_22;

    if (VAR_17 > 1)
 FUNC_15(1);

    if(!VAR_16 && !VAR_15 && !VAR_5)
 VAR_16 = 1;

    VAR_25 = FUNC_9(VAR_19, VAR_9, &VAR_24);
    if(VAR_25)
 FUNC_3(VAR_19, 1, VAR_25, "krb5_string_to_enctype");

    if((VAR_24 != VAR_0 &&
 VAR_24 != VAR_1 &&
 VAR_24 != VAR_2) &&
       (VAR_5 || VAR_15)) {
 if(!VAR_16) {
     VAR_24 = VAR_0;
 } else {
     FUNC_4(VAR_19, 1,
        "DES is the only valid keytype for AFS and Kerberos 4");
 }
    }

    if(VAR_16 && VAR_12 == ((void*)0)){
 FUNC_11("Kerberos v5 principal: ");
 if(FUNC_2(VAR_23, sizeof(VAR_23), VAR_13) == ((void*)0))
     return 1;
 VAR_23[FUNC_12(VAR_23, "\r\n")] = '\0';
 VAR_12 = FUNC_1(VAR_23);
    }
    if(VAR_5 && VAR_7 == ((void*)0)){
 FUNC_11("AFS cell: ");
 if(FUNC_2(VAR_23, sizeof(VAR_23), VAR_13) == ((void*)0))
     return 1;
 VAR_23[FUNC_12(VAR_23, "\r\n")] = '\0';
 VAR_7 = FUNC_1(VAR_23);
    }
    if(VAR_18[0])
 VAR_11 = VAR_18[0];
    if(VAR_11 == ((void*)0)){
 if(FUNC_0(VAR_23, sizeof(VAR_23), "Password: ", 0))
     return 1;
 VAR_11 = VAR_23;
    }

    if(VAR_16){
 FUNC_7(VAR_19, VAR_12, &VAR_20);
 FUNC_6(VAR_19, VAR_20, &VAR_21);
 FUNC_14(VAR_19, VAR_24, VAR_11, VAR_21, "Kerberos 5 (%s)");
 FUNC_5(VAR_19, VAR_21);
    }
    if(VAR_15){
 VAR_21.salttype = VAR_4;
 VAR_21.saltvalue.length = 0;
 VAR_21.saltvalue.data = ((void*)0);
 FUNC_14(VAR_19, VAR_2, VAR_11, VAR_21, "Kerberos 4");
    }
    if(VAR_5){
 VAR_21.salttype = VAR_3;
 VAR_21.saltvalue.length = FUNC_13(VAR_7);
 VAR_21.saltvalue.data = VAR_7;
 FUNC_14(VAR_19, VAR_2, VAR_11, VAR_21, "AFS");
    }
    return 0;
}
