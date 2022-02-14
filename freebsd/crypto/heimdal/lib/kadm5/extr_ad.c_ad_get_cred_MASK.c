
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int krb5_ccache ;
typedef scalar_t__ kadm5_ret_t ;
struct TYPE_3__ {int ccache; int client_name; int context; int realm; } ;
typedef TYPE_1__ kadm5_ad_context ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,char*,char const*,int ,int *,int *,int *) ;
 int FUNC_1 (char**,char*,int ,int ,int ) ;
 int FUNC_2 (char*) ;
 int VAR_2 ;

__attribute__((used)) static kadm5_ret_t
FUNC_3(kadm5_ad_context *VAR_3, const char *VAR_4)
{
    kadm5_ret_t VAR_5;
    krb5_ccache VAR_6;
    char *VAR_7;

    if (VAR_3->ccache)
 return 0;

    FUNC_1(&VAR_7, "%d/%d@%d", VAR_1,
      VAR_3->realm, VAR_3->realm);
    if (VAR_7 == ((void*)0))
 return VAR_0;

    VAR_5 = FUNC_0(VAR_3->context,
      VAR_3->client_name,
      VAR_7,
      VAR_4, VAR_2,
      ((void*)0), ((void*)0), &VAR_6);
    FUNC_2(VAR_7);
    if(VAR_5)
 return VAR_5;
    VAR_3->ccache = VAR_6;
    return 0;
}
