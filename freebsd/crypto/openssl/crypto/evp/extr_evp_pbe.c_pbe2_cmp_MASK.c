
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pbe_type; int pbe_nid; } ;
typedef TYPE_1__ EVP_PBE_CTL ;



__attribute__((used)) static int FUNC_0(const EVP_PBE_CTL *VAR_0, const EVP_PBE_CTL *VAR_1)
{
    int VAR_2 = VAR_0->pbe_type - VAR_1->pbe_type;
    if (VAR_2)
        return VAR_2;
    else
        return VAR_0->pbe_nid - VAR_1->pbe_nid;
}
