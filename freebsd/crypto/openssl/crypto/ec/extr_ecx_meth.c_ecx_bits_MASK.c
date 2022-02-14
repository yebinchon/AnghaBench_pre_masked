
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* ameth; } ;
struct TYPE_4__ {int pkey_id; } ;
typedef TYPE_2__ EVP_PKEY ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(const EVP_PKEY *VAR_3)
{
    if (FUNC_0(VAR_3->ameth->pkey_id)) {
        return VAR_1;
    } else if(FUNC_1(VAR_3->ameth->pkey_id)) {
        return VAR_2;
    } else {
        return VAR_0;
    }
}
