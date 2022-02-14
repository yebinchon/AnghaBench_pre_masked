
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gctl_req {int dummy; } ;
struct g_geom {int dummy; } ;
struct g_class {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct g_geom*) ;
 struct g_geom* FUNC_1 (struct g_class*,char const*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct gctl_req*,char*,...) ;
 char* FUNC_4 (struct gctl_req*,char*) ;

__attribute__((used)) static void
FUNC_5(struct gctl_req *VAR_1, struct g_class *VAR_2)
{
 struct g_geom *VAR_3;
 const char *VAR_4;
 int VAR_5;

 FUNC_2();

 VAR_4 = FUNC_4(VAR_1, "arg0");
        if (VAR_4 == ((void*)0)) {
                FUNC_3(VAR_1, "No 'arg0' argument");
                return;
        }
 VAR_3 = FUNC_1(VAR_2, VAR_4);
 if (VAR_3 == ((void*)0)) {
  FUNC_3(VAR_1, "Device %s is invalid", VAR_4);
  return;
 }
 VAR_5 = FUNC_0(VAR_3);
 if (VAR_5 != 0 && VAR_5 != VAR_0)
  FUNC_3(VAR_1, "failed to stop %s (err=%d)", VAR_4, VAR_5);
}
