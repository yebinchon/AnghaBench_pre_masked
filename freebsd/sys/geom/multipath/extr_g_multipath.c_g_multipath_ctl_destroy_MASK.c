
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct gctl_req {int dummy; } ;
struct g_provider {char const* name; scalar_t__ sectorsize; scalar_t__ mediasize; } ;
struct g_multipath_softc {scalar_t__* sc_uuid; struct g_consumer* sc_active; } ;
struct g_geom {struct g_multipath_softc* softc; } ;
struct g_consumer {struct g_provider* provider; } ;
struct g_class {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct g_consumer*,int,int,int) ;
 int * FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (struct g_geom*) ;
 struct g_geom* FUNC_3 (struct g_class*,char const*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (struct g_consumer*,scalar_t__,int *,scalar_t__) ;
 int FUNC_8 (struct gctl_req*,char*,...) ;
 char* FUNC_9 (struct gctl_req*,char*) ;

__attribute__((used)) static void
FUNC_10(struct gctl_req *VAR_3, struct g_class *VAR_4)
{
 struct g_geom *VAR_5;
 struct g_multipath_softc *VAR_6;
 struct g_consumer *VAR_7;
 struct g_provider *VAR_8;
 const char *VAR_9;
 uint8_t *VAR_10;
 int VAR_11;

 FUNC_4();

 VAR_9 = FUNC_9(VAR_3, "arg0");
        if (VAR_9 == ((void*)0)) {
                FUNC_8(VAR_3, "No 'arg0' argument");
                return;
        }
 VAR_5 = FUNC_3(VAR_4, VAR_9);
 if (VAR_5 == ((void*)0)) {
  FUNC_8(VAR_3, "Device %s is invalid", VAR_9);
  return;
 }
 VAR_6 = VAR_5->softc;

 if (VAR_6->sc_uuid[0] != 0 && VAR_6->sc_active != ((void*)0)) {
  VAR_7 = VAR_6->sc_active;
  VAR_8 = VAR_7->provider;
  VAR_11 = FUNC_0(VAR_7, 1, 1, 1);
  if (VAR_11 != 0) {
   FUNC_8(VAR_3, "Can't open %s (%d)", VAR_8->name, VAR_11);
   goto destroy;
  }
  FUNC_6();
  VAR_10 = FUNC_1(VAR_8->sectorsize, VAR_1 | VAR_2);
  VAR_11 = FUNC_7(VAR_7, VAR_8->mediasize - VAR_8->sectorsize,
      VAR_10, VAR_8->sectorsize);
  FUNC_5();
  FUNC_0(VAR_7, -1, -1, -1);
  if (VAR_11 != 0)
   FUNC_8(VAR_3, "Can't erase metadata on %s (%d)",
       VAR_8->name, VAR_11);
 }

destroy:
 VAR_11 = FUNC_2(VAR_5);
 if (VAR_11 != 0 && VAR_11 != VAR_0)
  FUNC_8(VAR_3, "failed to destroy %s (err=%d)", VAR_9, VAR_11);
}
