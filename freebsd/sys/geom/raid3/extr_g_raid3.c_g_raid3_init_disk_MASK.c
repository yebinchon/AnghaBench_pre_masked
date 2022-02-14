
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct g_raid3_softc {struct g_raid3_disk* sc_disks; } ;
struct g_raid3_metadata {size_t md_no; char* md_provider; int md_syncid; int md_genid; int md_sync_offset; int md_dflags; } ;
struct TYPE_2__ {int ds_syncid; int ds_offset_done; int ds_offset; int * ds_consumer; } ;
struct g_raid3_disk {TYPE_1__ d_sync; int d_genid; int d_flags; int d_state; } ;
struct g_provider {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct g_raid3_disk*,struct g_provider*) ;

__attribute__((used)) static struct g_raid3_disk *
FUNC_1(struct g_raid3_softc *VAR_2, struct g_provider *VAR_3,
    struct g_raid3_metadata *VAR_4, int *VAR_5)
{
 struct g_raid3_disk *VAR_6;
 int VAR_7;

 VAR_6 = &VAR_2->sc_disks[VAR_4->md_no];
 VAR_7 = FUNC_0(VAR_6, VAR_3);
 if (VAR_7 != 0) {
  if (VAR_5 != ((void*)0))
   *VAR_5 = VAR_7;
  return (((void*)0));
 }
 VAR_6->d_state = VAR_1;
 VAR_6->d_flags = VAR_4->md_dflags;
 if (VAR_4->md_provider[0] != '\0')
  VAR_6->d_flags |= VAR_0;
 VAR_6->d_sync.ds_consumer = ((void*)0);
 VAR_6->d_sync.ds_offset = VAR_4->md_sync_offset;
 VAR_6->d_sync.ds_offset_done = VAR_4->md_sync_offset;
 VAR_6->d_genid = VAR_4->md_genid;
 VAR_6->d_sync.ds_syncid = VAR_4->md_syncid;
 if (VAR_5 != ((void*)0))
  *VAR_5 = 0;
 return (VAR_6);
}
