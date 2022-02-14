
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u_int ;
struct sbuf {int dummy; } ;
struct g_virstor_softc {size_t n_components; size_t chunk_size; size_t chunk_count; size_t virsize; TYPE_3__* components; } ;
struct g_virstor_component {size_t index; size_t chunk_count; size_t chunk_next; size_t chunk_reserved; } ;
struct g_provider {int dummy; } ;
struct g_geom {struct g_virstor_softc* softc; } ;
struct g_consumer {struct g_virstor_component* private; } ;
typedef size_t off_t ;
struct TYPE_6__ {TYPE_2__* gcons; scalar_t__ chunk_reserved; scalar_t__ chunk_next; scalar_t__ chunk_count; } ;
struct TYPE_5__ {TYPE_1__* provider; } ;
struct TYPE_4__ {scalar_t__ mediasize; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct sbuf*,char*,char const*,size_t,...) ;
 int FUNC_2 (struct g_virstor_softc*) ;

__attribute__((used)) static void
FUNC_3(struct sbuf *VAR_0, const char *VAR_1, struct g_geom *VAR_2,
    struct g_consumer *VAR_3, struct g_provider *VAR_4)
{
 struct g_virstor_softc *VAR_5;

 FUNC_0();
 VAR_5 = VAR_2->softc;

 if (VAR_5 == ((void*)0) || VAR_4 != ((void*)0))
  return;

 if (VAR_3 != ((void*)0)) {

  struct g_virstor_component *VAR_6;

  VAR_6 = VAR_3->private;
  if (VAR_6 == ((void*)0))
   return;
  FUNC_1(VAR_0, "%s<ComponentIndex>%u</ComponentIndex>\n",
      VAR_1, VAR_6->index);
  FUNC_1(VAR_0, "%s<ChunkCount>%u</ChunkCount>\n",
      VAR_1, VAR_6->chunk_count);
  FUNC_1(VAR_0, "%s<ChunksUsed>%u</ChunksUsed>\n",
      VAR_1, VAR_6->chunk_next);
  FUNC_1(VAR_0, "%s<ChunksReserved>%u</ChunksReserved>\n",
      VAR_1, VAR_6->chunk_reserved);
  FUNC_1(VAR_0, "%s<StorageFree>%u%%</StorageFree>\n",
      VAR_1,
      VAR_6->chunk_next > 0 ? 100 -
      ((VAR_6->chunk_next + VAR_6->chunk_reserved) * 100) /
      VAR_6->chunk_count : 100);
 } else {

  u_int VAR_7, VAR_8, VAR_9;
  off_t VAR_10;

  VAR_7 = VAR_8 = VAR_10 = 0;
  for (VAR_9 = 0; VAR_9 < VAR_5->n_components; VAR_9++) {
   if (VAR_5->components[VAR_9].gcons != ((void*)0)) {
    VAR_7 += VAR_5->components[VAR_9].chunk_count;
    VAR_8 += VAR_5->components[VAR_9].chunk_next +
        VAR_5->components[VAR_9].chunk_reserved;
    VAR_10 += VAR_5->components[VAR_9].gcons->
        provider->mediasize;
   }
  }

  FUNC_1(VAR_0, "%s<Status>"
      "Components=%u, Online=%u</Status>\n", VAR_1,
      VAR_5->n_components, FUNC_2(VAR_5));
  FUNC_1(VAR_0, "%s<State>%u%% physical free</State>\n",
      VAR_1, 100-(VAR_8 * 100) / VAR_7);
  FUNC_1(VAR_0, "%s<ChunkSize>%zu</ChunkSize>\n", VAR_1,
      VAR_5->chunk_size);
  FUNC_1(VAR_0, "%s<PhysicalFree>%u%%</PhysicalFree>\n",
      VAR_1, VAR_8 > 0 ? 100 - (VAR_8 * 100) / VAR_7 : 100);
  FUNC_1(VAR_0, "%s<ChunkPhysicalCount>%u</ChunkPhysicalCount>\n",
      VAR_1, VAR_7);
  FUNC_1(VAR_0, "%s<ChunkVirtualCount>%zu</ChunkVirtualCount>\n",
      VAR_1, VAR_5->chunk_count);
  FUNC_1(VAR_0, "%s<PhysicalBacking>%zu%%</PhysicalBacking>\n",
      VAR_1,
      (VAR_7 * 100) / VAR_5->chunk_count);
  FUNC_1(VAR_0, "%s<PhysicalBackingSize>%jd</PhysicalBackingSize>\n",
      VAR_1, VAR_10);
  FUNC_1(VAR_0, "%s<VirtualSize>%jd</VirtualSize>\n", VAR_1,
      VAR_5->virsize);
 }
}
