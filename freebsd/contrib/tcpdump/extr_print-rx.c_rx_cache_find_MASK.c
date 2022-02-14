
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct rx_header {int serviceId; int callNumber; } ;
struct TYPE_4__ {scalar_t__ s_addr; } ;
struct TYPE_3__ {scalar_t__ s_addr; } ;
struct rx_cache_entry {scalar_t__ callnum; scalar_t__ serviceId; int dport; int opcode; TYPE_2__ server; TYPE_1__ client; } ;
struct ip {int ip_src; int ip_dst; } ;
typedef int int32_t ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__*,int *,int) ;
 struct rx_cache_entry* VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_2(const struct rx_header *VAR_3, const struct ip *VAR_4, int VAR_5,
       int32_t *VAR_6)
{
 int VAR_7;
 struct rx_cache_entry *VAR_8;
 uint32_t VAR_9;
 uint32_t VAR_10;

 FUNC_1(&VAR_9, &VAR_4->ip_dst, sizeof(uint32_t));
 FUNC_1(&VAR_10, &VAR_4->ip_src, sizeof(uint32_t));



 VAR_7 = VAR_2;
 do {
  VAR_8 = &VAR_1[VAR_7];
  if (VAR_8->callnum == FUNC_0(&VAR_3->callNumber) &&
      VAR_8->client.s_addr == VAR_9 &&
      VAR_8->server.s_addr == VAR_10 &&
      VAR_8->serviceId == FUNC_0(&VAR_3->serviceId) &&
      VAR_8->dport == VAR_5) {



   VAR_2 = VAR_7;
   *VAR_6 = VAR_8->opcode;
   return(1);
  }
  if (++VAR_7 >= VAR_0)
   VAR_7 = 0;
 } while (VAR_7 != VAR_2);


 return(0);
}
