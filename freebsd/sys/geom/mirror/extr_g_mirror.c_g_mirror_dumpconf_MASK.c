
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef char* u_int ;
struct sbuf {int dummy; } ;
struct g_provider {int dummy; } ;
struct TYPE_3__ {struct g_geom* ds_geom; } ;
struct g_mirror_softc {int sc_mediasize; int sc_type; scalar_t__ sc_flags; scalar_t__ sc_ndisks; scalar_t__ sc_state; int sc_balance; scalar_t__ sc_slice; int sc_genid; int sc_syncid; scalar_t__ sc_id; TYPE_1__ sc_sync; } ;
struct TYPE_4__ {int ds_offset; int ds_syncid; } ;
struct g_mirror_disk {scalar_t__ d_state; scalar_t__ d_flags; int d_priority; int d_genid; TYPE_2__ d_sync; scalar_t__ d_id; } ;
struct g_geom {struct g_mirror_softc* softc; } ;
struct g_consumer {struct g_mirror_disk* private; } ;
typedef int intmax_t ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;


 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (struct g_mirror_softc*,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (struct sbuf*,char*) ;
 int FUNC_6 (struct sbuf*,char*,char const*,...) ;

__attribute__((used)) static void
FUNC_7(struct sbuf *VAR_11, const char *VAR_12, struct g_geom *VAR_13,
    struct g_consumer *VAR_14, struct g_provider *VAR_15)
{
 struct g_mirror_softc *VAR_16;

 FUNC_4();

 VAR_16 = VAR_13->softc;
 if (VAR_16 == ((void*)0))
  return;

 if (VAR_13 == VAR_16->sc_sync.ds_geom)
  return;
 if (VAR_15 != ((void*)0)) {

 } else if (VAR_14 != ((void*)0)) {
  struct g_mirror_disk *VAR_17;

  VAR_17 = VAR_14->private;
  if (VAR_17 == ((void*)0))
   return;
  FUNC_6(VAR_11, "%s<ID>%u</ID>\n", VAR_12, (u_int)VAR_17->d_id);
  if (VAR_17->d_state == VAR_10) {
   FUNC_6(VAR_11, "%s<Synchronized>", VAR_12);
   if (VAR_17->d_sync.ds_offset == 0)
    FUNC_5(VAR_11, "0%");
   else
    FUNC_6(VAR_11, "%u%%",
        (u_int)((VAR_17->d_sync.ds_offset * 100) /
        VAR_16->sc_mediasize));
   FUNC_5(VAR_11, "</Synchronized>\n");
   if (VAR_17->d_sync.ds_offset > 0)
    FUNC_6(VAR_11, "%s<BytesSynced>%jd"
        "</BytesSynced>\n", VAR_12,
        (intmax_t)VAR_17->d_sync.ds_offset);
  }
  FUNC_6(VAR_11, "%s<SyncID>%u</SyncID>\n", VAR_12,
      VAR_17->d_sync.ds_syncid);
  FUNC_6(VAR_11, "%s<GenID>%u</GenID>\n", VAR_12,
      VAR_17->d_genid);
  FUNC_6(VAR_11, "%s<Flags>", VAR_12);
  if (VAR_17->d_flags == 0)
   FUNC_5(VAR_11, "NONE");
  else {
   int VAR_18 = 1;
   do { if ((VAR_17->d_flags & (VAR_4)) != 0) { if (!VAR_18) FUNC_5(VAR_11, ", "); else VAR_18 = 0; FUNC_5(VAR_11, "DIRTY"); } } while (0);
   do { if ((VAR_17->d_flags & (VAR_6)) != 0) { if (!VAR_18) FUNC_5(VAR_11, ", "); else VAR_18 = 0; FUNC_5(VAR_11, "HARDCODED"); } } while (0);
   do { if ((VAR_17->d_flags & (VAR_7)) != 0) { if (!VAR_18) FUNC_5(VAR_11, ", "); else VAR_18 = 0; FUNC_5(VAR_11, "INACTIVE"); } } while (0);
   do { if ((VAR_17->d_flags & (VAR_8)) != 0) { if (!VAR_18) FUNC_5(VAR_11, ", "); else VAR_18 = 0; FUNC_5(VAR_11, "SYNCHRONIZING"); } } while (0);

   do { if ((VAR_17->d_flags & (VAR_5)) != 0) { if (!VAR_18) FUNC_5(VAR_11, ", "); else VAR_18 = 0; FUNC_5(VAR_11, "FORCE_SYNC"); } } while (0);
   do { if ((VAR_17->d_flags & (VAR_3)) != 0) { if (!VAR_18) FUNC_5(VAR_11, ", "); else VAR_18 = 0; FUNC_5(VAR_11, "BROKEN"); } } while (0);

  }
  FUNC_5(VAR_11, "</Flags>\n");
  FUNC_6(VAR_11, "%s<Priority>%u</Priority>\n", VAR_12,
      VAR_17->d_priority);
  FUNC_6(VAR_11, "%s<State>%s</State>\n", VAR_12,
      FUNC_2(VAR_17->d_state));
 } else {
  FUNC_6(VAR_11, "%s<Type>", VAR_12);
  switch (VAR_16->sc_type) {
  case 129:
   FUNC_5(VAR_11, "AUTOMATIC");
   break;
  case 128:
   FUNC_5(VAR_11, "MANUAL");
   break;
  default:
   FUNC_5(VAR_11, "UNKNOWN");
   break;
  }
  FUNC_5(VAR_11, "</Type>\n");
  FUNC_6(VAR_11, "%s<ID>%u</ID>\n", VAR_12, (u_int)VAR_16->sc_id);
  FUNC_6(VAR_11, "%s<SyncID>%u</SyncID>\n", VAR_12, VAR_16->sc_syncid);
  FUNC_6(VAR_11, "%s<GenID>%u</GenID>\n", VAR_12, VAR_16->sc_genid);
  FUNC_6(VAR_11, "%s<Flags>", VAR_12);
  if (VAR_16->sc_flags == 0)
   FUNC_5(VAR_11, "NONE");
  else {
   int VAR_19 = 1;
   do { if ((VAR_16->sc_flags & (VAR_1)) != 0) { if (!VAR_19) FUNC_5(VAR_11, ", "); else VAR_19 = 0; FUNC_5(VAR_11, "NOFAILSYNC"); } } while (0);
   do { if ((VAR_16->sc_flags & (VAR_0)) != 0) { if (!VAR_19) FUNC_5(VAR_11, ", "); else VAR_19 = 0; FUNC_5(VAR_11, "NOAUTOSYNC"); } } while (0);

  }
  FUNC_5(VAR_11, "</Flags>\n");
  FUNC_6(VAR_11, "%s<Slice>%u</Slice>\n", VAR_12,
      (u_int)VAR_16->sc_slice);
  FUNC_6(VAR_11, "%s<Balance>%s</Balance>\n", VAR_12,
      FUNC_1(VAR_16->sc_balance));
  FUNC_6(VAR_11, "%s<Components>%u</Components>\n", VAR_12,
      VAR_16->sc_ndisks);
  FUNC_6(VAR_11, "%s<State>", VAR_12);
  if (VAR_16->sc_state == VAR_2)
   FUNC_6(VAR_11, "%s", "STARTING");
  else if (VAR_16->sc_ndisks ==
      FUNC_3(VAR_16, VAR_9))
   FUNC_6(VAR_11, "%s", "COMPLETE");
  else
   FUNC_6(VAR_11, "%s", "DEGRADED");
  FUNC_5(VAR_11, "</State>\n");
 }
}
