
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lagg_softc {scalar_t__ sc_psc; } ;
struct lagg_lb {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct lagg_lb*,int ) ;

__attribute__((used)) static void
FUNC_1(struct lagg_softc *VAR_1)
{
 struct lagg_lb *VAR_2;

 VAR_2 = (struct lagg_lb *)VAR_1->sc_psc;
 if (VAR_2 != ((void*)0))
  FUNC_0(VAR_2, VAR_0);
}
