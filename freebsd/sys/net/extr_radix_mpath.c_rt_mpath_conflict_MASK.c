
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
struct rtentry {TYPE_2__* rt_gateway; TYPE_1__* rt_ifa; } ;
struct rib_head {int head; struct radix_node* (* rnh_lookup ) (int ,struct sockaddr*,int *) ;} ;
struct radix_node {int rn_flags; } ;
struct TYPE_5__ {scalar_t__ sa_family; scalar_t__ sa_len; } ;
struct TYPE_4__ {TYPE_2__* ifa_addr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_2__*,TYPE_2__*,scalar_t__) ;
 struct radix_node* FUNC_1 (struct radix_node*) ;
 int FUNC_2 (struct rtentry*) ;
 struct radix_node* FUNC_3 (int ,struct sockaddr*,int *) ;

int
FUNC_4(struct rib_head *VAR_3, struct rtentry *VAR_4,
    struct sockaddr *VAR_5)
{
 struct radix_node *VAR_6, *VAR_7;
 struct rtentry *VAR_8;

 VAR_6 = (struct radix_node *)VAR_4;
 VAR_7 = VAR_3->rnh_lookup(FUNC_2(VAR_4), VAR_5, &VAR_3->head);
 if (!VAR_7 || VAR_7->rn_flags & VAR_2)
  return (0);


 do {
  VAR_8 = (struct rtentry *)VAR_7;


  if (VAR_7 == VAR_6)
   continue;

  if (VAR_8->rt_gateway->sa_family == VAR_0) {
   if (VAR_8->rt_ifa->ifa_addr->sa_len != VAR_4->rt_ifa->ifa_addr->sa_len ||
       FUNC_0(VAR_8->rt_ifa->ifa_addr, VAR_4->rt_ifa->ifa_addr,
       VAR_8->rt_ifa->ifa_addr->sa_len))
    continue;
  } else {
   if (VAR_8->rt_gateway->sa_len != VAR_4->rt_gateway->sa_len ||
       FUNC_0(VAR_8->rt_gateway, VAR_4->rt_gateway,
       VAR_8->rt_gateway->sa_len))
    continue;
  }


  return (VAR_1);
 } while ((VAR_7 = FUNC_1(VAR_7)) != ((void*)0));

 return (0);
}
