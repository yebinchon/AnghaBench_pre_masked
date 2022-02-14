
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int krb5_crypto ;
typedef int gsskrb5_ctx ;
typedef size_t OM_uint32 ;


 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 (int const) ;
 int FUNC_1 (size_t,size_t*,size_t*,int ) ;
 int FUNC_2 (size_t,size_t*,size_t*,int ) ;

__attribute__((used)) static OM_uint32
FUNC_3(const gsskrb5_ctx VAR_3,
   krb5_crypto VAR_4,
   size_t VAR_5,
   OM_uint32 *VAR_6)
{





    if (FUNC_0(VAR_3)) {
 size_t VAR_7, VAR_8;

 VAR_7 = VAR_0;
 FUNC_1(VAR_7, &VAR_7, &VAR_8, VAR_1);

 if (VAR_5 < VAR_7)
     *VAR_6 = 0;
 else
     *VAR_6 = VAR_5 - VAR_7;

    } else {
 size_t VAR_9 = VAR_0;
 size_t VAR_10 = 8;
 size_t VAR_11, VAR_12;

 VAR_11 = 8 + VAR_5 + VAR_10 + VAR_9;

 FUNC_2(VAR_11, &VAR_11, &VAR_12, VAR_1);

 VAR_12 -= VAR_5;
 if (VAR_12 < VAR_5) {
     *VAR_6 = (VAR_5 - VAR_12);
     (*VAR_6) &= (~(OM_uint32)(VAR_10 - 1));
 } else {
     *VAR_6 = 0;
 }
    }

    return VAR_2;
}
