
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int krb5_context ;
typedef scalar_t__ kadm5_ret_t ;
struct TYPE_11__ {int mask; char const* realm; } ;
typedef TYPE_1__ kadm5_config_params ;
struct TYPE_12__ {void* client_name; int * realm; int context; int caller; } ;
typedef TYPE_2__ kadm5_ad_context ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*,char const*) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ,int **) ;
 scalar_t__ FUNC_6 (int ,char const*,int *) ;
 TYPE_2__* FUNC_7 (int) ;
 int FUNC_8 (TYPE_2__*,int ,int) ;
 int FUNC_9 (TYPE_2__*) ;
 void* FUNC_10 (char const*) ;

kadm5_ret_t
FUNC_11(krb5_context VAR_3,
    const char *VAR_4,
    const char *VAR_5,
    const char *VAR_6,
    kadm5_config_params *VAR_7,
    unsigned long VAR_8,
    unsigned long VAR_9,
    void **VAR_10)
{
    kadm5_ret_t VAR_11;
    kadm5_ad_context *VAR_12;

    VAR_12 = FUNC_7(sizeof(*VAR_12));
    if(VAR_12 == ((void*)0))
 return VAR_0;
    FUNC_8(VAR_12, 0, sizeof(*VAR_12));
    FUNC_9(VAR_12);

    VAR_12->context = VAR_3;
    FUNC_4 (VAR_3, VAR_2);

    VAR_11 = FUNC_6(VAR_12->context, VAR_4, &VAR_12->caller);
    if(VAR_11) {
 FUNC_2(VAR_12);
 return VAR_11;
    }

    if(VAR_7->mask & VAR_1) {
 VAR_11 = 0;
 VAR_12->realm = FUNC_10(VAR_7->realm);
 if (VAR_12->realm == ((void*)0))
     VAR_11 = VAR_0;
    } else
 VAR_11 = FUNC_5(VAR_12->context, &VAR_12->realm);
    if (VAR_11) {
 FUNC_2(VAR_12);
 return VAR_11;
    }

    VAR_12->client_name = FUNC_10(VAR_4);

    if(VAR_5 != ((void*)0) && *VAR_5 != '\0')
 VAR_11 = FUNC_1(VAR_12, VAR_5);
    else
 VAR_11 = FUNC_1(VAR_12, ((void*)0));
    if(VAR_11) {
 FUNC_3(VAR_12);
 return VAR_11;
    }
    *VAR_10 = VAR_12;
    return 0;
}
