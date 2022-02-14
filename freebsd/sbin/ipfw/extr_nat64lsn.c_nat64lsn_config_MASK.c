
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef void* uint16_t ;
struct TYPE_3__ {int opheader; int ntlv; } ;
typedef TYPE_1__ ipfw_obj_header ;
struct TYPE_4__ {int flags; int states_chunks; void* st_icmp_ttl; void* st_udp_ttl; void* st_estab_ttl; void* st_close_ttl; void* st_syn_ttl; void* pg_delete_delay; void* nh_delete_delay; void* jmaxlen; void* max_ports; } ;
typedef TYPE_2__ ipfw_nat64lsn_cfg ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,int *,size_t*) ;
 scalar_t__ FUNC_2 (int ,int *,int) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int ,char*,char*) ;
 int FUNC_6 (char**,int ,int) ;
 int FUNC_7 (int *,char const*,int ) ;
 void* FUNC_8 (char*,char*) ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_9(const char *VAR_6, uint8_t VAR_7, int VAR_8, char **VAR_9)
{
 char VAR_10[sizeof(ipfw_obj_header) + sizeof(ipfw_nat64lsn_cfg)];
 ipfw_nat64lsn_cfg *VAR_11;
 ipfw_obj_header *VAR_12;
 size_t VAR_13;
 char *VAR_14;
 int VAR_15;

 if (VAR_8 == 0)
  FUNC_4(VAR_1, "config options required");
 FUNC_6(&VAR_10, 0, sizeof(VAR_10));
 VAR_12 = (ipfw_obj_header *)VAR_10;
 VAR_11 = (ipfw_nat64lsn_cfg *)(VAR_12 + 1);
 VAR_13 = sizeof(VAR_10);

 FUNC_7(&VAR_12->ntlv, VAR_6, VAR_7);
 if (FUNC_1(VAR_2, &VAR_12->opheader, &VAR_13) != 0)
  FUNC_3(VAR_0, "failed to get config for instance %s", VAR_6);

 while (VAR_8 > 0) {
  VAR_15 = FUNC_5(VAR_5, *VAR_9, "option");
  VAR_14 = *VAR_9;
  VAR_8--; VAR_9++;

  switch (VAR_15) {
  case 136:
   FUNC_0("Max per-user ports required");
   VAR_11->max_ports = FUNC_8(*VAR_9, VAR_14);
   VAR_8--; VAR_9++;
   break;
  case 139:
   FUNC_0("job queue length required");
   VAR_11->jmaxlen = FUNC_8(*VAR_9, VAR_14);
   VAR_8--; VAR_9++;
   break;
  case 141:
   FUNC_0("host delete delay required");
   VAR_11->nh_delete_delay = (uint16_t)FUNC_8(
       *VAR_9, VAR_14);
   VAR_8--; VAR_9++;
   break;
  case 135:
   FUNC_0("portgroup delete delay required");
   VAR_11->pg_delete_delay = (uint16_t)FUNC_8(
       *VAR_9, VAR_14);
   VAR_8--; VAR_9++;
   break;
  case 129:
   FUNC_0("tcp syn age required");
   VAR_11->st_syn_ttl = (uint16_t)FUNC_8(
       *VAR_9, VAR_14);
   VAR_8--; VAR_9++;
   break;
  case 131:
   FUNC_0("tcp close age required");
   VAR_11->st_close_ttl = (uint16_t)FUNC_8(
       *VAR_9, VAR_14);
   VAR_8--; VAR_9++;
   break;
  case 130:
   FUNC_0("tcp est age required");
   VAR_11->st_estab_ttl = (uint16_t)FUNC_8(
       *VAR_9, VAR_14);
   VAR_8--; VAR_9++;
   break;
  case 128:
   FUNC_0("udp age required");
   VAR_11->st_udp_ttl = (uint16_t)FUNC_8(
       *VAR_9, VAR_14);
   VAR_8--; VAR_9++;
   break;
  case 140:
   FUNC_0("icmp age required");
   VAR_11->st_icmp_ttl = (uint16_t)FUNC_8(
       *VAR_9, VAR_14);
   VAR_8--; VAR_9++;
   break;
  case 132:
   FUNC_0("number of chunks required");
   VAR_11->states_chunks = (uint8_t)FUNC_8(
       *VAR_9, VAR_14);
   VAR_8--; VAR_9++;
   break;
  case 138:
   VAR_11->flags |= VAR_4;
   break;
  case 137:
   VAR_11->flags &= ~VAR_4;
   break;
  case 134:
   VAR_11->flags |= VAR_3;
   break;
  case 133:
   VAR_11->flags &= ~VAR_3;
   break;
  default:
   FUNC_4(VAR_1, "Can't change %s option", VAR_14);
  }
 }

 if (FUNC_2(VAR_2, &VAR_12->opheader, sizeof(VAR_10)) != 0)
  FUNC_3(VAR_0, "nat64lsn instance configuration failed");
}
