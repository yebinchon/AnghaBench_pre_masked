
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct doall_enc_ciphers {int n; int bio; } ;
struct TYPE_3__ {scalar_t__* name; } ;
typedef TYPE_1__ OBJ_NAME ;
typedef int EVP_CIPHER ;


 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int const*) ;
 scalar_t__ FUNC_2 (int const*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_3 (scalar_t__*) ;
 int FUNC_4 (unsigned char) ;

__attribute__((used)) static void FUNC_5(const OBJ_NAME *VAR_2, void *VAR_3)
{
    struct doall_enc_ciphers *VAR_4 = (struct doall_enc_ciphers *)VAR_3;
    const EVP_CIPHER *VAR_5;

    if (!FUNC_4((unsigned char)*VAR_2->name))
        return;


    VAR_5 = FUNC_3(VAR_2->name);
    if (VAR_5 == ((void*)0) ||
            (FUNC_1(VAR_5) & VAR_0) != 0 ||
            FUNC_2(VAR_5) == VAR_1)
        return;

    FUNC_0(VAR_4->bio, "-%-25s", VAR_2->name);
    if (++VAR_4->n == 3) {
        FUNC_0(VAR_4->bio, "\n");
        VAR_4->n = 0;
    } else
        FUNC_0(VAR_4->bio, " ");
}
