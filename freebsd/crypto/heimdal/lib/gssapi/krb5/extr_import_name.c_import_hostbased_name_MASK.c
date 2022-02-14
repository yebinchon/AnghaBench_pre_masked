
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int * krb5_principal ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
typedef scalar_t__ gss_name_t ;
typedef TYPE_1__* gss_buffer_t ;
struct TYPE_3__ {int length; int value; } ;
typedef scalar_t__ OM_uint32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,int **,int *,char*,char*,int *) ;
 int FUNC_2 (int ,int *,int ) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (char*,int ,int) ;
 char* FUNC_5 (char*,char) ;

__attribute__((used)) static OM_uint32
FUNC_6 (OM_uint32 *VAR_6,
         krb5_context VAR_7,
         const gss_buffer_t VAR_8,
         gss_name_t *VAR_9)
{
    krb5_principal VAR_10 = ((void*)0);
    krb5_error_code VAR_11;
    char *VAR_12, *VAR_13, *VAR_14 = ((void*)0);

    VAR_12 = FUNC_3 (VAR_8->length + 1);
    if (VAR_12 == ((void*)0)) {
 *VAR_6 = VAR_0;
 return VAR_2;
    }
    FUNC_4 (VAR_12,
     VAR_8->value,
     VAR_8->length);
    VAR_12[VAR_8->length] = '\0';

    VAR_13 = FUNC_5 (VAR_12, '@');
    if (VAR_13 != ((void*)0)) {
 *VAR_13 = '\0';
 VAR_14 = VAR_13 + 1;
    }

    VAR_11 = FUNC_1(VAR_7, &VAR_10, ((void*)0), VAR_12, VAR_14, ((void*)0));
    FUNC_0 (VAR_12);
    *VAR_6 = VAR_11;
    if (VAR_11 == VAR_3 || VAR_11 == VAR_4)
 return VAR_1;
    else if (VAR_11)
 return VAR_2;

    FUNC_2(VAR_7, VAR_10, VAR_5);
    *VAR_9 = (gss_name_t)VAR_10;

    return 0;
}
