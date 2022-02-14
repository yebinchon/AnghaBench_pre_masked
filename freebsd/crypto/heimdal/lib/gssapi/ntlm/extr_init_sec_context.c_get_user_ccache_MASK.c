
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct ntlm_buf {int * data; int length; } ;
typedef TYPE_1__* ntlm_name ;
typedef int krb5_principal ;
typedef int krb5_error_code ;
struct TYPE_8__ {int length; int data; } ;
typedef TYPE_2__ krb5_data ;
typedef int * krb5_context ;
typedef int * krb5_ccache ;
struct TYPE_7__ {int domain; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char**,char*,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int **) ;
 int FUNC_3 (int *,int *,int *,char*,TYPE_2__*) ;
 int FUNC_4 (int *,int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int **) ;
 int FUNC_11 (int *,int ,int ,char**) ;
 int * FUNC_12 (int ) ;
 int FUNC_13 (int *,int ,int ) ;

__attribute__((used)) static int
FUNC_14(const ntlm_name VAR_2, char **VAR_3, struct ntlm_buf *VAR_4)
{
    krb5_context VAR_5 = ((void*)0);
    krb5_principal VAR_6;
    krb5_ccache VAR_7 = ((void*)0);
    krb5_error_code VAR_8;
    char *VAR_9;
    krb5_data VAR_10;

    *VAR_3 = ((void*)0);
    FUNC_7(&VAR_10);
    VAR_4->length = 0;
    VAR_4->data = ((void*)0);

    VAR_8 = FUNC_10(&VAR_5);
    if (VAR_8)
 return VAR_8;

    VAR_8 = FUNC_2(VAR_5, &VAR_7);
    if (VAR_8)
 goto out;

    VAR_8 = FUNC_4(VAR_5, VAR_7, &VAR_6);
    if (VAR_8)
 goto out;

    VAR_8 = FUNC_11(VAR_5, VAR_6,
      VAR_1,
      VAR_3);
    FUNC_9(VAR_5, VAR_6);
    if (VAR_8)
 goto out;

    FUNC_0(&VAR_9, "ntlm-key-%d", VAR_2->domain);
    if (VAR_9 == ((void*)0)) {
 FUNC_5(VAR_5);
 VAR_8 = VAR_0;
 goto out;
    }

    VAR_8 = FUNC_3(VAR_5, VAR_7, ((void*)0),
        VAR_9, &VAR_10);
    if (VAR_8)
 goto out;

    VAR_4->data = FUNC_12(VAR_10.length);
    if (VAR_4->data == ((void*)0)) {
 VAR_8 = VAR_0;
 goto out;
    }
    VAR_4->length = VAR_10.length;
    FUNC_13(VAR_4->data, VAR_10.data, VAR_10.length);

 out:
    FUNC_6(&VAR_10);
    if (VAR_7)
 FUNC_1(VAR_5, VAR_7);

    FUNC_8(VAR_5);

    return VAR_8;
}
