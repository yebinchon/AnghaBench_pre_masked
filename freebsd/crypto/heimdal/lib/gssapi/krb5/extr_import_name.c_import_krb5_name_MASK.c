
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int krb5_context ;
typedef int gss_name_t ;
typedef TYPE_1__* gss_buffer_t ;
struct TYPE_3__ {int length; int value; } ;
typedef int OM_uint32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (int *,int ,char*,int *) ;

__attribute__((used)) static OM_uint32
FUNC_4 (OM_uint32 *VAR_2,
    krb5_context VAR_3,
    const gss_buffer_t VAR_4,
    gss_name_t *VAR_5)
{
    OM_uint32 VAR_6;
    char *VAR_7;

    VAR_7 = FUNC_1 (VAR_4->length + 1);
    if (VAR_7 == ((void*)0)) {
 *VAR_2 = VAR_0;
 return VAR_1;
    }
    FUNC_2 (VAR_7,
     VAR_4->value,
     VAR_4->length);
    VAR_7[VAR_4->length] = '\0';

    VAR_6 = FUNC_3(VAR_2, VAR_3, VAR_7, VAR_5);
    FUNC_0(VAR_7);

    return VAR_6;
}
