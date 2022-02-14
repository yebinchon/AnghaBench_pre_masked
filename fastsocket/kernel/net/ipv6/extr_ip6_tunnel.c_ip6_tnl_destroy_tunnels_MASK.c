
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip6_tnl_net {struct ip6_tnl** tnls_wc; struct ip6_tnl** tnls_r_l; } ;
struct ip6_tnl {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct ip6_tnl_net *VAR_1)
{
 int VAR_2;
 struct ip6_tnl *VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  while ((VAR_3 = VAR_1->tnls_r_l[VAR_2]) != ((void*)0))
   FUNC_0(VAR_3->dev);
 }

 VAR_3 = VAR_1->tnls_wc[0];
 FUNC_0(VAR_3->dev);
}
