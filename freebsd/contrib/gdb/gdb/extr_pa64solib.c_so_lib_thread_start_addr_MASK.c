
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tls_start_addr; } ;
struct so_list {TYPE_1__ pa64_solib_desc; } ;
typedef int CORE_ADDR ;



CORE_ADDR
FUNC_0 (struct so_list *VAR_0)
{
  return VAR_0->pa64_solib_desc.tls_start_addr;
}
