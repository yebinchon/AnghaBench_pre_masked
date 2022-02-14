
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct xfrm_dst {scalar_t__ route_mtu_cached; int route; scalar_t__ child_mtu_cached; } ;
struct dst_entry {scalar_t__* metrics; int xfrm; int child; struct dst_entry* next; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct dst_entry *VAR_1)
{
 do {
  struct xfrm_dst *VAR_2 = (struct xfrm_dst *)VAR_1;
  u32 VAR_3, VAR_4;

  VAR_3 = FUNC_0(VAR_1->child);
  VAR_2->child_mtu_cached = VAR_3;

  VAR_3 = FUNC_1(VAR_1->xfrm, VAR_3);

  VAR_4 = FUNC_0(VAR_2->route);
  VAR_2->route_mtu_cached = VAR_4;

  if (VAR_3 > VAR_4)
   VAR_3 = VAR_4;

  VAR_1->metrics[VAR_0-1] = VAR_3;
 } while ((VAR_1 = VAR_1->next));
}
