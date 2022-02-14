
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct xfrm_dst {struct dst_entry* route; } ;
struct dst_entry {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* update_pmtu ) (struct dst_entry*,int ) ;} ;


 int FUNC_0 (struct dst_entry*,int ) ;

__attribute__((used)) static void FUNC_1(struct dst_entry *VAR_0, u32 VAR_1)
{
 struct xfrm_dst *VAR_2 = (struct xfrm_dst *)VAR_0;
 struct dst_entry *VAR_3 = VAR_2->route;

 VAR_3->ops->update_pmtu(VAR_3, VAR_1);
}
