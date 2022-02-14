
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int T; int Z; int X; int Y; } ;
typedef TYPE_1__ ge25519_p3 ;
struct TYPE_6__ {int T2d; int Z; int YminusX; int YplusX; } ;
typedef TYPE_2__ ge25519_cached ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;

void
FUNC_4(ge25519_cached *VAR_1, const ge25519_p3 *VAR_2)
{
    FUNC_0(VAR_1->YplusX, VAR_2->Y, VAR_2->X);
    FUNC_3(VAR_1->YminusX, VAR_2->Y, VAR_2->X);
    FUNC_1(VAR_1->Z, VAR_2->Z);
    FUNC_2(VAR_1->T2d, VAR_2->T, VAR_0);
}
