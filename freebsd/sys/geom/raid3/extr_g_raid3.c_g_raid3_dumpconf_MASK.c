
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int ;
struct sbuf {int dummy; } ;
struct TYPE_4__ {struct g_geom* ds_geom; } ;
struct g_raid3_softc {int sc_ndisks; int sc_mediasize; int sc_syncid; int sc_genid; scalar_t__ sc_flags; int sc_lock; int sc_state; scalar_t__ sc_id; TYPE_3__* sc_zones; TYPE_1__ sc_sync; } ;
struct TYPE_5__ {int ds_offset; int ds_syncid; } ;
struct g_raid3_disk {int d_no; scalar_t__ d_state; int d_genid; scalar_t__ d_flags; TYPE_2__ d_sync; } ;
struct g_provider {int dummy; } ;
struct g_geom {struct g_raid3_softc* softc; } ;
struct g_consumer {struct g_raid3_disk* private; } ;
typedef int intmax_t ;
struct TYPE_6__ {int sz_requested; int sz_failed; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_13 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (struct sbuf*,char*) ;
 int FUNC_7 (struct sbuf*,char*,...) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void
FUNC_10(struct sbuf *VAR_14, const char *VAR_15, struct g_geom *VAR_16,
    struct g_consumer *VAR_17, struct g_provider *VAR_18)
{
 struct g_raid3_softc *VAR_19;

 FUNC_3();

 VAR_19 = VAR_16->softc;
 if (VAR_19 == ((void*)0))
  return;

