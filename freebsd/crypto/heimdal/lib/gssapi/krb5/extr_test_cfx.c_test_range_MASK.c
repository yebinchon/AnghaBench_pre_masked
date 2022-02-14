
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct range {size_t lower; size_t upper; } ;
struct gsskrb5_ctx {int crypto; } ;
typedef int krb5_error_code ;
typedef int krb5_crypto ;
typedef int krb5_context ;
typedef scalar_t__ OM_uint32 ;


 int FUNC_0 (scalar_t__*,struct gsskrb5_ctx*,int ,int,int ,size_t,scalar_t__*) ;
 int FUNC_1 (int ,int ,int,int ,scalar_t__,size_t*,size_t*,int *) ;
 int FUNC_2 (int ,int,char*,int,...) ;

__attribute__((used)) static void
FUNC_3(const struct range *VAR_0, int VAR_1,
    krb5_context VAR_2, krb5_crypto VAR_3)
{
    krb5_error_code VAR_4;
    size_t VAR_5, VAR_6;
    struct gsskrb5_ctx VAR_7;

    for (VAR_5 = VAR_0->lower; VAR_5 < VAR_0->upper; VAR_5++) {
 size_t VAR_8;
 uint16_t VAR_9;
 OM_uint32 VAR_10;
 OM_uint32 VAR_11;

 VAR_7.crypto = VAR_3;

 VAR_4 = FUNC_0(&VAR_10,
        &VAR_7,
        VAR_2,
        VAR_1,
        0,
        VAR_5,
        &VAR_11);
 if (VAR_4)
     FUNC_2(VAR_2, 1, "_gsskrb5cfx_max_wrap_length_cfx: %d", VAR_4);
 if (VAR_11 == 0)
     continue;

 VAR_4 = FUNC_1(VAR_2,
       VAR_3,
       VAR_1,
       0,
       VAR_11,
       &VAR_6, &VAR_8, &VAR_9);
 if (VAR_4)
     FUNC_2(VAR_2, 1, "_gsskrb5cfx_wrap_length_cfx: %d", VAR_4);

 if (VAR_5 < VAR_6)
     FUNC_2(VAR_2, 1,
        "size (%d) < rsize (%d) for max_wrap_size %d",
        (int)VAR_5, (int)VAR_6, (int)VAR_11);
    }
}
