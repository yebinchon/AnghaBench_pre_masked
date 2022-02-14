
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct g_provider {int dummy; } ;
struct g_mirror_softc {int dummy; } ;
struct g_mirror_metadata {char* md_provider; int md_mediasize; int md_balance; int md_slice; int md_all; int md_syncid; int md_genid; int md_sync_offset; int md_dflags; int md_priority; int md_did; } ;
struct TYPE_2__ {int ds_syncid; int ds_update_ts; int ds_offset_done; int ds_offset; int * ds_consumer; } ;
struct g_mirror_disk {int d_init_mediasize; int d_init_balance; int d_init_slice; int d_init_ndisks; TYPE_1__ d_sync; int d_genid; int d_flags; int d_consumer; int d_priority; int d_state; int d_id; struct g_mirror_softc* d_softc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct g_mirror_disk*,int ) ;
 int FUNC_1 (char*,int ,int*) ;
 int FUNC_2 (struct g_mirror_disk*,struct g_provider*) ;
 struct g_mirror_disk* FUNC_3 (int,int ,int) ;
 int VAR_7 ;

__attribute__((used)) static struct g_mirror_disk *
FUNC_4(struct g_mirror_softc *VAR_8, struct g_provider *VAR_9,
    struct g_mirror_metadata *VAR_10, int *VAR_11)
{
 struct g_mirror_disk *VAR_12;
 int VAR_13, VAR_14;

 VAR_12 = FUNC_3(sizeof(*VAR_12), VAR_4, VAR_5 | VAR_6);
 if (VAR_12 == ((void*)0)) {
  VAR_14 = VAR_0;
  goto fail;
 }
 VAR_12->d_softc = VAR_8;
 VAR_14 = FUNC_2(VAR_12, VAR_9);
 if (VAR_14 != 0)
  goto fail;
 VAR_12->d_id = VAR_10->md_did;
 VAR_12->d_state = VAR_3;
 VAR_12->d_priority = VAR_10->md_priority;
 VAR_12->d_flags = VAR_10->md_dflags;
 VAR_14 = FUNC_1("GEOM::candelete", VAR_12->d_consumer, &VAR_13);
 if (VAR_14 == 0 && VAR_13 != 0)
  VAR_12->d_flags |= VAR_1;
 if (VAR_10->md_provider[0] != '\0')
  VAR_12->d_flags |= VAR_2;
 VAR_12->d_sync.ds_consumer = ((void*)0);
 VAR_12->d_sync.ds_offset = VAR_10->md_sync_offset;
 VAR_12->d_sync.ds_offset_done = VAR_10->md_sync_offset;
 VAR_12->d_sync.ds_update_ts = VAR_7;
 VAR_12->d_genid = VAR_10->md_genid;
 VAR_12->d_sync.ds_syncid = VAR_10->md_syncid;
 VAR_12->d_init_ndisks = VAR_10->md_all;
 VAR_12->d_init_slice = VAR_10->md_slice;
 VAR_12->d_init_balance = VAR_10->md_balance;
 VAR_12->d_init_mediasize = VAR_10->md_mediasize;
 if (VAR_11 != ((void*)0))
  *VAR_11 = 0;
 return (VAR_12);
fail:
 if (VAR_11 != ((void*)0))
  *VAR_11 = VAR_14;
 if (VAR_12 != ((void*)0))
  FUNC_0(VAR_12, VAR_4);
 return (((void*)0));
}
