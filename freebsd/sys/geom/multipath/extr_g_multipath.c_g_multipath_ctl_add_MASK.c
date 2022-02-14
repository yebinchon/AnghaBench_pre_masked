
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gctl_req {int dummy; } ;
struct g_multipath_softc {int dummy; } ;
struct g_geom {struct g_multipath_softc* softc; } ;
struct g_class {int dummy; } ;


 int FUNC_0 (struct gctl_req*,struct g_class*,char const*) ;
 struct g_geom* FUNC_1 (struct g_class*,char const*) ;
 int FUNC_2 (struct gctl_req*,char*,...) ;
 char* FUNC_3 (struct gctl_req*,char*) ;

__attribute__((used)) static void
FUNC_4(struct gctl_req *VAR_0, struct g_class *VAR_1)
{
 struct g_multipath_softc *VAR_2;
 struct g_geom *VAR_3;
 const char *VAR_4, *VAR_5;

 VAR_4 = FUNC_3(VAR_0, "arg0");
        if (VAR_4 == ((void*)0)) {
                FUNC_2(VAR_0, "No 'arg0' argument");
                return;
        }
 VAR_3 = FUNC_1(VAR_1, VAR_4);
 if (VAR_3 == ((void*)0)) {
  FUNC_2(VAR_0, "Device %s not found", VAR_4);
  return;
 }
 VAR_2 = VAR_3->softc;

 VAR_5 = FUNC_3(VAR_0, "arg1");
 if (VAR_5 == ((void*)0)) {
  FUNC_2(VAR_0, "No 'arg1' argument");
  return;
 }
 FUNC_0(VAR_0, VAR_1, VAR_5);
}
