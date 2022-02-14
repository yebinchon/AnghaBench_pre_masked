
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
typedef int krb5_const_principal ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,scalar_t__,int ) ;
 char* FUNC_3 (size_t) ;
 scalar_t__ FUNC_4 (int ,size_t) ;
 size_t FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_1 ;
 size_t FUNC_7 (scalar_t__,int ) ;
 size_t FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (int ,int ,char*,size_t,int) ;

__attribute__((used)) static krb5_error_code
FUNC_10(krb5_context VAR_2,
      krb5_const_principal VAR_3,
      char **VAR_4,
      int VAR_5)
{
    size_t VAR_6 = 0, VAR_7;
    size_t VAR_8;
    krb5_error_code VAR_9;

    if (FUNC_6(VAR_3)) {
 VAR_7 = FUNC_8(FUNC_6(VAR_3));

 if(FUNC_7(FUNC_6(VAR_3), VAR_1) == VAR_7)
     VAR_6 += VAR_7;
 else
     VAR_6 += 2*VAR_7;
 VAR_6++;
    }
    for(VAR_8 = 0; VAR_8 < FUNC_5(VAR_3); VAR_8++){
 VAR_7 = FUNC_8(FUNC_4(VAR_3, VAR_8));
 if(FUNC_7(FUNC_4(VAR_3, VAR_8), VAR_1) == VAR_7)
     VAR_6 += VAR_7;
 else
     VAR_6 += 2*VAR_7;
 VAR_6++;
    }
    VAR_6++;
    *VAR_4 = FUNC_3(VAR_6);
    if(*VAR_4 == ((void*)0)) {
 FUNC_2(VAR_2, VAR_0,
          FUNC_0("malloc: out of memory", ""));
 return VAR_0;
    }
    VAR_9 = FUNC_9(VAR_2, VAR_3, *VAR_4, VAR_6, VAR_5);
    if(VAR_9) {
 FUNC_1(*VAR_4);
 *VAR_4 = ((void*)0);
    }
    return VAR_9;
}
