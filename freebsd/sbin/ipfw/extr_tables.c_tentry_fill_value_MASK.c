
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct sockaddr_in6 {int sin6_scope_id; int sin6_addr; } ;
struct in_addr {int s_addr; } ;
struct addrinfo {scalar_t__ ai_addr; int ai_flags; int ai_family; } ;
struct TYPE_7__ {int nh4; int dscp; int zoneid; int nh6; void* limit; void* nat; void* fib; void* netgraph; void* skipto; void* divert; void* pipe; void* tag; } ;
typedef TYPE_2__ ipfw_table_value ;
struct TYPE_6__ {TYPE_2__ value; } ;
struct TYPE_8__ {TYPE_1__ v; } ;
typedef TYPE_3__ ipfw_obj_tentry ;
typedef int ipfw_obj_header ;
typedef int hints ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int VAR_5 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_6 ;
 int FUNC_1 (struct addrinfo*) ;
 int FUNC_2 (char*,int *,struct addrinfo*,struct addrinfo**) ;
 int FUNC_3 (int ,char*,int*) ;
 int FUNC_4 (char) ;
 scalar_t__ FUNC_5 (char*,struct in_addr*) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (struct addrinfo*,int ,int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int,TYPE_2__*) ;
 char* FUNC_10 (char*,char) ;
 void* FUNC_11 (char*,char**,int) ;
 int FUNC_12 (char*,char**,int ) ;

__attribute__((used)) static void
FUNC_13(ipfw_obj_header *VAR_7, ipfw_obj_tentry *VAR_8, char *VAR_9,
    uint8_t VAR_10, uint32_t VAR_11)
{
 struct addrinfo VAR_12, *VAR_13;
 uint32_t VAR_14, VAR_15, VAR_16;
 ipfw_table_value *VAR_17;
 uint32_t VAR_18;
 int VAR_19;
 char *VAR_20, *VAR_21, *VAR_22, *VAR_23, *VAR_24;
 struct in_addr VAR_25;

 VAR_17 = &VAR_8->v.value;


 if (VAR_11 == VAR_5) {

  VAR_16 = FUNC_12(VAR_9, &VAR_24, 0);
  if (*VAR_24 == '\0') {
   FUNC_9(VAR_16, VAR_17);
   return;
  }
  if (FUNC_3(VAR_0, VAR_9, &VAR_16) == 1) {
   FUNC_9(FUNC_8(VAR_16), VAR_17);
   return;
  }

  if (FUNC_5(VAR_9, &VAR_25) == 0) {
   FUNC_9(FUNC_8(VAR_25.s_addr), VAR_17);
   return;
  }
  FUNC_0(VAR_3, "Unable to parse value %s", VAR_9);
 }







 VAR_23 = VAR_9;
 VAR_22 = ((void*)0);
 for (VAR_18 = 1; VAR_18 < (1 << 31); VAR_18 *= 2) {
  if ((VAR_15 = (VAR_11 & VAR_18)) == 0)
   continue;
  VAR_11 &= ~VAR_15;

  if ((VAR_20 = FUNC_10(VAR_23, ',')) != ((void*)0))
   *VAR_20 = '\0';

  switch (VAR_15) {
  case 128:
   VAR_17->tag = FUNC_11(VAR_23, &VAR_21, 10);
   if (*VAR_21 != '\0')
    VAR_22 = "tag";
   break;
  case 130:
   VAR_17->pipe = FUNC_11(VAR_23, &VAR_21, 10);
   if (*VAR_21 != '\0')
    VAR_22 = "pipe";
   break;
  case 138:
   VAR_17->divert = FUNC_11(VAR_23, &VAR_21, 10);
   if (*VAR_21 != '\0')
    VAR_22 = "divert";
   break;
  case 129:
   VAR_17->skipto = FUNC_11(VAR_23, &VAR_21, 10);
   if (*VAR_21 != '\0')
    VAR_22 = "skipto";
   break;
  case 133:
   VAR_17->netgraph = FUNC_11(VAR_23, &VAR_21, 10);
   if (*VAR_21 != '\0')
    VAR_22 = "netgraph";
   break;
  case 136:
   VAR_17->fib = FUNC_11(VAR_23, &VAR_21, 10);
   if (*VAR_21 != '\0')
    VAR_22 = "fib";
   break;
  case 134:
   VAR_17->nat = FUNC_11(VAR_23, &VAR_21, 10);
   if (*VAR_21 != '\0')
    VAR_22 = "nat";
   break;
  case 135:
   VAR_17->limit = FUNC_11(VAR_23, &VAR_21, 10);
   if (*VAR_21 != '\0')
    VAR_22 = "limit";
   break;
  case 132:
   if (FUNC_10(VAR_23, '.') != ((void*)0) &&
       FUNC_3(VAR_0, VAR_23, &VAR_14) == 1) {
    VAR_17->nh4 = FUNC_8(VAR_14);
    break;
   }
   if (FUNC_5(VAR_23, &VAR_25) == 0) {
    VAR_17->nh4 = FUNC_8(VAR_25.s_addr);
    break;
   }
   VAR_22 = "ipv4";
   break;
  case 137:
   if (FUNC_4(*VAR_23)) {
    if ((VAR_19 = FUNC_6(VAR_6, VAR_23)) != -1) {
     VAR_17->dscp = VAR_19;
     break;
    } else
     VAR_22 = "DSCP code";
   } else {
    VAR_17->dscp = FUNC_11(VAR_23, &VAR_21, 10);
    if (VAR_17->dscp > 63 || *VAR_21 != '\0')
     VAR_22 = "DSCP value";
   }
   break;
  case 131:
   if (FUNC_10(VAR_23, ':') != ((void*)0)) {
    FUNC_7(&VAR_12, 0, sizeof(VAR_12));
    VAR_12.ai_family = VAR_1;
    VAR_12.ai_flags = VAR_2;
    if (FUNC_2(VAR_23, ((void*)0), &VAR_12, &VAR_13) == 0) {
     VAR_17->nh6 = ((struct sockaddr_in6 *)
         VAR_13->ai_addr)->sin6_addr;
     VAR_17->zoneid = ((struct sockaddr_in6 *)
         VAR_13->ai_addr)->sin6_scope_id;
     FUNC_1(VAR_13);
     break;
    }
   }
   VAR_22 = "ipv6";
   break;
  }

  if (VAR_22 != ((void*)0))
   FUNC_0(VAR_4, "Unable to parse %s as %s", VAR_23, VAR_22);

  if (VAR_20 != ((void*)0))
   *VAR_20++ = ',';

  if ((VAR_23 = VAR_20) != ((void*)0))
   continue;


  if (VAR_11 != 0)
   FUNC_0(VAR_4, "Not enough fields inside value");
 }
}
