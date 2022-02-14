
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uint8_t ;
typedef void* uint16_t ;
struct TYPE_3__ {int count; int objsize; int size; int opheader; } ;
typedef TYPE_1__ ipfw_obj_lheader ;
struct TYPE_4__ {int plen6; int plen4; int name; int flags; void* states_chunks; void* st_icmp_ttl; void* st_udp_ttl; void* st_estab_ttl; void* st_close_ttl; void* st_syn_ttl; void* pg_delete_delay; void* nh_delete_delay; void* max_ports; void* jmaxlen; int prefix6; int prefix4; void* set; } ;
typedef TYPE_2__ ipfw_nat64lsn_cfg ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ,int *,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int ,char*,char*) ;
 int FUNC_6 (int ,char*,int *) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (char**,int ,int) ;
 void* FUNC_9 (char*,char*) ;
 int FUNC_10 (char*,int ,int *,int*) ;
 int VAR_18 ;
 int FUNC_11 (int ,char const*,int) ;

__attribute__((used)) static void
FUNC_12(const char *VAR_19, uint8_t VAR_20, int VAR_21, char **VAR_22)
{
 char VAR_23[sizeof(ipfw_obj_lheader) + sizeof(ipfw_nat64lsn_cfg)];
 ipfw_nat64lsn_cfg *VAR_24;
 ipfw_obj_lheader *VAR_25;
 int VAR_26, VAR_27;
 char *VAR_28;

 FUNC_8(&VAR_23, 0, sizeof(VAR_23));
 VAR_25 = (ipfw_obj_lheader *)VAR_23;
 VAR_24 = (ipfw_nat64lsn_cfg *)(VAR_25 + 1);


 FUNC_6(VAR_1, "64:ff9b::", &VAR_24->prefix6);
 VAR_24->plen6 = 96;
 VAR_24->set = VAR_20;
 VAR_24->max_ports = VAR_10;
 VAR_24->jmaxlen = VAR_9;
 VAR_24->nh_delete_delay = VAR_7;
 VAR_24->pg_delete_delay = VAR_11;
 VAR_24->st_syn_ttl = VAR_14;
 VAR_24->st_estab_ttl = VAR_12;
 VAR_24->st_close_ttl = VAR_13;
 VAR_24->st_udp_ttl = VAR_15;
 VAR_24->st_icmp_ttl = VAR_8;
 VAR_27 = VAR_6;
 while (VAR_21 > 0) {
  VAR_26 = FUNC_5(VAR_18, *VAR_22, "option");
  VAR_28 = *VAR_22;
  VAR_21--; VAR_22++;

  switch (VAR_26) {
  case 136:
   FUNC_1("IPv4 prefix required");
   FUNC_10(*VAR_22, VAR_0, &VAR_24->prefix4,
       &VAR_24->plen4);
   VAR_27 |= VAR_5;
   VAR_21--; VAR_22++;
   break;
  case 135:
   FUNC_1("IPv6 prefix required");
   FUNC_10(*VAR_22, VAR_1, &VAR_24->prefix6,
       &VAR_24->plen6);
   if (FUNC_7(&VAR_24->prefix6,
       VAR_24->plen6) != 0 &&
       !FUNC_0(&VAR_24->prefix6))
    FUNC_4(VAR_3, "Bad prefix6 %s", *VAR_22);

   VAR_21--; VAR_22++;
   break;
  case 141:
   FUNC_1("job queue length required");
   VAR_24->jmaxlen = FUNC_9(*VAR_22, VAR_28);
   VAR_21--; VAR_22++;
   break;
  case 138:
   FUNC_1("Max per-user ports required");
   VAR_24->max_ports = FUNC_9(*VAR_22, VAR_28);
   VAR_21--; VAR_22++;
   break;
  case 143:
   FUNC_1("host delete delay required");
   VAR_24->nh_delete_delay = (uint16_t)FUNC_9(
       *VAR_22, VAR_28);
   VAR_21--; VAR_22++;
   break;
  case 137:
   FUNC_1("portgroup delete delay required");
   VAR_24->pg_delete_delay = (uint16_t)FUNC_9(
       *VAR_22, VAR_28);
   VAR_21--; VAR_22++;
   break;
  case 129:
   FUNC_1("tcp syn age required");
   VAR_24->st_syn_ttl = (uint16_t)FUNC_9(
       *VAR_22, VAR_28);
   VAR_21--; VAR_22++;
   break;
  case 131:
   FUNC_1("tcp close age required");
   VAR_24->st_close_ttl = (uint16_t)FUNC_9(
       *VAR_22, VAR_28);
   VAR_21--; VAR_22++;
   break;
  case 130:
   FUNC_1("tcp est age required");
   VAR_24->st_estab_ttl = (uint16_t)FUNC_9(
       *VAR_22, VAR_28);
   VAR_21--; VAR_22++;
   break;
  case 128:
   FUNC_1("udp age required");
   VAR_24->st_udp_ttl = (uint16_t)FUNC_9(
       *VAR_22, VAR_28);
   VAR_21--; VAR_22++;
   break;
  case 142:
   FUNC_1("icmp age required");
   VAR_24->st_icmp_ttl = (uint16_t)FUNC_9(
       *VAR_22, VAR_28);
   VAR_21--; VAR_22++;
   break;
  case 132:
   FUNC_1("number of chunks required");
   VAR_24->states_chunks = (uint8_t)FUNC_9(
       *VAR_22, VAR_28);
   VAR_21--; VAR_22++;
   break;
  case 140:
   VAR_24->flags |= VAR_17;
   break;
  case 139:
   VAR_24->flags &= ~VAR_17;
   break;
  case 134:
   VAR_24->flags |= VAR_16;
   break;
  case 133:
   VAR_24->flags &= ~VAR_16;
   break;
  }
 }


 if ((VAR_27 & VAR_5) != VAR_5)
  FUNC_4(VAR_3, "prefix4 required");

 VAR_25->count = 1;
 VAR_25->objsize = sizeof(*VAR_24);
 VAR_25->size = sizeof(VAR_23);
 FUNC_11(VAR_24->name, VAR_19, sizeof(VAR_24->name));
 if (FUNC_2(VAR_4, &VAR_25->opheader, sizeof(VAR_23)) != 0)
  FUNC_3(VAR_2, "nat64lsn instance creation failed");
}
