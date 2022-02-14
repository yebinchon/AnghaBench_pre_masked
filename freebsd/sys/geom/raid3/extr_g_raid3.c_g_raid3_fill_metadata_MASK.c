
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct g_raid3_softc {int sc_ndisks; int sc_flags; int sc_sectorsize; int sc_mediasize; int sc_genid; int sc_id; int sc_name; } ;
struct g_raid3_metadata {int md_all; int md_mflags; int md_dflags; int md_sync_offset; int md_provsize; int md_provider; int md_syncid; int md_no; int md_sectorsize; int md_mediasize; int md_genid; int md_id; int md_name; int md_version; int md_magic; } ;
struct TYPE_3__ {int ds_offset_done; int ds_syncid; } ;
struct g_raid3_disk {int d_flags; scalar_t__ d_state; TYPE_2__* d_consumer; TYPE_1__ d_sync; int d_no; struct g_raid3_softc* d_softc; } ;
struct g_provider {int mediasize; int name; } ;
struct TYPE_4__ {struct g_provider* provider; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ,int) ;

void
FUNC_2(struct g_raid3_disk *VAR_6, struct g_raid3_metadata *VAR_7)
{
 struct g_raid3_softc *VAR_8;
 struct g_provider *VAR_9;

 VAR_8 = VAR_6->d_softc;
 FUNC_1(VAR_7->md_magic, VAR_4, sizeof(VAR_7->md_magic));
 VAR_7->md_version = VAR_5;
 FUNC_1(VAR_7->md_name, VAR_8->sc_name, sizeof(VAR_7->md_name));
 VAR_7->md_id = VAR_8->sc_id;
 VAR_7->md_all = VAR_8->sc_ndisks;
 VAR_7->md_genid = VAR_8->sc_genid;
 VAR_7->md_mediasize = VAR_8->sc_mediasize;
 VAR_7->md_sectorsize = VAR_8->sc_sectorsize;
 VAR_7->md_mflags = (VAR_8->sc_flags & VAR_0);
 VAR_7->md_no = VAR_6->d_no;
 VAR_7->md_syncid = VAR_6->d_sync.ds_syncid;
 VAR_7->md_dflags = (VAR_6->d_flags & VAR_2);
 if (VAR_6->d_state != VAR_3)
  VAR_7->md_sync_offset = 0;
 else {
  VAR_7->md_sync_offset =
      VAR_6->d_sync.ds_offset_done / (VAR_8->sc_ndisks - 1);
 }
 if (VAR_6->d_consumer != ((void*)0) && VAR_6->d_consumer->provider != ((void*)0))
  VAR_9 = VAR_6->d_consumer->provider;
 else
  VAR_9 = ((void*)0);
 if ((VAR_6->d_flags & VAR_1) != 0 && VAR_9 != ((void*)0))
  FUNC_1(VAR_7->md_provider, VAR_9->name, sizeof(VAR_7->md_provider));
 else
  FUNC_0(VAR_7->md_provider, sizeof(VAR_7->md_provider));
 if (VAR_9 != ((void*)0))
  VAR_7->md_provsize = VAR_9->mediasize;
 else
  VAR_7->md_provsize = 0;
}
