
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_char ;
struct rx_header {int const serviceId; int const callNumber; } ;
struct rx_cache_entry {int dport; void* opcode; void* serviceId; int server; int client; void* callnum; } ;
struct ip {int ip_dst; int ip_src; } ;
struct TYPE_3__ {int const* ndo_snapend; } ;
typedef TYPE_1__ netdissect_options ;
typedef int int32_t ;


 void* FUNC_0 (int const*) ;
 size_t VAR_0 ;
 int FUNC_1 (int *,int *,int) ;
 struct rx_cache_entry* VAR_1 ;
 size_t VAR_2 ;

__attribute__((used)) static void
FUNC_2(netdissect_options *VAR_3,
                const u_char *VAR_4, const struct ip *VAR_5, int VAR_6)
{
 struct rx_cache_entry *VAR_7;
 const struct rx_header *VAR_8 = (const struct rx_header *) VAR_4;

 if (VAR_3->ndo_snapend - VAR_4 + 1 <= (int)(sizeof(struct rx_header) + sizeof(int32_t)))
  return;

 VAR_7 = &VAR_1[VAR_2];

 if (++VAR_2 >= VAR_0)
  VAR_2 = 0;

 VAR_7->callnum = FUNC_0(&VAR_8->callNumber);
 FUNC_1(&VAR_7->client, &VAR_5->ip_src, sizeof(uint32_t));
 FUNC_1(&VAR_7->server, &VAR_5->ip_dst, sizeof(uint32_t));
 VAR_7->dport = VAR_6;
 VAR_7->serviceId = FUNC_0(&VAR_8->serviceId);
 VAR_7->opcode = FUNC_0(VAR_4 + sizeof(struct rx_header));
}
