
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct g_virstor_softc {size_t n_components; struct g_virstor_softc* components; struct g_virstor_softc* map; int delayed_bio_q_mtx; int delayed_bio_q; TYPE_1__* bio; struct g_provider* provider; struct g_geom* geom; int * gcons; } ;
struct g_virstor_bio_q {size_t n_components; struct g_virstor_bio_q* components; struct g_virstor_bio_q* map; int delayed_bio_q_mtx; int delayed_bio_q; TYPE_1__* bio; struct g_provider* provider; struct g_geom* geom; int * gcons; } ;
struct g_provider {scalar_t__ acr; scalar_t__ acw; scalar_t__ ace; int name; } ;
struct g_geom {int name; int provider; int * softc; } ;
typedef scalar_t__ boolean_t ;
struct TYPE_2__ {int bio_error; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 struct g_provider* FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int *) ;
 struct g_virstor_softc* FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (struct g_virstor_softc*,int) ;
 int FUNC_7 (struct g_virstor_softc*,int ) ;
 int FUNC_8 (TYPE_1__*,int ) ;
 int FUNC_9 () ;
 int FUNC_10 (struct g_geom*,int) ;
 int VAR_8 ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct g_virstor_softc*,struct g_virstor_softc*,scalar_t__) ;

__attribute__((used)) static int
FUNC_15(struct g_virstor_softc *VAR_9, boolean_t VAR_10,
    boolean_t VAR_11)
{
 struct g_provider *VAR_12;
 struct g_geom *VAR_13;
 u_int VAR_14;

 FUNC_9();

 if (VAR_9 == ((void*)0))
  return (VAR_3);

 VAR_12 = VAR_9->provider;
 if (VAR_12 != ((void*)0) && (VAR_12->acr != 0 || VAR_12->acw != 0 || VAR_12->ace != 0)) {
  FUNC_2(VAR_10 ? VAR_6 : VAR_5,
      "Device %s is still open.", VAR_12->name);
  if (!VAR_10)
   return (VAR_0);
 }

 for (VAR_14 = 0; VAR_14 < VAR_9->n_components; VAR_14++) {
  if (VAR_9->components[VAR_14].gcons != ((void*)0))
   FUNC_14(VAR_9, &VAR_9->components[VAR_14], VAR_11);
 }

 VAR_13 = VAR_9->geom;
 VAR_13->softc = ((void*)0);

 FUNC_0(VAR_9->provider == ((void*)0), ("Provider still exists for %s",
     VAR_13->name));




 FUNC_12(&VAR_9->delayed_bio_q_mtx);
 while (!FUNC_3(&VAR_9->delayed_bio_q)) {
  struct g_virstor_bio_q *VAR_15;
  VAR_15 = FUNC_4(&VAR_9->delayed_bio_q);
  VAR_15->bio->bio_error = VAR_2;
  FUNC_8(VAR_15->bio, VAR_1);
  FUNC_5(&VAR_9->delayed_bio_q, VAR_8);
  FUNC_7(VAR_15, VAR_7);
 }
 FUNC_13(&VAR_9->delayed_bio_q_mtx);
 FUNC_11(&VAR_9->delayed_bio_q_mtx);

 FUNC_7(VAR_9->map, VAR_7);
 FUNC_7(VAR_9->components, VAR_7);
 FUNC_6(VAR_9, sizeof *VAR_9);
 FUNC_7(VAR_9, VAR_7);

 VAR_12 = FUNC_1(&VAR_13->provider);
 if (VAR_12 == ((void*)0) || (VAR_12->acr == 0 && VAR_12->acw == 0 && VAR_12->ace == 0))
  FUNC_2(VAR_4, "Device %s destroyed", VAR_13->name);

 FUNC_10(VAR_13, VAR_3);

 return (0);
}
