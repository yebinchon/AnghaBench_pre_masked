
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct g_sched_softc {int sc_flags; } ;
struct g_provider {scalar_t__ nstart; scalar_t__ nend; int ace; int acw; int acr; struct g_geom* geom; int index; int private; } ;
struct g_geom {int * start; int provider; struct g_sched_softc* softc; } ;
struct g_consumer {int ace; int acw; int acr; } ;
typedef int g_start_t ;
struct TYPE_2__ {scalar_t__ gs_npending; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct g_provider*,int ) ;
 int FUNC_1 (struct g_provider*,int ) ;
 int VAR_2 ;
 int FUNC_2 (struct g_provider*) ;
 int FUNC_3 (int *) ;
 int * VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 TYPE_1__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (struct g_provider*,int ,char*,int) ;

__attribute__((used)) static int
FUNC_5(struct g_geom *VAR_9, struct g_provider *VAR_10,
    struct g_geom *VAR_11, struct g_provider *VAR_12, struct g_consumer *VAR_13)
{
 struct g_sched_softc *VAR_14 = VAR_9->softc;
 g_start_t *VAR_15, *VAR_16 = VAR_3;
 int VAR_17 = 0, VAR_18 = VAR_8 + VAR_5;

 FUNC_2(VAR_10);

 VAR_10->private = VAR_12->private;
 VAR_10->index = VAR_12->index;


 VAR_6.gs_npending = 0;
 VAR_15 = VAR_12->geom->start;
 VAR_11->start = VAR_4;

 while (VAR_12->nstart - VAR_12->nend != VAR_6.gs_npending &&
     VAR_18 - VAR_8 >= 0)
  FUNC_4(VAR_12, VAR_2, "-", VAR_5/10);

 if (VAR_12->nstart - VAR_12->nend != VAR_6.gs_npending) {
  VAR_16 = VAR_15;
  VAR_17 = VAR_0;
  goto fail;
 }


 FUNC_1(VAR_12, VAR_7);
 VAR_12->geom = VAR_9;
 FUNC_0(&VAR_9->provider, VAR_12, VAR_7);





 VAR_13->acr = VAR_10->acr = VAR_12->acr;
 VAR_13->acw = VAR_10->acw = VAR_12->acw;
 VAR_13->ace = VAR_10->ace = VAR_12->ace;
 VAR_14->sc_flags |= VAR_1;

fail:
 VAR_11->start = VAR_15;

 FUNC_3(VAR_16);

 return (VAR_17);
}
