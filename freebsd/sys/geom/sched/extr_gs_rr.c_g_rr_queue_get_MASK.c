
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_rr_softc {int sc_geom; } ;
struct g_rr_queue {int dummy; } ;
struct bio {int dummy; } ;


 struct g_rr_queue* FUNC_0 (int ,struct bio*) ;

__attribute__((used)) static struct g_rr_queue *
FUNC_1(struct g_rr_softc *VAR_0, struct bio *VAR_1)
{

 return (FUNC_0(VAR_0->sc_geom, VAR_1));
}
