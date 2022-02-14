
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lagg_softc {int sc_bkt; int sc_bkt_count; scalar_t__ sc_seq; } ;



__attribute__((used)) static void
FUNC_0(struct lagg_softc *VAR_0)
{
 VAR_0->sc_seq = 0;
 VAR_0->sc_bkt_count = VAR_0->sc_bkt;
}
