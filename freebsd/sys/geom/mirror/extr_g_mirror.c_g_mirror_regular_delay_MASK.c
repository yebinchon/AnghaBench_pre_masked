
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_mirror_softc {int sc_regular_delayed; } ;
struct bio {int dummy; } ;


 int FUNC_0 (int,struct bio*,char*) ;
 int FUNC_1 (int *,struct bio*,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(struct g_mirror_softc *VAR_1, struct bio *VAR_2)
{

 FUNC_0(2, VAR_2, "Delaying request.");
 FUNC_1(&VAR_1->sc_regular_delayed, VAR_2, VAR_0);
}
