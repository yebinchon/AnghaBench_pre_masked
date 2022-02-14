
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_3__ {int jj_offset; } ;
struct g_journal_softc {int sc_flags; int sc_name; int sc_journal_previous_id; TYPE_1__ sc_inactive; int sc_jend; int sc_jstart; int sc_orig_type; int sc_id; struct g_consumer* sc_dconsumer; } ;
struct g_journal_metadata {scalar_t__ md_provsize; int md_provider; int md_flags; int md_jid; int md_joffset; int md_jend; int md_jstart; int md_type; int md_id; int md_version; int md_magic; } ;
struct g_consumer {TYPE_2__* provider; } ;
struct bio {int (* bio_done ) (struct bio*) ;int bio_cmd; int * bio_data; scalar_t__ bio_length; scalar_t__ bio_offset; } ;
struct TYPE_4__ {scalar_t__ sectorsize; scalar_t__ mediasize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct bio*,char*) ;
 int FUNC_1 (int ,int) ;
 struct bio* FUNC_2 () ;
 int FUNC_3 (struct bio*,struct g_consumer*) ;
 int FUNC_4 (struct g_journal_softc*) ;
 int FUNC_5 (struct bio*) ;
 int * FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (struct g_journal_metadata*,int *) ;
 int FUNC_8 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_9(struct g_journal_softc *VAR_8)
{
 struct g_journal_metadata VAR_9;
 struct g_consumer *VAR_10;
 struct bio *VAR_11;
 u_char *VAR_12;

 VAR_10 = VAR_8->sc_dconsumer;
 VAR_12 = FUNC_6(VAR_10->provider->sectorsize, VAR_7);
 FUNC_8(VAR_9.md_magic, VAR_5, sizeof(VAR_9.md_magic));
 VAR_9.md_version = VAR_6;
 VAR_9.md_id = VAR_8->sc_id;
 VAR_9.md_type = VAR_8->sc_orig_type;
 VAR_9.md_jstart = VAR_8->sc_jstart;
 VAR_9.md_jend = VAR_8->sc_jend;
 VAR_9.md_joffset = VAR_8->sc_inactive.jj_offset;
 VAR_9.md_jid = VAR_8->sc_journal_previous_id;
 VAR_9.md_flags = 0;
 if (VAR_8->sc_flags & VAR_1)
  VAR_9.md_flags |= VAR_4;

 if (VAR_8->sc_flags & VAR_3)
  FUNC_8(VAR_9.md_provider, VAR_8->sc_name, sizeof(VAR_9.md_provider));
 else
  FUNC_1(VAR_9.md_provider, sizeof(VAR_9.md_provider));
 VAR_9.md_provsize = VAR_10->provider->mediasize;
 FUNC_7(&VAR_9, VAR_12);







 FUNC_4(VAR_8);

 VAR_11 = FUNC_2();
 VAR_11->bio_offset = VAR_10->provider->mediasize - VAR_10->provider->sectorsize;
 VAR_11->bio_length = VAR_10->provider->sectorsize;
 VAR_11->bio_data = VAR_12;
 VAR_11->bio_cmd = VAR_0;
 if (!(VAR_8->sc_flags & VAR_2)) {
  VAR_11->bio_done = FUNC_5;
  FUNC_3(VAR_11, VAR_10);
 } else {
  VAR_11->bio_done = ((void*)0);
  FUNC_3(VAR_11, VAR_10);
  FUNC_0(VAR_11, "gjmdu");
  FUNC_5(VAR_11);
 }




 FUNC_4(VAR_8);
}
