
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_int ;
struct rtentry {int rt_flags; scalar_t__ rt_ifp; } ;
struct route {struct rtentry* ro_rt; int ro_dst; } ;
struct radix_node {int dummy; } ;


 int FUNC_0 (struct rtentry*) ;
 int VAR_0 ;
 int FUNC_1 (struct rtentry*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct rtentry*) ;
 int FUNC_4 (struct rtentry*) ;
 int * FUNC_5 (struct radix_node*) ;
 struct rtentry* FUNC_6 (struct rtentry*,int ) ;
 struct rtentry* FUNC_7 (int *,int,int ,int ) ;

void
FUNC_8(struct route *VAR_1, uint32_t VAR_2, u_int VAR_3)
{
 struct rtentry *VAR_4;





 if (VAR_1->ro_rt && VAR_1->ro_rt->rt_ifp && (VAR_1->ro_rt->rt_flags & VAR_0)
     && FUNC_2(VAR_1->ro_rt->rt_ifp))
  return;
 VAR_1->ro_rt = FUNC_7(&VAR_1->ro_dst, 1, 0, VAR_3);


 if (VAR_1->ro_rt == ((void*)0))
  return;
 if (FUNC_5((struct radix_node *)VAR_1->ro_rt) == ((void*)0)) {
  FUNC_4(VAR_1->ro_rt);
  return;
 }

 VAR_4 = FUNC_6(VAR_1->ro_rt, VAR_2);



 if (!VAR_4) {
  FUNC_4(VAR_1->ro_rt);
  VAR_1->ro_rt = ((void*)0);
  return;
 }
 if (VAR_1->ro_rt != VAR_4) {
  FUNC_0(VAR_1->ro_rt);
  VAR_1->ro_rt = VAR_4;
  FUNC_3(VAR_1->ro_rt);
  FUNC_1(VAR_1->ro_rt);

 }
 FUNC_4(VAR_1->ro_rt);
}
