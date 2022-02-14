
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_3__ {int io; int did; int subdid; int es; int port; scalar_t__ upper; } ;
struct TYPE_4__ {scalar_t__ u64; TYPE_1__ io; } ;
typedef TYPE_2__ cvmx_pcie_address_t ;



uint64_t FUNC_0(int VAR_0)
{
    cvmx_pcie_address_t VAR_1;
    VAR_1.u64 = 0;
    VAR_1.io.upper = 0;
    VAR_1.io.io = 1;
    VAR_1.io.did = 3;
    VAR_1.io.subdid = 2;
    VAR_1.io.es = 1;
    VAR_1.io.port = VAR_0;
    return VAR_1.u64;
}
