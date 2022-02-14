
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int password ;
typedef int p ;
typedef int krb5_principal ;
typedef char krb5_keyblock ;
typedef int krb5_data ;
typedef scalar_t__ kadm5_ret_t ;
struct TYPE_3__ {int context; int ccache; } ;
typedef TYPE_1__ kadm5_ad_context ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (char*,int,char**) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (int ,scalar_t__,char*) ;
 scalar_t__ FUNC_7 (int ,int ,char*,int ,int*,int *,int *) ;
 scalar_t__ FUNC_8 (int ,int ,char*,int ,char*) ;
 char* FUNC_9 (int) ;
 int FUNC_10 (char*,int ,int) ;

__attribute__((used)) static kadm5_ret_t
FUNC_11(void *VAR_3,
      krb5_principal VAR_4,
      krb5_keyblock **VAR_5,
      int *VAR_6)
{
    kadm5_ad_context *VAR_7 = VAR_3;
    *VAR_5 = ((void*)0);
    *VAR_6 = 0;

    FUNC_6(VAR_7->context, VAR_2, "Function not implemented");
    return VAR_2;

}
