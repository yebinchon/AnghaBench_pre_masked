
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rib_head {int head; int (* rnh_walktree ) (int *,int ,struct if_mtuinfo*) ;} ;
struct ifnet {int dummy; } ;
struct if_mtuinfo {int mtu; struct ifnet* ifp; } ;


 int VAR_0 ;
 int FUNC_0 (struct rib_head*) ;
 int FUNC_1 (struct rib_head*) ;
 int FUNC_2 (struct ifnet*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 struct rib_head* FUNC_3 (int,int) ;
 int FUNC_4 (int *,int ,struct if_mtuinfo*) ;

void
FUNC_5(struct ifnet *VAR_3)
{
 struct if_mtuinfo VAR_4;
 struct rib_head *VAR_5;
 int VAR_6, VAR_7;

 VAR_4.ifp = VAR_3;






 for (VAR_6 = 1; VAR_6 <= VAR_0; VAR_6++) {
  VAR_4.mtu = FUNC_2(VAR_3, VAR_6);
  for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
   VAR_5 = FUNC_3(VAR_7, VAR_6);
   if (VAR_5 == ((void*)0))
    continue;
   FUNC_0(VAR_5);
   VAR_5->rnh_walktree(&VAR_5->head, VAR_1, &VAR_4);
   FUNC_1(VAR_5);
  }
 }
}
