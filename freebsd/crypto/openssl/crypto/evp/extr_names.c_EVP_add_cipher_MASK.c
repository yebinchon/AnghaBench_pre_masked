
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nid; } ;
typedef TYPE_1__ EVP_CIPHER ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char const*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

int FUNC_3(const EVP_CIPHER *VAR_1)
{
    int VAR_2;

    if (VAR_1 == ((void*)0))
        return 0;

    VAR_2 = FUNC_0(FUNC_2(VAR_1->nid), VAR_0,
                     (const char *)VAR_1);
    if (VAR_2 == 0)
        return 0;
    VAR_2 = FUNC_0(FUNC_1(VAR_1->nid), VAR_0,
                     (const char *)VAR_1);
    return VAR_2;
}
