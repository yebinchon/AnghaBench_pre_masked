
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* uintmax_t ;
struct sbuf {int dummy; } ;
struct g_provider {int dummy; } ;
struct g_geom {struct g_eli_softc* softc; } ;
struct g_eli_softc {int sc_flags; char* sc_nkey; char* sc_version; int sc_crypto; char* sc_ekeylen; int sc_ealgo; int sc_aalgo; scalar_t__ sc_ekeys_allocated; scalar_t__ sc_ekeys_total; } ;
struct g_consumer {int dummy; } ;


 int FUNC_0 (int,char*) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 char* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (struct sbuf*,char*) ;
 int FUNC_4 (struct sbuf*,char*,char const*,...) ;

__attribute__((used)) static void
FUNC_5(struct sbuf *VAR_15, const char *VAR_16, struct g_geom *VAR_17,
    struct g_consumer *VAR_18, struct g_provider *VAR_19)
{
 struct g_eli_softc *VAR_20;

 FUNC_2();
 VAR_20 = VAR_17->softc;
 if (VAR_20 == ((void*)0))
  return;
 if (VAR_19 != ((void*)0) || VAR_18 != ((void*)0))
  return;

 FUNC_4(VAR_15, "%s<KeysTotal>%ju</KeysTotal>\n", VAR_16,
     (uintmax_t)VAR_20->sc_ekeys_total);
 FUNC_4(VAR_15, "%s<KeysAllocated>%ju</KeysAllocated>\n", VAR_16,
     (uintmax_t)VAR_20->sc_ekeys_allocated);
 FUNC_4(VAR_15, "%s<Flags>", VAR_16);
 if (VAR_20->sc_flags == 0)
  FUNC_3(VAR_15, "NONE");
 else {
  int VAR_21 = 1;
  do { if (VAR_20->sc_flags & (VAR_12)) { if (!VAR_21) FUNC_3(VAR_15, ", "); else VAR_21 = 0; FUNC_3(VAR_15, "SUSPEND"); } } while (0);
  do { if (VAR_20->sc_flags & (VAR_11)) { if (!VAR_21) FUNC_3(VAR_15, ", "); else VAR_21 = 0; FUNC_3(VAR_15, "SINGLE-KEY"); } } while (0);
  do { if (VAR_20->sc_flags & (VAR_6)) { if (!VAR_21) FUNC_3(VAR_15, ", "); else VAR_21 = 0; FUNC_3(VAR_15, "NATIVE-BYTE-ORDER"); } } while (0);
  do { if (VAR_20->sc_flags & (VAR_8)) { if (!VAR_21) FUNC_3(VAR_15, ", "); else VAR_21 = 0; FUNC_3(VAR_15, "ONETIME"); } } while (0);
  do { if (VAR_20->sc_flags & (VAR_2)) { if (!VAR_21) FUNC_3(VAR_15, ", "); else VAR_21 = 0; FUNC_3(VAR_15, "BOOT"); } } while (0);
  do { if (VAR_20->sc_flags & (VAR_14)) { if (!VAR_21) FUNC_3(VAR_15, ", "); else VAR_21 = 0; FUNC_3(VAR_15, "W-DETACH"); } } while (0);
  do { if (VAR_20->sc_flags & (VAR_10)) { if (!VAR_21) FUNC_3(VAR_15, ", "); else VAR_21 = 0; FUNC_3(VAR_15, "RW-DETACH"); } } while (0);
  do { if (VAR_20->sc_flags & (VAR_0)) { if (!VAR_21) FUNC_3(VAR_15, ", "); else VAR_21 = 0; FUNC_3(VAR_15, "AUTH"); } } while (0);
  do { if (VAR_20->sc_flags & (VAR_13)) { if (!VAR_21) FUNC_3(VAR_15, ", "); else VAR_21 = 0; FUNC_3(VAR_15, "W-OPEN"); } } while (0);
  do { if (VAR_20->sc_flags & (VAR_3)) { if (!VAR_21) FUNC_3(VAR_15, ", "); else VAR_21 = 0; FUNC_3(VAR_15, "DESTROY"); } } while (0);
  do { if (VAR_20->sc_flags & (VAR_9)) { if (!VAR_21) FUNC_3(VAR_15, ", "); else VAR_21 = 0; FUNC_3(VAR_15, "READ-ONLY"); } } while (0);
  do { if (VAR_20->sc_flags & (VAR_7)) { if (!VAR_21) FUNC_3(VAR_15, ", "); else VAR_21 = 0; FUNC_3(VAR_15, "NODELETE"); } } while (0);
  do { if (VAR_20->sc_flags & (VAR_4)) { if (!VAR_21) FUNC_3(VAR_15, ", "); else VAR_21 = 0; FUNC_3(VAR_15, "GELIBOOT"); } } while (0);
  do { if (VAR_20->sc_flags & (VAR_5)) { if (!VAR_21) FUNC_3(VAR_15, ", "); else VAR_21 = 0; FUNC_3(VAR_15, "GELIDISPLAYPASS"); } } while (0);
  do { if (VAR_20->sc_flags & (VAR_1)) { if (!VAR_21) FUNC_3(VAR_15, ", "); else VAR_21 = 0; FUNC_3(VAR_15, "AUTORESIZE"); } } while (0);

 }
 FUNC_3(VAR_15, "</Flags>\n");

 if (!(VAR_20->sc_flags & VAR_8)) {
  FUNC_4(VAR_15, "%s<UsedKey>%u</UsedKey>\n", VAR_16,
      VAR_20->sc_nkey);
 }
 FUNC_4(VAR_15, "%s<Version>%u</Version>\n", VAR_16, VAR_20->sc_version);
 FUNC_4(VAR_15, "%s<Crypto>", VAR_16);
 switch (VAR_20->sc_crypto) {
 case 129:
  FUNC_3(VAR_15, "hardware");
  break;
 case 128:
  FUNC_3(VAR_15, "software");
  break;
 default:
  FUNC_3(VAR_15, "UNKNOWN");
  break;
 }
 FUNC_3(VAR_15, "</Crypto>\n");
 if (VAR_20->sc_flags & VAR_0) {
  FUNC_4(VAR_15,
      "%s<AuthenticationAlgorithm>%s</AuthenticationAlgorithm>\n",
      VAR_16, FUNC_1(VAR_20->sc_aalgo));
 }
 FUNC_4(VAR_15, "%s<KeyLength>%u</KeyLength>\n", VAR_16,
     VAR_20->sc_ekeylen);
 FUNC_4(VAR_15, "%s<EncryptionAlgorithm>%s</EncryptionAlgorithm>\n",
     VAR_16, FUNC_1(VAR_20->sc_ealgo));
 FUNC_4(VAR_15, "%s<State>%s</State>\n", VAR_16,
     (VAR_20->sc_flags & VAR_12) ? "SUSPENDED" : "ACTIVE");
}
