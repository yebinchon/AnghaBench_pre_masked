
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pkey; int pkeyalg; int version; } ;
typedef TYPE_1__ PKCS8_PRIV_KEY_INFO ;
typedef int ASN1_OBJECT ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,unsigned char*,int) ;
 int FUNC_2 (int ,int *,int,void*) ;

int FUNC_3(PKCS8_PRIV_KEY_INFO *VAR_0, ASN1_OBJECT *VAR_1,
                    int VAR_2,
                    int VAR_3, void *VAR_4, unsigned char *VAR_5, int VAR_6)
{
    if (VAR_2 >= 0) {
        if (!FUNC_0(VAR_0->version, VAR_2))
            return 0;
    }
    if (!FUNC_2(VAR_0->pkeyalg, VAR_1, VAR_3, VAR_4))
        return 0;
    if (VAR_5)
        FUNC_1(VAR_0->pkey, VAR_5, VAR_6);
    return 1;
}
