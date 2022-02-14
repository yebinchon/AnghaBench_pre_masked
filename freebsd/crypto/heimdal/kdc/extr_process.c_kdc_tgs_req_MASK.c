
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
typedef int krb5_kdc_configuration ;
typedef scalar_t__ krb5_error_code ;
struct TYPE_5__ {int length; int data; } ;
typedef TYPE_1__ krb5_data ;
typedef int krb5_context ;
typedef int KDC_REQ ;


 scalar_t__ FUNC_0 (int ,int *,int *,TYPE_1__*,char const*,struct sockaddr*,int) ;
 scalar_t__ FUNC_1 (int ,int ,int *,size_t*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static krb5_error_code
FUNC_3(krb5_context VAR_0,
     krb5_kdc_configuration *VAR_1,
     krb5_data *VAR_2,
     krb5_data *VAR_3,
     const char *VAR_4,
     struct sockaddr *VAR_5,
     int VAR_6,
     int *VAR_7)
{
    krb5_error_code VAR_8;
    KDC_REQ VAR_9;
    size_t VAR_10;

    VAR_8 = FUNC_1(VAR_2->data, VAR_2->length, &VAR_9, &VAR_10);
    if (VAR_8)
 return VAR_8;

    *VAR_7 = 1;

    VAR_8 = FUNC_0(VAR_0, VAR_1, &VAR_9, VAR_3,
         VAR_4, VAR_5, VAR_6);
    FUNC_2(&VAR_9);
    return VAR_8;
}
