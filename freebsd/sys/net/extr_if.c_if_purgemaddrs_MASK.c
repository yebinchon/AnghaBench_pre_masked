
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int if_multiaddrs; } ;
struct ifmultiaddr {int dummy; } ;


 int FUNC_0 (int *) ;
 struct ifmultiaddr* FUNC_1 (int *) ;
 int FUNC_2 (int *,struct ifmultiaddr*,int ,int ) ;
 int FUNC_3 (struct ifnet*) ;
 int FUNC_4 (struct ifnet*) ;
 int FUNC_5 (struct ifnet*,struct ifmultiaddr*,int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_6(struct ifnet *VAR_2)
{
 struct ifmultiaddr *VAR_3;

 FUNC_3(VAR_2);
 while (!FUNC_0(&VAR_2->if_multiaddrs)) {
  VAR_3 = FUNC_1(&VAR_2->if_multiaddrs);
  FUNC_2(&VAR_2->if_multiaddrs, VAR_3, VAR_1, VAR_0);
  FUNC_5(VAR_2, VAR_3, 1);
 }
 FUNC_4(VAR_2);
}
