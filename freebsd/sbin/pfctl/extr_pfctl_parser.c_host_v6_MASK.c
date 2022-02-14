
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sockaddr_in6 {int sin6_scope_id; int sin6_addr; } ;
struct TYPE_4__ {int addr; } ;
struct TYPE_5__ {TYPE_1__ a; } ;
struct TYPE_6__ {TYPE_2__ v; } ;
struct node_host {struct node_host* tail; int * next; int ifindex; TYPE_3__ addr; void* af; int * ifname; } ;
struct addrinfo {scalar_t__ ai_addr; int ai_flags; int ai_socktype; void* ai_family; } ;
typedef int hints ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct node_host* FUNC_0 (int,int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (struct addrinfo*) ;
 scalar_t__ FUNC_3 (char const*,char*,struct addrinfo*,struct addrinfo**) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (struct addrinfo*,int ,int) ;
 int FUNC_6 (struct node_host*,int) ;

struct node_host *
FUNC_7(const char *VAR_3, int VAR_4)
{
 struct addrinfo VAR_5, *VAR_6;
 struct node_host *VAR_7 = ((void*)0);

 FUNC_5(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.ai_family = VAR_0;
 VAR_5.ai_socktype = VAR_2;
 VAR_5.ai_flags = VAR_1;
 if (FUNC_3(VAR_3, "0", &VAR_5, &VAR_6) == 0) {
  VAR_7 = FUNC_0(1, sizeof(struct node_host));
  if (VAR_7 == ((void*)0))
   FUNC_1(1, "address: calloc");
  VAR_7->ifname = ((void*)0);
  VAR_7->af = VAR_0;
  FUNC_4(&VAR_7->addr.v.a.addr,
      &((struct sockaddr_in6 *)VAR_6->ai_addr)->sin6_addr,
      sizeof(VAR_7->addr.v.a.addr));
  VAR_7->ifindex =
      ((struct sockaddr_in6 *)VAR_6->ai_addr)->sin6_scope_id;
  FUNC_6(VAR_7, VAR_4);
  FUNC_2(VAR_6);
  VAR_7->next = ((void*)0);
  VAR_7->tail = VAR_7;
 }

 return (VAR_7);
}
