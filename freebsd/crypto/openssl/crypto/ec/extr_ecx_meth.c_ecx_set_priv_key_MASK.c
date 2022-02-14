
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* ameth; } ;
struct TYPE_5__ {int pkey_id; } ;
typedef TYPE_2__ EVP_PKEY ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,int *,unsigned char const*,size_t,int ) ;

__attribute__((used)) static int FUNC_1(EVP_PKEY *VAR_1, const unsigned char *VAR_2,
                            size_t VAR_3)
{
    return FUNC_0(VAR_1, VAR_1->ameth->pkey_id, ((void*)0), VAR_2, VAR_3,
                       VAR_0);
}
