
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct g_mirror_softc {int sc_flags; int sc_sectorsize; int sc_mediasize; int sc_genid; int sc_balance; int sc_slice; int sc_ndisks; int sc_id; int sc_name; } ;
struct g_mirror_metadata {int md_mflags; int md_dflags; scalar_t__ md_provsize; int md_provider; scalar_t__ md_sync_offset; scalar_t__ md_syncid; scalar_t__ md_priority; int md_did; int md_sectorsize; int md_mediasize; int md_genid; int md_balance; int md_slice; int md_all; int md_mid; int md_name; int md_version; int md_magic; } ;
struct TYPE_4__ {scalar_t__ ds_offset_done; scalar_t__ ds_syncid; } ;
struct g_mirror_disk {int d_flags; scalar_t__ d_state; TYPE_3__* d_consumer; TYPE_1__ d_sync; scalar_t__ d_priority; int d_id; } ;
struct TYPE_6__ {TYPE_2__* provider; } ;
struct TYPE_5__ {scalar_t__ mediasize; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ,int) ;

void
FUNC_3(struct g_mirror_softc *VAR_6, struct g_mirror_disk *VAR_7,
    struct g_mirror_metadata *VAR_8)
{

 FUNC_2(VAR_8->md_magic, VAR_4, sizeof(VAR_8->md_magic));
 VAR_8->md_version = VAR_5;
 FUNC_2(VAR_8->md_name, VAR_6->sc_name, sizeof(VAR_8->md_name));
 VAR_8->md_mid = VAR_6->sc_id;
 VAR_8->md_all = VAR_6->sc_ndisks;
 VAR_8->md_slice = VAR_6->sc_slice;
 VAR_8->md_balance = VAR_6->sc_balance;
 VAR_8->md_genid = VAR_6->sc_genid;
 VAR_8->md_mediasize = VAR_6->sc_mediasize;
 VAR_8->md_sectorsize = VAR_6->sc_sectorsize;
 VAR_8->md_mflags = (VAR_6->sc_flags & VAR_0);
 FUNC_1(VAR_8->md_provider, sizeof(VAR_8->md_provider));
 if (VAR_7 == ((void*)0)) {
  VAR_8->md_did = FUNC_0();
  VAR_8->md_priority = 0;
  VAR_8->md_syncid = 0;
  VAR_8->md_dflags = 0;
  VAR_8->md_sync_offset = 0;
  VAR_8->md_provsize = 0;
 } else {
  VAR_8->md_did = VAR_7->d_id;
  VAR_8->md_priority = VAR_7->d_priority;
  VAR_8->md_syncid = VAR_7->d_sync.ds_syncid;
  VAR_8->md_dflags = (VAR_7->d_flags & VAR_2);
  if (VAR_7->d_state == VAR_3)
   VAR_8->md_sync_offset = VAR_7->d_sync.ds_offset_done;
  else
   VAR_8->md_sync_offset = 0;
  if ((VAR_7->d_flags & VAR_1) != 0) {
   FUNC_2(VAR_8->md_provider,
       VAR_7->d_consumer->provider->name,
       sizeof(VAR_8->md_provider));
  }
  VAR_8->md_provsize = VAR_7->d_consumer->provider->mediasize;
 }
}
