
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int rfc5114_param; int param_nid; } ;
struct TYPE_9__ {TYPE_2__* data; } ;
typedef TYPE_1__ EVP_PKEY_CTX ;
typedef TYPE_2__ DH_PKEY_CTX ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int VAR_2 ;
 int FUNC_6 (char const*) ;
 int FUNC_7 (char const*) ;
 scalar_t__ FUNC_8 (char const*,char*) ;

__attribute__((used)) static int FUNC_9(EVP_PKEY_CTX *VAR_3,
                            const char *VAR_4, const char *VAR_5)
{
    if (FUNC_8(VAR_4, "dh_paramgen_prime_len") == 0) {
        int VAR_6;
        VAR_6 = FUNC_7(VAR_5);
        return FUNC_3(VAR_3, VAR_6);
    }
    if (FUNC_8(VAR_4, "dh_rfc5114") == 0) {
        DH_PKEY_CTX *VAR_7 = VAR_3->data;
        int VAR_8;
        VAR_8 = FUNC_7(VAR_5);
        if (VAR_8 < 0 || VAR_8 > 3)
            return -2;
        VAR_7->rfc5114_param = VAR_8;
        return 1;
    }
    if (FUNC_8(VAR_4, "dh_param") == 0) {
        DH_PKEY_CTX *VAR_9 = VAR_3->data;
        int VAR_10 = FUNC_6(VAR_5);

        if (VAR_10 == VAR_2) {
            FUNC_0(VAR_0, VAR_1);
            return -2;
        }
        VAR_9->param_nid = VAR_10;
        return 1;
    }
    if (FUNC_8(VAR_4, "dh_paramgen_generator") == 0) {
        int VAR_11;
        VAR_11 = FUNC_7(VAR_5);
        return FUNC_2(VAR_3, VAR_11);
    }
    if (FUNC_8(VAR_4, "dh_paramgen_subprime_len") == 0) {
        int VAR_12;
        VAR_12 = FUNC_7(VAR_5);
        return FUNC_4(VAR_3, VAR_12);
    }
    if (FUNC_8(VAR_4, "dh_paramgen_type") == 0) {
        int VAR_13;
        VAR_13 = FUNC_7(VAR_5);
        return FUNC_5(VAR_3, VAR_13);
    }
    if (FUNC_8(VAR_4, "dh_pad") == 0) {
        int VAR_14;
        VAR_14 = FUNC_7(VAR_5);
        return FUNC_1(VAR_3, VAR_14);
    }
    return -2;
}
