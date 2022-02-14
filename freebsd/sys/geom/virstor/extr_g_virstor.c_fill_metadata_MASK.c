
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u_int ;
struct g_virstor_softc {int n_components; int chunk_size; int virsize; int id; TYPE_1__* geom; struct g_virstor_component* components; } ;
struct g_virstor_metadata {size_t no; int flags; int chunk_reserved; int chunk_next; int chunk_count; int provsize; int provider; int md_count; int md_chunk_size; int md_virsize; int md_id; int md_name; int md_version; int md_magic; } ;
struct g_virstor_component {int flags; int chunk_reserved; int chunk_next; int chunk_count; TYPE_3__* gcons; } ;
struct TYPE_6__ {TYPE_2__* provider; } ;
struct TYPE_5__ {int mediasize; int name; } ;
struct TYPE_4__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct g_virstor_metadata*,int) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct g_virstor_softc *VAR_2, struct g_virstor_metadata *VAR_3,
    u_int VAR_4, u_int VAR_5)
{
 struct g_virstor_component *VAR_6;

 FUNC_0(VAR_3, sizeof *VAR_3);
 VAR_6 = &VAR_2->components[VAR_4];

 FUNC_1(VAR_3->md_magic, VAR_0, sizeof VAR_3->md_magic);
 VAR_3->md_version = VAR_1;
 FUNC_1(VAR_3->md_name, VAR_2->geom->name, sizeof VAR_3->md_name);
 VAR_3->md_id = VAR_2->id;
 VAR_3->md_virsize = VAR_2->virsize;
 VAR_3->md_chunk_size = VAR_2->chunk_size;
 VAR_3->md_count = VAR_2->n_components;

 if (VAR_5) {
  FUNC_1(VAR_3->provider, VAR_6->gcons->provider->name,
      sizeof VAR_3->provider);
 }
 VAR_3->no = VAR_4;
 VAR_3->provsize = VAR_6->gcons->provider->mediasize;
 VAR_3->chunk_count = VAR_6->chunk_count;
 VAR_3->chunk_next = VAR_6->chunk_next;
 VAR_3->chunk_reserved = VAR_6->chunk_reserved;
 VAR_3->flags = VAR_6->flags;
}
