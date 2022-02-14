
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct radius_server_data {struct radius_client* clients; } ;
struct TYPE_8__ {int s_addr; } ;
struct TYPE_7__ {int s_addr; } ;
struct TYPE_6__ {int* s6_addr; } ;
struct TYPE_5__ {int* s6_addr; } ;
struct radius_client {struct radius_client* next; TYPE_4__ mask; TYPE_3__ addr; TYPE_2__ mask6; TYPE_1__ addr6; } ;
struct in_addr {int s_addr; } ;
struct in6_addr {int* s6_addr; } ;



__attribute__((used)) static struct radius_client *
FUNC_0(struct radius_server_data *VAR_0, struct in_addr *VAR_1,
    int VAR_2)
{
 struct radius_client *VAR_3 = VAR_0->clients;

 while (VAR_3) {
  if (!VAR_2 && (VAR_3->addr.s_addr & VAR_3->mask.s_addr) ==
      (VAR_1->s_addr & VAR_3->mask.s_addr)) {
   break;
  }

  VAR_3 = VAR_3->next;
 }

 return VAR_3;
}
