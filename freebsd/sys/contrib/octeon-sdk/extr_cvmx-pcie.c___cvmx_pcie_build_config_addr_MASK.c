
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_5__ {int pbnum; } ;
struct TYPE_7__ {TYPE_1__ s; int u32; } ;
typedef TYPE_3__ cvmx_pciercx_cfg006_t ;
struct TYPE_6__ {int upper; int io; int did; int subdid; int es; int port; int ty; int bus; int dev; int func; int reg; } ;
struct TYPE_8__ {scalar_t__ u64; TYPE_2__ config; } ;
typedef TYPE_4__ cvmx_pcie_address_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static inline uint64_t FUNC_2(int VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
    cvmx_pcie_address_t VAR_5;
    cvmx_pciercx_cfg006_t VAR_6;

    VAR_6 = FUNC_1(VAR_0, FUNC_0(VAR_0));
    if ((VAR_1 <= VAR_6) && (VAR_2 != 0))
        return 0;

    VAR_5.u64 = 0;
    VAR_5.config.upper = 2;
    VAR_5.config.io = 1;
    VAR_5.config.did = 3;
    VAR_5.config.subdid = 1;
    VAR_5.config.es = 1;
    VAR_5.config.port = VAR_0;
    VAR_5.config.ty = (VAR_1 > VAR_6);
    VAR_5.config.bus = VAR_1;
    VAR_5.config.dev = VAR_2;
    VAR_5.config.func = VAR_3;
    VAR_5.config.reg = VAR_4;
    return VAR_5.u64;
}
