
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netfront_info {struct ifnet* xn_ifp; } ;
struct ifnet {int if_drv_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct netfront_info*) ;
 int FUNC_1 (struct ifnet*,int ) ;

__attribute__((used)) static void
FUNC_2(struct netfront_info *VAR_3)
{
 struct ifnet *VAR_4;

 FUNC_0(VAR_3);

 VAR_4 = VAR_3->xn_ifp;

 VAR_4->if_drv_flags &= ~(VAR_1 | VAR_0);
 FUNC_1(VAR_4, VAR_2);
}
