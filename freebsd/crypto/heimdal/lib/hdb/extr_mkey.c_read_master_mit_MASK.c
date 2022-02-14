
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int krb5_storage ;
struct TYPE_4__ {int keyvalue; int keytype; } ;
typedef TYPE_1__ krb5_keyblock ;
typedef int krb5_error_code ;
typedef int krb5_context ;
typedef int int16_t ;
typedef int hdb_master_key ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int ,int,TYPE_1__*,int ,int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,TYPE_1__*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int ,int,char*,char const*,int ) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (char const*,int) ;
 int FUNC_11 (int) ;

__attribute__((used)) static krb5_error_code
FUNC_12(krb5_context VAR_3, const char *VAR_4,
  int VAR_5, hdb_master_key *VAR_6)
{
    int VAR_7;
    krb5_error_code VAR_8;
    krb5_storage *VAR_9;
    int16_t VAR_10;
    krb5_keyblock VAR_11;

    VAR_7 = FUNC_10(VAR_4, VAR_1 | VAR_0);
    if(VAR_7 < 0) {
 int VAR_12 = VAR_2;
 FUNC_6(VAR_3, VAR_12, "failed to open %s: %s",
          VAR_4, FUNC_11(VAR_12));
 return VAR_12;
    }
    VAR_9 = FUNC_8(VAR_7);
    if(VAR_9 == ((void*)0)) {
 FUNC_0(VAR_7);
 return VAR_2;
    }
    FUNC_9(VAR_9, VAR_5);


    {
 VAR_8 = FUNC_5(VAR_9, &VAR_10);
 if (VAR_8)
     goto out;
 VAR_8 = FUNC_2(VAR_3, VAR_10);
 if (VAR_8)
    goto out;
 VAR_11.keytype = VAR_10;
 VAR_8 = FUNC_4(VAR_9, &VAR_11.keyvalue);
 if(VAR_8)
     goto out;
    }
    VAR_8 = FUNC_1(VAR_3, 1, &VAR_11, 0, VAR_6);
    FUNC_3(VAR_3, &VAR_11);
  out:
    FUNC_7(VAR_9);
    FUNC_0(VAR_7);
    return VAR_8;
}
