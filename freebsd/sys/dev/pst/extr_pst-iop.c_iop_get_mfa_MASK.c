
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct iop_softc {TYPE_1__* reg; } ;
struct TYPE_2__ {int iqueue; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;

u_int32_t
FUNC_2(struct iop_softc *VAR_0)
{
    u_int32_t VAR_1;
    int VAR_2 = 10000;

    while ((VAR_1 = VAR_0->reg->iqueue) == 0xffffffff && VAR_2) {
 FUNC_0(1000);
 VAR_2--;
    }
    if (!VAR_2)
 FUNC_1("pstiop: no free mfa\n");
    return VAR_1;
}
