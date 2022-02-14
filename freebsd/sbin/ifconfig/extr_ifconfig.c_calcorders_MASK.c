
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ifaddrs {struct ifaddrs* ifa_next; TYPE_1__* ifa_addr; int ifa_name; } ;
struct ifa_queue {int dummy; } ;
struct ifa_order_elt {unsigned int* af_orders; struct ifaddrs* ifa; int if_order; } ;
struct TYPE_2__ {unsigned int sa_family; } ;


 unsigned int FUNC_0 (unsigned int*) ;
 int FUNC_1 (struct ifa_queue*,struct ifa_order_elt*,int ) ;
 struct ifa_order_elt* FUNC_2 (int,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int ,int ) ;

__attribute__((used)) static int
FUNC_4(struct ifaddrs *VAR_1, struct ifa_queue *VAR_2)
{
 struct ifaddrs *VAR_3;
 struct ifa_order_elt *VAR_4;
 unsigned int VAR_5, VAR_6, VAR_7;

 VAR_3 = ((void*)0);
 VAR_4 = ((void*)0);
 VAR_5 = 0;
 VAR_7 = 0;

 while (VAR_1 != ((void*)0)) {
  if (VAR_3 == ((void*)0) ||
      FUNC_3(VAR_1->ifa_name, VAR_3->ifa_name) != 0) {
   VAR_4 = FUNC_2(1, sizeof(*VAR_4));

   if (VAR_4 == ((void*)0))
    return (-1);

   FUNC_1(VAR_2, VAR_4, VAR_0);
   VAR_4->if_order = VAR_7 ++;
   VAR_4->ifa = VAR_1;
   VAR_5 = 0;
  }

  if (VAR_1->ifa_addr) {
   VAR_6 = VAR_1->ifa_addr->sa_family;

   if (VAR_6 < FUNC_0(VAR_4->af_orders) &&
       VAR_4->af_orders[VAR_6] == 0)
    VAR_4->af_orders[VAR_6] = ++VAR_5;
  }
  VAR_3 = VAR_1;
  VAR_1 = VAR_1->ifa_next;
 }

 return (0);
}
