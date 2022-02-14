
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int krb5_storage ;
typedef int krb5_error_code ;
struct TYPE_3__ {scalar_t__ length; int data; } ;
typedef TYPE_1__ krb5_data ;
typedef int krb5_context ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,scalar_t__) ;
 int FUNC_1 (int *,scalar_t__) ;

__attribute__((used)) static krb5_error_code
FUNC_2(krb5_context VAR_2,
     krb5_storage *VAR_3,
     krb5_data VAR_4)
{
    int VAR_5;
    VAR_5 = FUNC_1(VAR_3, VAR_4.length);
    if(VAR_5 < 0)
 return VAR_5;
    VAR_5 = FUNC_0(VAR_3, VAR_4.data, VAR_4.length);
    if(VAR_5 != (int)VAR_4.length){
 if(VAR_5 < 0)
     return VAR_1;
 return VAR_0;
    }
    return 0;
}
