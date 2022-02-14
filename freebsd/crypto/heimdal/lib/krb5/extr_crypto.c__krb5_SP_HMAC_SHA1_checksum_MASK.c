
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct _krb5_key_data {int dummy; } ;
struct _krb5_checksum_type {int dummy; } ;
typedef int sha1_data ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
struct TYPE_5__ {char* data; int length; } ;
struct TYPE_6__ {TYPE_1__ checksum; } ;
typedef TYPE_2__ Checksum ;


 int VAR_0 ;
 struct _krb5_checksum_type* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,struct _krb5_checksum_type*,void const*,size_t,unsigned int,struct _krb5_key_data*,TYPE_2__*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*,char*,int) ;

krb5_error_code
FUNC_4(krb5_context VAR_1,
       struct _krb5_key_data *VAR_2,
       const void *VAR_3,
       size_t VAR_4,
       unsigned VAR_5,
       Checksum *VAR_6)
{
    struct _krb5_checksum_type *VAR_7 = FUNC_0(VAR_0);
    Checksum VAR_8;
    char VAR_9[20];
    krb5_error_code VAR_10;

    VAR_8.checksum.data = VAR_9;
    VAR_8.checksum.length = sizeof(VAR_9);

    VAR_10 = FUNC_1(VAR_1, VAR_7, VAR_3, VAR_4, VAR_5, VAR_2, &VAR_8);
    if (VAR_10)
 FUNC_2(VAR_1, "hmac failed");
    FUNC_3(VAR_6->checksum.data, VAR_8.checksum.data, VAR_6->checksum.length);
    return 0;
}
