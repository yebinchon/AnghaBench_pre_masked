
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ operation; TYPE_1__* pmeth; } ;
struct TYPE_5__ {int (* verify ) (TYPE_2__*,unsigned char const*,size_t,unsigned char const*,size_t) ;} ;
typedef TYPE_2__ EVP_PKEY_CTX ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_2__*,unsigned char const*,size_t,unsigned char const*,size_t) ;

int FUNC_2(EVP_PKEY_CTX *VAR_4,
                    const unsigned char *VAR_5, size_t VAR_6,
                    const unsigned char *VAR_7, size_t VAR_8)
{
    if (!VAR_4 || !VAR_4->pmeth || !VAR_4->pmeth->verify) {
        FUNC_0(VAR_0,
               VAR_2);
        return -2;
    }
    if (VAR_4->operation != VAR_1) {
        FUNC_0(VAR_0, VAR_3);
        return -1;
    }
    return VAR_4->pmeth->verify(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
}
