
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int s6_addr; } ;
struct sockaddr_in6 {int sin6_scope_id; TYPE_5__ sin6_addr; } ;
struct TYPE_6__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
struct TYPE_7__ {int addr; } ;
struct TYPE_8__ {TYPE_2__ a; } ;
struct TYPE_9__ {TYPE_3__ v; } ;
struct node_host {scalar_t__ af; struct node_host* tail; struct node_host* next; int ifindex; TYPE_4__ addr; int * ifname; } ;
struct in_addr {int dummy; } ;
struct in6_addr {int dummy; } ;
struct addrinfo {scalar_t__ ai_family; scalar_t__ ai_addr; struct addrinfo* ai_next; int ai_socktype; } ;
typedef int hints ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct node_host* FUNC_0 (int,int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct addrinfo*) ;
 int FUNC_4 (char*,int *,struct addrinfo*,struct addrinfo**) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (struct addrinfo*,int ,int) ;
 int FUNC_7 (struct node_host*,int) ;
 int FUNC_8 (char*,char*) ;
 char* FUNC_9 (char const*) ;
 char* FUNC_10 (char*,char) ;

struct node_host *
FUNC_11(const char *VAR_4, int VAR_5, int VAR_6)
{
 struct addrinfo VAR_7, *VAR_8, *VAR_9;
 struct node_host *VAR_10, *VAR_11 = ((void*)0);
 int VAR_12, VAR_13 = 0;
 int VAR_14 = 0, VAR_15 = 0;
 char *VAR_16, *VAR_17;

 if ((VAR_17 = FUNC_9(VAR_4)) == ((void*)0))
  FUNC_1(1, "host_dns: strdup");
 if ((VAR_16 = FUNC_10(VAR_17, ':')) != ((void*)0) && !FUNC_8(VAR_16, ":0")) {
  VAR_13 = 1;
  *VAR_16 = '\0';
 }
 FUNC_6(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.ai_family = VAR_2;
 VAR_7.ai_socktype = VAR_3;
 VAR_12 = FUNC_4(VAR_17, ((void*)0), &VAR_7, &VAR_8);
 if (VAR_12) {
  FUNC_2(VAR_17);
  return (VAR_11);
 }

 for (VAR_9 = VAR_8; VAR_9; VAR_9 = VAR_9->ai_next) {
  if (VAR_9->ai_family != VAR_0 &&
      VAR_9->ai_family != VAR_1)
   continue;
  if (VAR_13) {
   if (VAR_9->ai_family == VAR_0) {
    if (VAR_14)
     continue;
    VAR_14 = 1;
   } else {
    if (VAR_15)
     continue;
    VAR_15 = 1;
   }
  }
  VAR_10 = FUNC_0(1, sizeof(struct node_host));
  if (VAR_10 == ((void*)0))
   FUNC_1(1, "host_dns: calloc");
  VAR_10->ifname = ((void*)0);
  VAR_10->af = VAR_9->ai_family;
  if (VAR_9->ai_family == VAR_0) {
   FUNC_5(&VAR_10->addr.v.a.addr,
       &((struct sockaddr_in *)
       VAR_9->ai_addr)->sin_addr.s_addr,
       sizeof(struct in_addr));
   FUNC_7(VAR_10, VAR_5);
  } else {
   FUNC_5(&VAR_10->addr.v.a.addr,
       &((struct sockaddr_in6 *)
       VAR_9->ai_addr)->sin6_addr.s6_addr,
       sizeof(struct in6_addr));
   VAR_10->ifindex =
       ((struct sockaddr_in6 *)
       VAR_9->ai_addr)->sin6_scope_id;
   FUNC_7(VAR_10, VAR_6);
  }
  VAR_10->next = ((void*)0);
  VAR_10->tail = VAR_10;
  if (VAR_11 == ((void*)0))
   VAR_11 = VAR_10;
  else {
   VAR_11->tail->next = VAR_10;
   VAR_11->tail = VAR_10;
  }
 }
 FUNC_3(VAR_8);
 FUNC_2(VAR_17);

 return (VAR_11);
}
