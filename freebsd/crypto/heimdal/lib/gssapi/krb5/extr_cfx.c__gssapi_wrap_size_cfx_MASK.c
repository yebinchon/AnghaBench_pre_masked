
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int krb5_error_code ;
typedef int krb5_context ;
typedef int krb5_cksumtype ;
typedef TYPE_1__* gsskrb5_ctx ;
typedef int gss_qop_t ;
struct TYPE_3__ {int crypto; } ;
typedef int OM_uint32 ;


 int FUNC_0 (int ,int ,size_t*) ;
 int FUNC_1 (int ,int ,int *) ;
 size_t FUNC_2 (int ,int ,size_t) ;

OM_uint32
FUNC_3(OM_uint32 *VAR_0,
        const gsskrb5_ctx VAR_1,
        krb5_context VAR_2,
        int VAR_3,
        gss_qop_t VAR_4,
        OM_uint32 VAR_5,
        OM_uint32 *VAR_6)
{
    krb5_error_code VAR_7;

    *VAR_6 = 0;


    if (VAR_5 < 16)
 return 0;
    VAR_5 -= 16;

    if (VAR_3) {
 size_t VAR_8, VAR_9;

 VAR_8 = VAR_5 + 1;
 do {
     VAR_8--;
     VAR_9 = FUNC_2(VAR_2,
      VAR_1->crypto, VAR_8);
 } while (VAR_8 && VAR_9 > VAR_5);
 if (VAR_8 == 0)
     return 0;


 if (VAR_8 < 16)
     return 0;

 VAR_8 -= 16;

 *VAR_6 = VAR_8;
    } else {
 krb5_cksumtype VAR_10;
 size_t VAR_11;

 VAR_7 = FUNC_1(VAR_2, VAR_1->crypto, &VAR_10);
 if (VAR_7)
     return VAR_7;

 VAR_7 = FUNC_0(VAR_2, VAR_10, &VAR_11);
 if (VAR_7)
     return VAR_7;

 if (VAR_5 < VAR_11)
     return 0;


 *VAR_6 = VAR_5 - VAR_11;
    }

    return 0;
}
