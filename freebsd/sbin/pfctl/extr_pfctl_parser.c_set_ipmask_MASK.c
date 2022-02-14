
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int8_t ;
struct pf_addr {int* addr32; } ;
struct TYPE_4__ {struct pf_addr addr; struct pf_addr mask; } ;
struct TYPE_5__ {TYPE_1__ a; } ;
struct TYPE_6__ {scalar_t__ type; TYPE_2__ v; } ;
struct node_host {TYPE_3__ addr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct pf_addr*,int ,int) ;

void
FUNC_2(struct node_host *VAR_1, u_int8_t VAR_2)
{
 struct pf_addr *VAR_3, *VAR_4;
 int VAR_5, VAR_6 = 0;

 VAR_3 = &VAR_1->addr.v.a.mask;
 FUNC_1(VAR_3, 0, sizeof(*VAR_3));

 while (VAR_2 >= 32) {
  VAR_3->addr32[VAR_6++] = 0xffffffff;
  VAR_2 -= 32;
 }
 for (VAR_5 = 31; VAR_5 > 31-VAR_2; --VAR_5)
  VAR_3->addr32[VAR_6] |= (1 << VAR_5);
 if (VAR_2)
  VAR_3->addr32[VAR_6] = FUNC_0(VAR_3->addr32[VAR_6]);


 VAR_4 = &VAR_1->addr.v.a.addr;
 if (VAR_1->addr.type == VAR_0)
  for (VAR_5 = 0; VAR_5 < 4; VAR_5++)
   VAR_4->addr32[VAR_5] = VAR_4->addr32[VAR_5] & VAR_3->addr32[VAR_5];
}
