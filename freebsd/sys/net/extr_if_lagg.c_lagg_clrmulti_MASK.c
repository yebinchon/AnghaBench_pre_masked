
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lagg_port {scalar_t__ lp_detaching; int lp_mc_head; int lp_softc; } ;
struct lagg_mc {scalar_t__ mc_ifma; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 struct lagg_mc* FUNC_1 (int *) ;
 int FUNC_2 (int *,struct lagg_mc*,int ,int ) ;
 int FUNC_3 (struct lagg_mc*,int ) ;
 int FUNC_4 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_5(struct lagg_port *VAR_3)
{
 struct lagg_mc *VAR_4;

 FUNC_0(VAR_3->lp_softc);
 while ((VAR_4 = FUNC_1(&VAR_3->lp_mc_head)) != ((void*)0)) {
  FUNC_2(&VAR_3->lp_mc_head, VAR_4, VAR_1, VAR_2);
  if (VAR_4->mc_ifma && VAR_3->lp_detaching == 0)
   FUNC_4(VAR_4->mc_ifma);
  FUNC_3(VAR_4, VAR_0);
 }
 return (0);
}
