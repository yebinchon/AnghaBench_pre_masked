
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_12__ {int* s6_addr; } ;
struct sockaddr_in6 {scalar_t__ sin6_scope_id; TYPE_6__ sin6_addr; } ;
struct TYPE_7__ {int* s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
struct TYPE_8__ {int mask; int addr; } ;
struct TYPE_9__ {TYPE_2__ a; } ;
struct TYPE_10__ {TYPE_3__ v; } ;
struct node_host {scalar_t__ af; int ifindex; struct node_host* tail; struct node_host* next; int * ifname; int peer; int bcast; TYPE_4__ addr; int ifa_flags; } ;
struct in_addr {int dummy; } ;
struct in6_addr {int dummy; } ;
struct ifaddrs {int ifa_name; TYPE_5__* ifa_addr; int * ifa_dstaddr; int * ifa_broadaddr; scalar_t__ ifa_netmask; int ifa_flags; struct ifaddrs* ifa_next; } ;
struct TYPE_11__ {scalar_t__ sa_family; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_6__*) ;
 struct node_host* FUNC_1 (int,int) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (struct ifaddrs*) ;
 scalar_t__ FUNC_4 (struct ifaddrs**) ;
 int FUNC_5 (int ) ;
 struct node_host* VAR_3 ;
 int FUNC_6 (int *,int**,int) ;
 int * FUNC_7 (int ) ;

void
FUNC_8(void)
{
 struct ifaddrs *VAR_4, *VAR_5;
 struct node_host *VAR_6 = ((void*)0), *VAR_7 = ((void*)0);

 if (FUNC_4(&VAR_4) < 0)
  FUNC_2(1, "getifaddrs");

 for (VAR_5 = VAR_4; VAR_5; VAR_5 = VAR_5->ifa_next) {
  if (!(VAR_5->ifa_addr->sa_family == VAR_0 ||
      VAR_5->ifa_addr->sa_family == VAR_1 ||
      VAR_5->ifa_addr->sa_family == VAR_2))
    continue;
  VAR_6 = FUNC_1(1, sizeof(struct node_host));
  if (VAR_6 == ((void*)0))
   FUNC_2(1, "address: calloc");
  VAR_6->af = VAR_5->ifa_addr->sa_family;
  VAR_6->ifa_flags = VAR_5->ifa_flags;
  VAR_6->ifindex = 0;
  if (VAR_6->af == VAR_0) {
   FUNC_6(&VAR_6->addr.v.a.addr, &((struct sockaddr_in *)
       VAR_5->ifa_addr)->sin_addr.s_addr,
       sizeof(struct in_addr));
   FUNC_6(&VAR_6->addr.v.a.mask, &((struct sockaddr_in *)
       VAR_5->ifa_netmask)->sin_addr.s_addr,
       sizeof(struct in_addr));
   if (VAR_5->ifa_broadaddr != ((void*)0))
    FUNC_6(&VAR_6->bcast, &((struct sockaddr_in *)
        VAR_5->ifa_broadaddr)->sin_addr.s_addr,
        sizeof(struct in_addr));
   if (VAR_5->ifa_dstaddr != ((void*)0))
    FUNC_6(&VAR_6->peer, &((struct sockaddr_in *)
        VAR_5->ifa_dstaddr)->sin_addr.s_addr,
        sizeof(struct in_addr));
  } else if (VAR_6->af == VAR_1) {
   FUNC_6(&VAR_6->addr.v.a.addr, &((struct sockaddr_in6 *)
       VAR_5->ifa_addr)->sin6_addr.s6_addr,
       sizeof(struct in6_addr));
   FUNC_6(&VAR_6->addr.v.a.mask, &((struct sockaddr_in6 *)
       VAR_5->ifa_netmask)->sin6_addr.s6_addr,
       sizeof(struct in6_addr));
   if (VAR_5->ifa_broadaddr != ((void*)0))
    FUNC_6(&VAR_6->bcast, &((struct sockaddr_in6 *)
        VAR_5->ifa_broadaddr)->sin6_addr.s6_addr,
        sizeof(struct in6_addr));
   if (VAR_5->ifa_dstaddr != ((void*)0))
     FUNC_6(&VAR_6->peer, &((struct sockaddr_in6 *)
        VAR_5->ifa_dstaddr)->sin6_addr.s6_addr,
        sizeof(struct in6_addr));
   VAR_6->ifindex = ((struct sockaddr_in6 *)
       VAR_5->ifa_addr)->sin6_scope_id;
  } else if (VAR_6->af == VAR_2) {
   FUNC_5(VAR_5->ifa_name);
  }
  if ((VAR_6->ifname = FUNC_7(VAR_5->ifa_name)) == ((void*)0))
   FUNC_2(1, "ifa_load: strdup");
  VAR_6->next = ((void*)0);
  VAR_6->tail = VAR_6;
  if (VAR_7 == ((void*)0))
   VAR_7 = VAR_6;
  else {
   VAR_7->tail->next = VAR_6;
   VAR_7->tail = VAR_6;
  }
 }

 VAR_3 = VAR_7;
 FUNC_3(VAR_4);
}
