
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ndo_vflag; } ;
typedef TYPE_1__ netdissect_options ;



__attribute__((used)) static int
FUNC_0(netdissect_options *VAR_0, int VAR_1)
{
    return VAR_1 - 1 >= VAR_0->ndo_vflag && VAR_0->ndo_vflag < 3;
}
