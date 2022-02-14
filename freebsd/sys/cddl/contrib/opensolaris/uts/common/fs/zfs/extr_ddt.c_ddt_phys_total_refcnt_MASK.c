
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_5__ {TYPE_1__* dde_phys; } ;
typedef TYPE_2__ ddt_entry_t ;
struct TYPE_4__ {scalar_t__ ddp_refcnt; } ;


 int VAR_0 ;
 int VAR_1 ;

uint64_t
FUNC_0(const ddt_entry_t *VAR_2)
{
 uint64_t VAR_3 = 0;

 for (int VAR_4 = VAR_0; VAR_4 <= VAR_1; VAR_4++)
  VAR_3 += VAR_2->dde_phys[VAR_4].ddp_refcnt;

 return (VAR_3);
}
