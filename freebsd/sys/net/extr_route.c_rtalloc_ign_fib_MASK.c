
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int u_int ;
struct rtentry {int rt_flags; int * rt_ifp; } ;
struct route {struct rtentry* ro_rt; int ro_dst; } ;


 int FUNC_0 (struct rtentry*) ;
 int VAR_0 ;
 int FUNC_1 (struct rtentry*) ;
 struct rtentry* FUNC_2 (int *,int,int ,int ) ;

void
FUNC_3(struct route *VAR_1, u_long VAR_2, u_int VAR_3)
{
 struct rtentry *VAR_4;

 if ((VAR_4 = VAR_1->ro_rt) != ((void*)0)) {
  if (VAR_4->rt_ifp != ((void*)0) && VAR_4->rt_flags & VAR_0)
   return;
  FUNC_0(VAR_4);
  VAR_1->ro_rt = ((void*)0);
 }
 VAR_1->ro_rt = FUNC_2(&VAR_1->ro_dst, 1, VAR_2, VAR_3);
 if (VAR_1->ro_rt)
  FUNC_1(VAR_1->ro_rt);
}
