
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct gsskrb5_ctx {int crypto; } ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_crypto ;
typedef int krb5_context ;
typedef scalar_t__ OM_uint32 ;


 scalar_t__ FUNC_0 (scalar_t__*,struct gsskrb5_ctx*,int ,int,int ,size_t,scalar_t__*) ;
 scalar_t__ FUNC_1 (int ,int ,int,int ,scalar_t__,size_t*,size_t*,int *) ;
 int FUNC_2 (int ,int,char*,int,...) ;

__attribute__((used)) static void
FUNC_3(krb5_context VAR_0, krb5_crypto VAR_1,
      int VAR_2, size_t VAR_3)
{
    krb5_error_code VAR_4;
    size_t VAR_5;
    OM_uint32 VAR_6;
    size_t VAR_7;
    uint16_t VAR_8;
    struct gsskrb5_ctx VAR_9;
    OM_uint32 VAR_10;

    VAR_9.crypto = VAR_1;

    VAR_4 = FUNC_0(&VAR_10,
    &VAR_9,
    VAR_0,
    VAR_2,
    0,
    VAR_3,
    &VAR_6);
    if (VAR_4)
      FUNC_2(VAR_0, 1, "_gsskrb5cfx_max_wrap_length_cfx: %d", VAR_4);
    if (VAR_4)
 FUNC_2(VAR_0, 1, "_gsskrb5cfx_max_wrap_length_cfx: %d", VAR_4);

    VAR_4 = FUNC_1(VAR_0,
          VAR_1,
          VAR_2,
          0,
          VAR_6,
          &VAR_5, &VAR_7, &VAR_8);
    if (VAR_4)
 FUNC_2(VAR_0, 1, "_gsskrb5cfx_wrap_length_cfx: %d", VAR_4);

    if (VAR_3 < VAR_5)
 FUNC_2(VAR_0, 1,
    "testsize (%d) < rsize (%d) for max_wrap_size %d",
    (int)VAR_3, (int)VAR_5, (int)VAR_6);
}
