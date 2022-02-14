
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int krb5_storage ;
typedef int krb5_error_code ;
typedef int heim_general_string ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,size_t) ;
 int FUNC_1 (int *,size_t) ;
 size_t FUNC_2 (int ) ;

__attribute__((used)) static krb5_error_code
FUNC_3(krb5_storage *VAR_2,
       heim_general_string VAR_3)
{
    int VAR_4;
    size_t VAR_5 = FUNC_2(VAR_3);
    VAR_4 = FUNC_1(VAR_2, VAR_5);
    if(VAR_4 < 0)
 return VAR_4;
    VAR_4 = FUNC_0(VAR_2, VAR_3, VAR_5);
    if(VAR_4 != (int)VAR_5){
 if(VAR_4 < 0)
     return VAR_1;
 return VAR_0;
    }
    return 0;
}
