
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct gctl_req {int dummy; } ;
struct g_consumer {TYPE_2__* provider; } ;
struct g_class {int dummy; } ;
struct g_cache_softc {scalar_t__ sc_type; TYPE_1__* sc_geom; scalar_t__ sc_bsize; scalar_t__ sc_maxent; } ;
struct g_cache_metadata {int md_provsize; scalar_t__ md_bsize; scalar_t__ md_size; int md_version; int md_magic; int md_name; } ;
typedef scalar_t__ intmax_t ;
struct TYPE_4__ {int name; int mediasize; } ;
struct TYPE_3__ {int consumer; } ;


 int FUNC_0 (int,char*,char const*,...) ;
 char const* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct g_consumer* FUNC_1 (int *) ;
 struct g_cache_softc* FUNC_2 (struct g_class*,char const*) ;
 int FUNC_3 (struct g_consumer*,struct g_cache_metadata*) ;
 int FUNC_4 () ;
 int FUNC_5 (struct gctl_req*,char*,...) ;
 char* FUNC_6 (struct gctl_req*,char*) ;
 void* FUNC_7 (struct gctl_req*,char*,int) ;
 int FUNC_8 (int ,char const*,int) ;

__attribute__((used)) static void
FUNC_9(struct gctl_req *VAR_3, struct g_class *VAR_4)
{
 struct g_cache_metadata VAR_5;
 struct g_cache_softc *VAR_6;
 struct g_consumer *VAR_7;
 intmax_t *VAR_8, *VAR_9;
 const char *VAR_10;
 int VAR_11, *VAR_12;

 FUNC_4();

 VAR_12 = FUNC_7(VAR_3, "nargs", sizeof(*VAR_12));
 if (VAR_12 == ((void*)0)) {
  FUNC_5(VAR_3, "No '%s' argument", "nargs");
  return;
 }
 if (*VAR_12 != 1) {
  FUNC_5(VAR_3, "Missing device.");
  return;
 }

 VAR_10 = FUNC_6(VAR_3, "arg0");
 if (VAR_10 == ((void*)0)) {
  FUNC_5(VAR_3, "No 'arg0' argument");
  return;
 }
 VAR_6 = FUNC_2(VAR_4, VAR_10);
 if (VAR_6 == ((void*)0)) {
  FUNC_0(1, "Device %s is invalid.", VAR_10);
  FUNC_5(VAR_3, "Device %s is invalid.", VAR_10);
  return;
 }

 VAR_9 = FUNC_7(VAR_3, "size", sizeof(*VAR_9));
 if (VAR_9 == ((void*)0)) {
  FUNC_5(VAR_3, "No '%s' argument", "size");
  return;
 }
 if ((u_int)*VAR_9 != 0 && (u_int)*VAR_9 < 100) {
  FUNC_5(VAR_3, "Invalid '%s' argument", "size");
  return;
 }
 if ((u_int)*VAR_9 != 0)
  VAR_6->sc_maxent = (u_int)*VAR_9;

 VAR_8 = FUNC_7(VAR_3, "blocksize", sizeof(*VAR_8));
 if (VAR_8 == ((void*)0)) {
  FUNC_5(VAR_3, "No '%s' argument", "blocksize");
  return;
 }
 if (*VAR_8 < 0) {
  FUNC_5(VAR_3, "Invalid '%s' argument", "blocksize");
  return;
 }

 if (VAR_6->sc_type != VAR_1)
  return;

 FUNC_8(VAR_5.md_name, VAR_10, sizeof(VAR_5.md_name));
 FUNC_8(VAR_5.md_magic, VAR_0, sizeof(VAR_5.md_magic));
 VAR_5.md_version = VAR_2;
 if ((u_int)*VAR_9 != 0)
  VAR_5.md_size = (u_int)*VAR_9;
 else
  VAR_5.md_size = VAR_6->sc_maxent;
 if ((u_int)*VAR_8 != 0)
  VAR_5.md_bsize = (u_int)*VAR_8;
 else
  VAR_5.md_bsize = VAR_6->sc_bsize;
 VAR_7 = FUNC_1(&VAR_6->sc_geom->consumer);
 VAR_5.md_provsize = VAR_7->provider->mediasize;
 VAR_11 = FUNC_3(VAR_7, &VAR_5);
 if (VAR_11 == 0)
  FUNC_0(2, "Metadata on %s updated.", VAR_7->provider->name);
 else
  FUNC_0(0, "Cannot update metadata on %s (error=%d).",
      VAR_7->provider->name, VAR_11);
}
