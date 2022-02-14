
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_3__ {int upper; int io; int did; int endian_swap; unsigned int bus; unsigned int dev; unsigned int func; unsigned int reg; int subdid; } ;
struct TYPE_4__ {scalar_t__ u64; TYPE_1__ s; } ;
typedef TYPE_2__ octeon_pci_config_space_address_t ;


 int VAR_0 ;

__attribute__((used)) static uint64_t
FUNC_0(unsigned VAR_1, unsigned VAR_2, unsigned VAR_3, unsigned VAR_4)
{
 octeon_pci_config_space_address_t VAR_5;

 VAR_5.u64 = 0;
 VAR_5.s.upper = 2;
 VAR_5.s.io = 1;
 VAR_5.s.did = 3;
 VAR_5.s.subdid = VAR_0;
 VAR_5.s.endian_swap = 1;
 VAR_5.s.bus = VAR_1;
 VAR_5.s.dev = VAR_2;
 VAR_5.s.func = VAR_3;
 VAR_5.s.reg = VAR_4;

 return (VAR_5.u64);
}
