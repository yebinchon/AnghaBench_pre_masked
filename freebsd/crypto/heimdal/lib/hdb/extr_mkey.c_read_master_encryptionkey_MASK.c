
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
struct TYPE_5__ {scalar_t__ keytype; } ;
typedef TYPE_1__ krb5_keyblock ;
typedef int krb5_error_code ;
typedef int krb5_context ;
typedef int hdb_master_key ;
typedef int buf ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned char*,scalar_t__,TYPE_1__*,size_t*) ;
 int VAR_5 ;
 int FUNC_2 (int ,int ,TYPE_1__*,int ,int *) ;
 int FUNC_3 (int ,TYPE_1__*) ;
 int FUNC_4 (int ,int,char*,char const*,int ) ;
 int FUNC_5 (unsigned char*,int ,int) ;
 int FUNC_6 (char const*,int) ;
 scalar_t__ FUNC_7 (int,unsigned char*,int) ;
 int FUNC_8 (int) ;

__attribute__((used)) static krb5_error_code
FUNC_9(krb5_context VAR_6, const char *VAR_7,
     hdb_master_key *VAR_8)
{
    int VAR_9;
    krb5_keyblock VAR_10;
    krb5_error_code VAR_11;
    unsigned char VAR_12[256];
    ssize_t VAR_13;
    size_t VAR_14;

    VAR_9 = FUNC_6(VAR_7, VAR_4 | VAR_3);
    if(VAR_9 < 0) {
 int VAR_15 = VAR_5;
 FUNC_4(VAR_6, VAR_15, "failed to open %s: %s",
         VAR_7, FUNC_8(VAR_15));
 return VAR_15;
    }

    VAR_13 = FUNC_7(VAR_9, VAR_12, sizeof(VAR_12));
    FUNC_0(VAR_9);
    if(VAR_13 < 0) {
 int VAR_16 = VAR_5;
 FUNC_4(VAR_6, VAR_16, "error reading %s: %s",
         VAR_7, FUNC_8(VAR_16));
 return VAR_16;
    }

    VAR_11 = FUNC_1(VAR_12, VAR_13, &VAR_10, &VAR_14);
    FUNC_5(VAR_12, 0, sizeof(VAR_12));
    if(VAR_11)
 return VAR_11;






    if(VAR_10.keytype == VAR_0 || VAR_10.keytype == VAR_1)
 VAR_10.keytype = VAR_2;

    VAR_11 = FUNC_2(VAR_6, 0, &VAR_10, 0, VAR_8);
    FUNC_3(VAR_6, &VAR_10);
    return VAR_11;
}
