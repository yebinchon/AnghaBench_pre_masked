
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
         const char *VAR_7,
         struct sockaddr *VAR_8,
         int VAR_9)
{
    krb5_error_code VAR_10;
    unsigned int VAR_11;
    krb5_data VAR_12;
    int VAR_13 = 0;

    VAR_12.data = VAR_4;
    VAR_12.length = VAR_5;

    for (VAR_11 = 0; VAR_1[VAR_11].process != ((void*)0); VAR_11++) {
 if ((VAR_1[VAR_11].flags & VAR_0) == 0)
     continue;
 VAR_10 = (*VAR_1[VAR_11].process)(VAR_2, VAR_3, &VAR_12,
         VAR_6, VAR_7, VAR_8, VAR_9,
         &VAR_13);
 if (VAR_13)
     return VAR_10;
    }

    return -1;
}
