
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gctl_req {int dummy; } ;
struct g_geom {int dummy; } ;
struct g_class {int dummy; } ;


 struct g_geom* FUNC_0 (struct g_class*,char const*) ;
 int FUNC_1 (struct g_geom*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct gctl_req*,char*,...) ;
 char* FUNC_4 (struct gctl_req*,char*) ;

__attribute__((used)) static void
FUNC_5(struct gctl_req *VAR_0, struct g_class *VAR_1)
{
 struct g_geom *VAR_2;
 const char *VAR_3;
 int VAR_4;

 FUNC_2();

 VAR_3 = FUNC_4(VAR_0, "arg0");
        if (VAR_3 == ((void*)0)) {
                FUNC_3(VAR_0, "No 'arg0' argument");
                return;
        }
 VAR_2 = FUNC_0(VAR_1, VAR_3);
 if (VAR_2 == ((void*)0)) {
  FUNC_3(VAR_0, "Device %s is invalid", VAR_3);
  return;
 }
 VAR_4 = FUNC_1(VAR_2);
 if (VAR_4 != 0) {
  FUNC_3(VAR_0, "failed to rotate %s (err=%d)", VAR_3, VAR_4);
 }
}
