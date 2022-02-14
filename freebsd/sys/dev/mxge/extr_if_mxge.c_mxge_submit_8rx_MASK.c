
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef void* uint32_t ;
struct TYPE_6__ {int addr_low; } ;
typedef TYPE_1__ mcp_kreq_ether_recv_t ;


 int FUNC_0 (TYPE_1__ volatile*,TYPE_1__*,int) ;
 int FUNC_1 () ;

__attribute__((used)) static inline void
FUNC_2(volatile mcp_kreq_ether_recv_t *VAR_0,
  mcp_kreq_ether_recv_t *VAR_1)
{
 uint32_t VAR_2;

 VAR_2 = VAR_1->addr_low;
 VAR_1->addr_low = 0xffffffff;
 FUNC_0(VAR_0, VAR_1, 4 * sizeof (*VAR_1));
 FUNC_1();
 FUNC_0(VAR_0 + 4, VAR_1 + 4, 4 * sizeof (*VAR_1));
 FUNC_1();
 VAR_1->addr_low = VAR_2;
 VAR_0->addr_low = VAR_2;
 FUNC_1();
}
