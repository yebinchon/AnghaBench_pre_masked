
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
typedef int krb5_storage ;
typedef int krb5_error_code ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 int FUNC_1 (int *,size_t*) ;
 int FUNC_2 (int *,int *,size_t) ;

__attribute__((used)) static int
FUNC_3(krb5_storage *VAR_1, krb5_storage *VAR_2)
{
    krb5_error_code VAR_3;
    uint32_t VAR_4;
    int VAR_5;
    size_t VAR_6 = 0;

    do {
 VAR_3 = FUNC_1(VAR_1, &VAR_4);
 if (VAR_3)
     return VAR_3;

 VAR_5 = (VAR_4 & VAR_0);
 VAR_4 &= ~VAR_0;

 FUNC_0(FUNC_2(VAR_1, VAR_2, VAR_4));
 VAR_6 += VAR_4;

    } while(!VAR_5 || VAR_6 == 0);

    return 0;
}
