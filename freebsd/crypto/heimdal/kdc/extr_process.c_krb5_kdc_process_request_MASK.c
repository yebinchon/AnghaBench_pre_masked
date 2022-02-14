
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
typedef int krb5_kdc_configuration ;
typedef int krb5_error_code ;
struct TYPE_6__ {unsigned char* data; size_t length; } ;
typedef TYPE_1__ krb5_data ;
typedef int krb5_context ;
typedef scalar_t__ krb5_boolean ;
struct TYPE_7__ {int (* process ) (int ,int *,TYPE_1__*,TYPE_1__*,char const*,struct sockaddr*,int,int*) ;int flags; } ;


 int VAR_0 ;
 TYPE_4__* VAR_1 ;
 int FUNC_0 (int ,int *,TYPE_1__*,TYPE_1__*,char const*,struct sockaddr*,int,int*) ;

int
FUNC_1(krb5_context VAR_2,
    krb5_kdc_configuration *VAR_3,
    unsigned char *VAR_4,
    size_t VAR_5,
    krb5_data *VAR_6,
    krb5_boolean *VAR_7,
    const char *VAR_8,
    struct sockaddr *VAR_9,
    int VAR_10)
{
    krb5_error_code VAR_11;
    unsigned int VAR_12;
    krb5_data VAR_13;
    int VAR_14 = 0;

    VAR_13.data = VAR_4;
    VAR_13.length = VAR_5;

    for (VAR_12 = 0; VAR_1[VAR_12].process != ((void*)0); VAR_12++) {
 VAR_11 = (*VAR_1[VAR_12].process)(VAR_2, VAR_3, &VAR_13,
         VAR_6, VAR_8, VAR_9, VAR_10,
         &VAR_14);
 if (VAR_14) {
     if (VAR_1[VAR_12].flags & VAR_0)
  *VAR_7 = 0;
     return VAR_11;
 }
    }

    return -1;
}
