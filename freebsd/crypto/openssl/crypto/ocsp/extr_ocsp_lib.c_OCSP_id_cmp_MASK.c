
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int serialNumber; } ;
typedef TYPE_1__ OCSP_CERTID ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (TYPE_1__ const*,TYPE_1__ const*) ;

int FUNC_2(const OCSP_CERTID *VAR_0, const OCSP_CERTID *VAR_1)
{
    int VAR_2;
    VAR_2 = FUNC_1(VAR_0, VAR_1);
    if (VAR_2)
        return VAR_2;
    return FUNC_0(&VAR_0->serialNumber, &VAR_1->serialNumber);
}
