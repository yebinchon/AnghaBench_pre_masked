
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int krb5_principal ;
typedef int krb5_data ;
typedef scalar_t__ kadm5_ret_t ;
struct TYPE_3__ {int ccache; int context; } ;
typedef TYPE_1__ kadm5_ad_context ;


 scalar_t__ FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ,int ,char const*,int ,int*,int *,int *) ;

__attribute__((used)) static kadm5_ret_t
FUNC_4(void *VAR_0,
     krb5_principal VAR_1,
     const char *VAR_2)
{
    kadm5_ad_context *VAR_3 = VAR_0;
    krb5_data VAR_4, VAR_5;
    int VAR_6;
    kadm5_ret_t VAR_7;

    VAR_7 = FUNC_0(VAR_3, ((void*)0));
    if (VAR_7)
 return VAR_7;

    FUNC_2 (&VAR_4);
    FUNC_2 (&VAR_5);

    VAR_7 = FUNC_3 (VAR_3->context,
       VAR_3->ccache,
       VAR_2,
       VAR_1,
       &VAR_6,
       &VAR_4,
       &VAR_5);

    FUNC_1 (&VAR_4);
    FUNC_1 (&VAR_5);



    return VAR_7;
}
