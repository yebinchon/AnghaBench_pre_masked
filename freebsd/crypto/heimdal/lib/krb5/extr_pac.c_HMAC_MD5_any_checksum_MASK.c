
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct _krb5_key_data {int key; } ;
typedef int local_key ;
typedef int krb5_keyblock ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
struct TYPE_4__ {int checksum; int cksumtype; } ;
typedef TYPE_1__ Checksum ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,struct _krb5_key_data*,void const*,size_t,unsigned int,TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ,int const*,int *) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct _krb5_key_data*,int ,int) ;

__attribute__((used)) static krb5_error_code
FUNC_6(krb5_context VAR_1,
        const krb5_keyblock *VAR_2,
        const void *VAR_3,
        size_t VAR_4,
        unsigned VAR_5,
        Checksum *VAR_6)
{
    struct _krb5_key_data VAR_7;
    krb5_error_code VAR_8;

    FUNC_5(&VAR_7, 0, sizeof(VAR_7));

    VAR_8 = FUNC_1(VAR_1, VAR_2, &VAR_7.key);
    if (VAR_8)
 return VAR_8;

    VAR_8 = FUNC_2 (&VAR_6->checksum, 16);
    if (VAR_8) {
 FUNC_4(VAR_1, VAR_7.key);
 return VAR_8;
    }

    VAR_6->cksumtype = VAR_0;
    VAR_8 = FUNC_0(VAR_1, &VAR_7, VAR_3, VAR_4, VAR_5, VAR_6);
    if (VAR_8)
 FUNC_3(&VAR_6->checksum);

    FUNC_4(VAR_1, VAR_7.key);
    return VAR_8;
}
