
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pf_addr {scalar_t__* addr32; } ;
struct TYPE_4__ {struct pf_addr mask; } ;
struct TYPE_5__ {TYPE_1__ a; } ;
struct TYPE_6__ {scalar_t__ type; TYPE_2__ v; } ;
struct node_host {TYPE_3__ addr; struct node_host* next; } ;
typedef scalar_t__ sa_family_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct node_host*,int) ;
 int VAR_4 ;
 int FUNC_2 (struct pf_addr*,int ) ;

int
FUNC_3(struct node_host *VAR_5, sa_family_t VAR_6)
{
 struct node_host *VAR_7 = ((void*)0);
 struct pf_addr *VAR_8;

 for (VAR_7 = VAR_5; VAR_7 != ((void*)0); VAR_7 = VAR_7->next) {
  if (VAR_5->addr.type == VAR_3)
   continue;
  VAR_8 = &VAR_5->addr.v.a.mask;

  if (VAR_6 == VAR_0 && VAR_5->addr.type == VAR_2 &&
      FUNC_2(VAR_8, VAR_1) > 32)
   FUNC_1(VAR_7, 32);

  if (VAR_6 == VAR_0 &&
      (VAR_8->addr32[1] || VAR_8->addr32[2] || VAR_8->addr32[3])) {
   FUNC_0(VAR_4, "netmask %u invalid for IPv4 address\n",
       FUNC_2(VAR_8, VAR_1));
   return (1);
  }
 }
 return (0);
}
