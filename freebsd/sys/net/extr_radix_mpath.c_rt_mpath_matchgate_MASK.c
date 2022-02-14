
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr {scalar_t__ sa_len; } ;
struct rtentry {TYPE_2__* rt_gateway; TYPE_1__* rt_ifa; } ;
struct radix_node {int dummy; } ;
struct TYPE_4__ {scalar_t__ sa_family; scalar_t__ sa_len; } ;
struct TYPE_3__ {TYPE_2__* ifa_addr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*,struct sockaddr*,scalar_t__) ;
 struct radix_node* FUNC_1 (struct radix_node*) ;

struct rtentry *
FUNC_2(struct rtentry *VAR_1, struct sockaddr *VAR_2)
{
 struct radix_node *VAR_3;

 if (!VAR_2 || !VAR_1->rt_gateway)
  return ((void*)0);


 VAR_3 = (struct radix_node *)VAR_1;
 do {
  VAR_1 = (struct rtentry *)VAR_3;






  if (VAR_1->rt_gateway->sa_family == VAR_0) {
   if (!FUNC_0(VAR_1->rt_ifa->ifa_addr, VAR_2, VAR_2->sa_len))
    break;
  }






  if (VAR_1->rt_gateway->sa_len == VAR_2->sa_len &&
      !FUNC_0(VAR_1->rt_gateway, VAR_2, VAR_2->sa_len))
   break;
 } while ((VAR_3 = FUNC_1(VAR_3)) != ((void*)0));

 return (struct rtentry *)VAR_3;
}
