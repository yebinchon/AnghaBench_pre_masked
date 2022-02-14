
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_2__ {scalar_t__ data; } ;
struct ub_packed_rrset_key {TYPE_1__ entry; } ;
struct sockaddr_in6 {int sin6_addr; void* sin6_port; int sin6_family; } ;
struct sockaddr_in {int sin_addr; void* sin_port; int sin_family; } ;
struct packed_rrset_data {size_t count; int* rr_len; int ** rr_data; } ;
struct auth_master {struct auth_addr* list; int host; } ;
struct auth_addr {struct auth_addr* next; void* addrlen; int addr; } ;
typedef void* socklen_t ;
typedef int s ;
typedef void* in_port_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int *,void*,char*,int) ;
 scalar_t__ FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,int *,size_t) ;
 int FUNC_5 (scalar_t__,char*,int ,char*) ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static void
FUNC_6(struct auth_master* VAR_9, struct ub_packed_rrset_key* VAR_10,
 uint16_t VAR_11)
{
 size_t VAR_12;
 struct packed_rrset_data* VAR_13;
 if(!VAR_9 || !VAR_10) return;
 if(VAR_11 != VAR_4 && VAR_11 != VAR_5)
  return;
 VAR_13 = (struct packed_rrset_data*)VAR_10->entry.data;
 for(VAR_12=0; VAR_12<VAR_13->count; VAR_12++) {
  struct auth_addr* VAR_14;
  size_t VAR_15 = VAR_13->rr_len[VAR_12] - 2;
  uint8_t* VAR_16 = VAR_13->rr_data[VAR_12]+2;
  if(VAR_11 == VAR_4 && VAR_15 != VAR_3)
   continue;
  if(VAR_11 == VAR_5 && VAR_15 != VAR_2)
   continue;


  VAR_14 = (struct auth_addr*)FUNC_1(1, sizeof(*VAR_14));
  if(!VAR_14) {
   FUNC_3("out of memory");
   return;
  }
  if(VAR_11 == VAR_4) {
   struct sockaddr_in* VAR_17;
   VAR_14->addrlen = (socklen_t)sizeof(*VAR_17);
   VAR_17 = (struct sockaddr_in*)&VAR_14->addr;
   VAR_17->sin_family = VAR_0;
   VAR_17->sin_port = (in_port_t)FUNC_2(VAR_6);
   FUNC_4(&VAR_17->sin_addr, VAR_16, VAR_3);
  } else {
   struct sockaddr_in6* VAR_18;
   VAR_14->addrlen = (socklen_t)sizeof(*VAR_18);
   VAR_18 = (struct sockaddr_in6*)&VAR_14->addr;
   VAR_18->sin6_family = VAR_1;
   VAR_18->sin6_port = (in_port_t)FUNC_2(VAR_6);
   FUNC_4(&VAR_18->sin6_addr, VAR_16, VAR_2);
  }
  if(VAR_8 >= VAR_7) {
   char VAR_19[64];
   FUNC_0(&VAR_14->addr, VAR_14->addrlen, VAR_19, sizeof(VAR_19));
   FUNC_5(VAR_7, "auth host %s lookup %s",
    VAR_9->host, VAR_19);
  }

  VAR_14->next = VAR_9->list;
  VAR_9->list = VAR_14;
 }
}
