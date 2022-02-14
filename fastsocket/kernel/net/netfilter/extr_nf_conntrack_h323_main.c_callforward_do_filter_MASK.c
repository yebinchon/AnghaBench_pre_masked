
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


union nf_inet_addr {int ip; } ;
typedef int u_int8_t ;
struct TYPE_6__ {int dev; } ;
struct TYPE_4__ {TYPE_3__ dst; } ;
struct rtable {TYPE_1__ u; int rt_gateway; } ;
struct TYPE_5__ {TYPE_3__ dst; } ;
struct rt6_info {TYPE_2__ u; int rt6i_gateway; } ;
struct nf_afinfo {int (* route ) (struct dst_entry**,struct flowi*) ;} ;
struct flowi {int fl6_dst; int fl4_dst; } ;
struct dst_entry {int dummy; } ;
typedef int fl2 ;
typedef int fl1 ;




 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,union nf_inet_addr const*,int) ;
 int FUNC_3 (struct flowi*,int ,int) ;
 struct nf_afinfo* FUNC_4 (int) ;
 int FUNC_5 (struct dst_entry**,struct flowi*) ;
 int FUNC_6 (struct dst_entry**,struct flowi*) ;
 int FUNC_7 (struct dst_entry**,struct flowi*) ;
 int FUNC_8 (struct dst_entry**,struct flowi*) ;

__attribute__((used)) static int FUNC_9(const union nf_inet_addr *VAR_0,
     const union nf_inet_addr *VAR_1,
     u_int8_t VAR_2)
{
 const struct nf_afinfo *VAR_3;
 struct flowi VAR_4, VAR_5;
 int VAR_6 = 0;


 VAR_3 = FUNC_4(VAR_2);
 if (!VAR_3)
  return 0;

 FUNC_3(&VAR_4, 0, sizeof(VAR_4));
 FUNC_3(&VAR_5, 0, sizeof(VAR_5));

 switch (VAR_2) {
 case 129: {
  struct rtable *VAR_7, *VAR_8;

  VAR_4 = VAR_0->ip;
  VAR_5 = VAR_1->ip;
  if (!VAR_3->route((struct dst_entry **)&VAR_7, &VAR_4)) {
   if (!VAR_3->route((struct dst_entry **)&VAR_8, &VAR_5)) {
    if (VAR_7->rt_gateway == VAR_8->rt_gateway &&
        VAR_7->u.dst.dev == VAR_8->u.dst.dev)
     VAR_6 = 1;
    FUNC_0(&VAR_8->u.dst);
   }
   FUNC_0(&VAR_7->u.dst);
  }
  break;
 }
 }
 return VAR_6;

}
