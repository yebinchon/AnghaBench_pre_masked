
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct g_virstor_softc {size_t n_components; struct g_geom* geom; struct g_virstor_component* components; } ;
struct g_virstor_metadata {size_t no; int flags; int chunk_reserved; int chunk_next; int chunk_count; } ;
struct g_virstor_component {size_t index; int flags; int chunk_reserved; int chunk_next; int chunk_count; struct g_virstor_softc* sc; struct g_consumer* gcons; } ;
struct g_provider {int name; int sectorsize; } ;
struct g_geom {int name; int consumer; } ;
struct g_consumer {scalar_t__ acr; scalar_t__ ace; struct g_virstor_component* private; scalar_t__ acw; TYPE_1__* provider; } ;
struct TYPE_2__ {int sectorsize; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct g_consumer* FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,int ,int ,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct g_consumer*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct g_consumer*,struct g_provider*) ;
 int FUNC_4 (struct g_consumer*) ;
 int FUNC_5 (struct g_consumer*) ;
 struct g_consumer* FUNC_6 (struct g_geom*) ;
 int FUNC_7 (struct g_virstor_softc*) ;

__attribute__((used)) static int
FUNC_8(struct g_virstor_softc *VAR_4, struct g_provider *VAR_5,
    struct g_virstor_metadata *VAR_6)
{
 struct g_virstor_component *VAR_7;
 struct g_consumer *VAR_8, *VAR_9;
 struct g_geom *VAR_10;
 int VAR_11;

 if (VAR_6->no >= VAR_4->n_components)
  return (VAR_1);


 VAR_7 = &(VAR_4->components[VAR_6->no]);
 if (VAR_7->gcons != ((void*)0))
  return (VAR_0);

 VAR_10 = VAR_4->geom;
 VAR_9 = FUNC_0(&VAR_10->consumer);

 VAR_8 = FUNC_6(VAR_10);
 VAR_11 = FUNC_3(VAR_8, VAR_5);

 if (VAR_11 != 0) {
  FUNC_4(VAR_8);
  return (VAR_11);
 }

 if (VAR_9 != ((void*)0)) {
  if (VAR_9->provider->sectorsize != VAR_5->sectorsize) {

   FUNC_1(VAR_3, "Provider %s of %s has invalid "
       "sector size (%d)", VAR_5->name, VAR_4->geom->name,
       VAR_5->sectorsize);
   return (VAR_1);
  }
  if (VAR_9->acr > 0 || VAR_9->acw || VAR_9->ace > 0) {


   VAR_11 = FUNC_2(VAR_8, VAR_9->acr, VAR_9->acw, VAR_9->ace);
   if (VAR_11 != 0) {
    FUNC_5(VAR_8);
    FUNC_4(VAR_8);
    return (VAR_11);
   }
  }
 }


 VAR_8->private = VAR_7;
 VAR_7->gcons = VAR_8;
 VAR_7->sc = VAR_4;
 VAR_7->index = VAR_6->no;
 VAR_7->chunk_count = VAR_6->chunk_count;
 VAR_7->chunk_next = VAR_6->chunk_next;
 VAR_7->chunk_reserved = VAR_6->chunk_reserved;
 VAR_7->flags = VAR_6->flags;

 FUNC_1(VAR_2, "%s attached to %s", VAR_5->name, VAR_4->geom->name);

 FUNC_7(VAR_4);
 return (0);
}
