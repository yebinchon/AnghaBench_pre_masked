
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gctl_req {int dummy; } ;
struct g_geom {int dummy; } ;
struct g_class {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct gctl_req*,char*) ;
 struct g_geom* FUNC_2 (struct gctl_req*,struct g_class*,char*) ;

__attribute__((used)) static void
FUNC_3(struct gctl_req *VAR_0, struct g_class *VAR_1, const char *VAR_2)
{
 struct g_geom *VAR_3;

 FUNC_0();
 VAR_3 = FUNC_2(VAR_0, VAR_1, "geom");
 if (VAR_3 == ((void*)0))
  return;
 FUNC_1(VAR_0, "Unknown verb");
}
