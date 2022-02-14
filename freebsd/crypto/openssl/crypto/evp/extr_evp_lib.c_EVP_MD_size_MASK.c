
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int md_size; } ;
typedef TYPE_1__ EVP_MD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;

int FUNC_1(const EVP_MD *VAR_2)
{
    if (!VAR_2) {
        FUNC_0(VAR_0, VAR_1);
        return -1;
    }
    return VAR_2->md_size;
}
