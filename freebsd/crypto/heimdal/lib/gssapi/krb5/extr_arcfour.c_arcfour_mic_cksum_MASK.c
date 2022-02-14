
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void u_char ;
typedef int krb5_keyblock ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_crypto ;
typedef int krb5_context ;
struct TYPE_5__ {void const* data; } ;
struct TYPE_6__ {TYPE_1__ checksum; } ;
typedef TYPE_2__ Checksum ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (int ,int ,unsigned int,int ,void*,size_t,TYPE_2__*) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ,int *,int ,int *) ;
 void* FUNC_6 (size_t) ;
 int FUNC_7 (void*,void const*,size_t) ;

__attribute__((used)) static krb5_error_code
FUNC_8(krb5_context VAR_1,
    krb5_keyblock *VAR_2, unsigned VAR_3,
    u_char *VAR_4, size_t VAR_5,
    const u_char *VAR_6, size_t VAR_7,
    const void *VAR_8, size_t VAR_9,
    const void *VAR_10, size_t VAR_11)
{
    Checksum VAR_12;
    u_char *VAR_13;
    size_t VAR_14;
    krb5_crypto VAR_15;
    krb5_error_code VAR_16;

    FUNC_0(VAR_5 == 8);

    VAR_14 = VAR_7 + VAR_9 + VAR_11;

    VAR_13 = FUNC_6(VAR_14);
    if (VAR_13 == ((void*)0))
 return VAR_0;

    FUNC_7(VAR_13, VAR_6, VAR_7);
    FUNC_7(VAR_13 + VAR_7, VAR_8, VAR_9);
    FUNC_7(VAR_13 + VAR_7 + VAR_9, VAR_10, VAR_11);

    VAR_16 = FUNC_5(VAR_1, VAR_2, 0, &VAR_15);
    if (VAR_16) {
 FUNC_1(VAR_13);
 return VAR_16;
    }

    VAR_16 = FUNC_3(VAR_1,
          VAR_15,
          VAR_3,
          0,
          VAR_13, VAR_14,
          &VAR_12);
    FUNC_1(VAR_13);
    if (VAR_16 == 0) {
 FUNC_7(VAR_4, VAR_12.checksum.data, VAR_5);
 FUNC_2(&VAR_12);
    }
    FUNC_4(VAR_1, VAR_15);

    return VAR_16;
}
