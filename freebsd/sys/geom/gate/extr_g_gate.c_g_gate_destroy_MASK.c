
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_provider {scalar_t__ acr; scalar_t__ acw; scalar_t__ ace; struct g_geom* geom; } ;
struct g_geom {int * softc; int name; } ;
struct bio_queue_head {int dummy; } ;
struct g_gate_softc {int sc_flags; scalar_t__ sc_ref; size_t sc_unit; struct g_provider* sc_provider; struct g_consumer* sc_readcons; int sc_queue_mtx; int sc_queue_count; struct bio_queue_head sc_outqueue; struct bio_queue_head sc_inqueue; int sc_callout; } ;
struct g_consumer {int dummy; } ;
struct bio {int dummy; } ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,int ) ;
 int VAR_2 ;
 int FUNC_1 (int,struct bio*,char*) ;
 int FUNC_2 (int,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct bio_queue_head*) ;
 int FUNC_4 (struct bio_queue_head*,struct bio*) ;
 struct bio* FUNC_5 (struct bio_queue_head*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct g_gate_softc*,int ) ;
 int FUNC_8 (struct g_consumer*,int,int ,int ) ;
 int FUNC_9 (struct g_consumer*) ;
 int FUNC_10 (struct g_consumer*) ;
 scalar_t__ VAR_5 ;
 int ** VAR_6 ;
 int VAR_7 ;
 int FUNC_11 (struct bio*,int ) ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 (struct g_geom*,int ) ;
 int FUNC_16 (struct g_provider*,int ) ;
 int FUNC_17 (scalar_t__*,int *,int ,char*,int ) ;
 int FUNC_18 (int *,int ) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (struct g_gate_softc*) ;

__attribute__((used)) static int
FUNC_23(struct g_gate_softc *VAR_8, boolean_t VAR_9)
{
 struct bio_queue_head VAR_10;
 struct g_provider *VAR_11;
 struct g_consumer *VAR_12;
 struct g_geom *VAR_13;
 struct bio *VAR_14;

 FUNC_12();
 FUNC_18(&VAR_7, VAR_3);
 VAR_11 = VAR_8->sc_provider;
 if (!VAR_9 && (VAR_11->acr != 0 || VAR_11->acw != 0 || VAR_11->ace != 0)) {
  FUNC_21(&VAR_7);
  return (VAR_0);
 }
 FUNC_21(&VAR_7);
 FUNC_20(&VAR_8->sc_queue_mtx);
 if ((VAR_8->sc_flags & VAR_2) == 0)
  VAR_8->sc_flags |= VAR_2;
 FUNC_22(VAR_8);
 FUNC_21(&VAR_8->sc_queue_mtx);
 VAR_13 = VAR_11->geom;
 FUNC_16(VAR_11, VAR_1);
 FUNC_6(&VAR_8->sc_callout);
 FUNC_3(&VAR_10);
 FUNC_20(&VAR_8->sc_queue_mtx);
 while ((VAR_14 = FUNC_5(&VAR_8->sc_inqueue)) != ((void*)0)) {
  VAR_8->sc_queue_count--;
  FUNC_4(&VAR_10, VAR_14);
 }
 while ((VAR_14 = FUNC_5(&VAR_8->sc_outqueue)) != ((void*)0)) {
  VAR_8->sc_queue_count--;
  FUNC_4(&VAR_10, VAR_14);
 }
 FUNC_21(&VAR_8->sc_queue_mtx);
 FUNC_14();
 while ((VAR_14 = FUNC_5(&VAR_10)) != ((void*)0)) {
  FUNC_1(1, VAR_14, "Request canceled.");
  FUNC_11(VAR_14, VAR_1);
 }
 FUNC_20(&VAR_7);

 VAR_8->sc_ref--;
 while (VAR_8->sc_ref > 0)
  FUNC_17(&VAR_8->sc_ref, &VAR_7, 0, "gg:destroy", 0);
 VAR_6[VAR_8->sc_unit] = ((void*)0);
 FUNC_2(VAR_5 > 0, ("negative g_gate_nunits?"));
 VAR_5--;
 FUNC_21(&VAR_7);
 FUNC_19(&VAR_8->sc_queue_mtx);
 FUNC_13();
 if ((VAR_12 = VAR_8->sc_readcons) != ((void*)0)) {
  VAR_8->sc_readcons = ((void*)0);
  (void)FUNC_8(VAR_12, -1, 0, 0);
  FUNC_10(VAR_12);
  FUNC_9(VAR_12);
 }
 FUNC_0(1, "Device %s destroyed.", VAR_13->name);
 VAR_13->softc = ((void*)0);
 FUNC_15(VAR_13, VAR_1);
 VAR_8->sc_provider = ((void*)0);
 FUNC_7(VAR_8, VAR_4);
 return (0);
}