 if (VAR_16 == VAR_19->sc_sync.ds_geom)
  return;
 if (VAR_18 != ((void*)0)) {

 } else if (VAR_17 != ((void*)0)) {
  struct g_raid3_disk *VAR_20;

  VAR_20 = VAR_17->private;
  if (VAR_20 == ((void*)0))
   return;
  FUNC_5();
  FUNC_8(&VAR_19->sc_lock);
  FUNC_7(VAR_14, "%s<Type>", VAR_15);
  if (VAR_20->d_no == VAR_19->sc_ndisks - 1)
   FUNC_6(VAR_14, "PARITY");
  else
   FUNC_6(VAR_14, "DATA");
  FUNC_6(VAR_14, "</Type>\n");
  FUNC_7(VAR_14, "%s<Number>%u</Number>\n", VAR_15,
      (u_int)VAR_20->d_no);
  if (VAR_20->d_state == VAR_9) {
   FUNC_7(VAR_14, "%s<Synchronized>", VAR_15);
   if (VAR_20->d_sync.ds_offset == 0)
    FUNC_6(VAR_14, "0%");
   else {
    FUNC_7(VAR_14, "%u%%",
        (u_int)((VAR_20->d_sync.ds_offset * 100) /
        (VAR_19->sc_mediasize / (VAR_19->sc_ndisks - 1))));
   }
   FUNC_6(VAR_14, "</Synchronized>\n");
   if (VAR_20->d_sync.ds_offset > 0) {
    FUNC_7(VAR_14, "%s<BytesSynced>%jd"
        "</BytesSynced>\n", VAR_15,
        (intmax_t)VAR_20->d_sync.ds_offset);
   }
  }
  FUNC_7(VAR_14, "%s<SyncID>%u</SyncID>\n", VAR_15,
      VAR_20->d_sync.ds_syncid);
  FUNC_7(VAR_14, "%s<GenID>%u</GenID>\n", VAR_15, VAR_20->d_genid);
  FUNC_7(VAR_14, "%s<Flags>", VAR_15);
  if (VAR_20->d_flags == 0)
   FUNC_6(VAR_14, "NONE");
  else {
   int VAR_21 = 1;
   do { if ((VAR_20->d_flags & (VAR_5)) != 0) { if (!VAR_21) FUNC_6(VAR_14, ", "); else VAR_21 = 0; FUNC_6(VAR_14, "DIRTY"); } } while (0);
   do { if ((VAR_20->d_flags & (VAR_7)) != 0) { if (!VAR_21) FUNC_6(VAR_14, ", "); else VAR_21 = 0; FUNC_6(VAR_14, "HARDCODED"); } } while (0);
   do { if ((VAR_20->d_flags & (VAR_8)) != 0) { if (!VAR_21) FUNC_6(VAR_14, ", "); else VAR_21 = 0; FUNC_6(VAR_14, "SYNCHRONIZING"); } } while (0);

   do { if ((VAR_20->d_flags & (VAR_6)) != 0) { if (!VAR_21) FUNC_6(VAR_14, ", "); else VAR_21 = 0; FUNC_6(VAR_14, "FORCE_SYNC"); } } while (0);
   do { if ((VAR_20->d_flags & (VAR_4)) != 0) { if (!VAR_21) FUNC_6(VAR_14, ", "); else VAR_21 = 0; FUNC_6(VAR_14, "BROKEN"); } } while (0);

  }
  FUNC_6(VAR_14, "</Flags>\n");
  FUNC_7(VAR_14, "%s<State>%s</State>\n", VAR_15,
      FUNC_2(VAR_20->d_state));
  FUNC_9(&VAR_19->sc_lock);
  FUNC_4();
 } else {
  FUNC_5();
  FUNC_8(&VAR_19->sc_lock);
  if (!VAR_13) {
   FUNC_7(VAR_14,
       "%s<Zone4kRequested>%u</Zone4kRequested>\n", VAR_15,
       VAR_19->sc_zones[VAR_11].sz_requested);
   FUNC_7(VAR_14,
       "%s<Zone4kFailed>%u</Zone4kFailed>\n", VAR_15,
       VAR_19->sc_zones[VAR_11].sz_failed);
   FUNC_7(VAR_14,
       "%s<Zone16kRequested>%u</Zone16kRequested>\n", VAR_15,
       VAR_19->sc_zones[VAR_10].sz_requested);
   FUNC_7(VAR_14,
       "%s<Zone16kFailed>%u</Zone16kFailed>\n", VAR_15,
       VAR_19->sc_zones[VAR_10].sz_failed);
   FUNC_7(VAR_14,
       "%s<Zone64kRequested>%u</Zone64kRequested>\n", VAR_15,
       VAR_19->sc_zones[VAR_12].sz_requested);
   FUNC_7(VAR_14,
       "%s<Zone64kFailed>%u</Zone64kFailed>\n", VAR_15,
       VAR_19->sc_zones[VAR_12].sz_failed);
  }
  FUNC_7(VAR_14, "%s<ID>%u</ID>\n", VAR_15, (u_int)VAR_19->sc_id);
  FUNC_7(VAR_14, "%s<SyncID>%u</SyncID>\n", VAR_15, VAR_19->sc_syncid);
  FUNC_7(VAR_14, "%s<GenID>%u</GenID>\n", VAR_15, VAR_19->sc_genid);
  FUNC_7(VAR_14, "%s<Flags>", VAR_15);
  if (VAR_19->sc_flags == 0)
   FUNC_6(VAR_14, "NONE");
  else {
   int VAR_22 = 1;
   do { if ((VAR_19->sc_flags & (VAR_1)) != 0) { if (!VAR_22) FUNC_6(VAR_14, ", "); else VAR_22 = 0; FUNC_6(VAR_14, "NOFAILSYNC"); } } while (0);
   do { if ((VAR_19->sc_flags & (VAR_0)) != 0) { if (!VAR_22) FUNC_6(VAR_14, ", "); else VAR_22 = 0; FUNC_6(VAR_14, "NOAUTOSYNC"); } } while (0);
   do { if ((VAR_19->sc_flags & (VAR_2)) != 0) { if (!VAR_22) FUNC_6(VAR_14, ", "); else VAR_22 = 0; FUNC_6(VAR_14, "ROUND-ROBIN"); } } while (0);

   do { if ((VAR_19->sc_flags & (VAR_3)) != 0) { if (!VAR_22) FUNC_6(VAR_14, ", "); else VAR_22 = 0; FUNC_6(VAR_14, "VERIFY"); } } while (0);

  }
  FUNC_6(VAR_14, "</Flags>\n");
  FUNC_7(VAR_14, "%s<Components>%u</Components>\n", VAR_15,
      VAR_19->sc_ndisks);
  FUNC_7(VAR_14, "%s<State>%s</State>\n", VAR_15,
      FUNC_1(VAR_19->sc_state));
  FUNC_9(&VAR_19->sc_lock);
  FUNC_4();
 }
}
