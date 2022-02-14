
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int valid_policy; } ;
typedef TYPE_1__ X509_POLICY_DATA ;
struct TYPE_11__ {int * data; TYPE_1__* anyPolicy; } ;
typedef TYPE_2__ X509_POLICY_CACHE ;
struct TYPE_12__ {int ex_flags; TYPE_2__* policy_cache; } ;
typedef TYPE_3__ X509 ;
typedef int POLICYINFO ;
typedef int CERTIFICATEPOLICIES ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ) ;
 int VAR_5 ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int * FUNC_6 (int *,int) ;
 scalar_t__ FUNC_7 (int *,TYPE_1__*) ;
 int * FUNC_8 (int ) ;
 int FUNC_9 (int *,int (*) (TYPE_1__*)) ;
 int FUNC_10 (int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_11(X509 *VAR_6,
                               CERTIFICATEPOLICIES *VAR_7, int VAR_8)
{
    int VAR_9, VAR_10, VAR_11 = 0;
    X509_POLICY_CACHE *VAR_12 = VAR_6->policy_cache;
    X509_POLICY_DATA *VAR_13 = ((void*)0);
    POLICYINFO *VAR_14;

    if ((VAR_10 = FUNC_4(VAR_7)) <= 0)
        goto bad_policy;
    VAR_12->data = FUNC_8(VAR_5);
    if (VAR_12->data == ((void*)0)) {
        FUNC_1(VAR_4, VAR_0);
        goto just_cleanup;
    }
    for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {
        VAR_14 = FUNC_6(VAR_7, VAR_9);
        VAR_13 = FUNC_3(VAR_14, ((void*)0), VAR_8);
        if (VAR_13 == ((void*)0)) {
            FUNC_1(VAR_4, VAR_0);
            goto just_cleanup;
        }



        if (FUNC_0(VAR_13->valid_policy) == VAR_2) {
            if (VAR_12->anyPolicy) {
                VAR_11 = -1;
                goto bad_policy;
            }
            VAR_12->anyPolicy = VAR_13;
        } else if (FUNC_7(VAR_12->data, VAR_13) >=0 ) {
            VAR_11 = -1;
            goto bad_policy;
        } else if (!FUNC_10(VAR_12->data, VAR_13)) {
            FUNC_1(VAR_4, VAR_0);
            goto bad_policy;
        }
        VAR_13 = ((void*)0);
    }
    VAR_11 = 1;

 bad_policy:
    if (VAR_11 == -1)
        VAR_6->ex_flags |= VAR_1;
    FUNC_2(VAR_13);
 just_cleanup:
    FUNC_5(VAR_7, VAR_3);
    if (VAR_11 <= 0) {
        FUNC_9(VAR_12->data, FUNC_2);
        VAR_12->data = ((void*)0);
    }
    return VAR_11;
}
