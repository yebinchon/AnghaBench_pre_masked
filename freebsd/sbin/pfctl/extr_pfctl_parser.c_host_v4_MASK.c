
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * addr32; } ;
struct TYPE_6__ {TYPE_1__ addr; } ;
struct TYPE_7__ {TYPE_2__ a; } ;
struct TYPE_8__ {TYPE_3__ v; } ;
struct node_host {struct node_host* tail; int * next; TYPE_4__ addr; int af; int * ifname; } ;
struct in_addr {int s_addr; } ;
typedef int ina ;


 int VAR_0 ;
 struct node_host* FUNC_0 (int,int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int ,char const*,struct in_addr*,int) ;
 int FUNC_3 (int ,char const*,struct in_addr*) ;
 int FUNC_4 (struct in_addr*,int ,int) ;
 int FUNC_5 (struct node_host*,int) ;
 int * FUNC_6 (char const*,char) ;

struct node_host *
FUNC_7(const char *VAR_1, int VAR_2)
{
 struct node_host *VAR_3 = ((void*)0);
 struct in_addr VAR_4;
 int VAR_5 = 32;

 FUNC_4(&VAR_4, 0, sizeof(struct in_addr));
 if (FUNC_6(VAR_1, '/') != ((void*)0)) {
  if ((VAR_5 = FUNC_2(VAR_0, VAR_1, &VAR_4, sizeof(VAR_4))) == -1)
   return (((void*)0));
 } else {
  if (FUNC_3(VAR_0, VAR_1, &VAR_4) != 1)
   return (((void*)0));
 }

 VAR_3 = FUNC_0(1, sizeof(struct node_host));
 if (VAR_3 == ((void*)0))
  FUNC_1(1, "address: calloc");
 VAR_3->ifname = ((void*)0);
 VAR_3->af = VAR_0;
 VAR_3->addr.v.a.addr.addr32[0] = VAR_4.s_addr;
 FUNC_5(VAR_3, VAR_5);
 VAR_3->next = ((void*)0);
 VAR_3->tail = VAR_3;

 return (VAR_3);
}
