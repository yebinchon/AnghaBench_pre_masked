
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* pmeth; } ;
struct TYPE_6__ {int (* ctrl_str ) (TYPE_2__*,char const*,char const*) ;} ;
typedef TYPE_2__ EVP_PKEY_CTX ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ,int ,char const*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 int FUNC_3 (TYPE_2__*,char const*,char const*) ;

int FUNC_4(EVP_PKEY_CTX *VAR_4,
                          const char *VAR_5, const char *VAR_6)
{
    if (!VAR_4 || !VAR_4->pmeth || !VAR_4->pmeth->ctrl_str) {
        FUNC_1(VAR_0, VAR_3);
        return -2;
    }
    if (FUNC_2(VAR_5, "digest") == 0)
        return FUNC_0(VAR_4, VAR_2, VAR_1,
                               VAR_6);
    return VAR_4->pmeth->ctrl_str(VAR_4, VAR_5, VAR_6);
}
