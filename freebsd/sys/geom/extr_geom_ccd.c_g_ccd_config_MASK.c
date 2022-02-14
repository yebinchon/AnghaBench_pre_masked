
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gctl_req {int dummy; } ;
struct g_geom {int dummy; } ;
struct g_class {int dummy; } ;


 int FUNC_0 (struct gctl_req*,struct g_class*) ;
 int FUNC_1 (struct gctl_req*,struct g_class*,struct g_geom*) ;
 int FUNC_2 (struct gctl_req*,struct g_class*) ;
 int FUNC_3 () ;
 int FUNC_4 (struct gctl_req*,char*) ;
 struct g_geom* FUNC_5 (struct gctl_req*,struct g_class*,char*) ;
 int FUNC_6 (char const*,char*) ;

__attribute__((used)) static void
FUNC_7(struct gctl_req *VAR_0, struct g_class *VAR_1, char const *VAR_2)
{
 struct g_geom *VAR_3;

 FUNC_3();
 if (!FUNC_6(VAR_2, "create geom")) {
  FUNC_0(VAR_0, VAR_1);
 } else if (!FUNC_6(VAR_2, "destroy geom")) {
  VAR_3 = FUNC_5(VAR_0, VAR_1, "geom");
  if (VAR_3 != ((void*)0))
  FUNC_1(VAR_0, VAR_1, VAR_3);
 } else if (!FUNC_6(VAR_2, "list")) {
  FUNC_2(VAR_0, VAR_1);
 } else {
  FUNC_4(VAR_0, "unknown verb");
 }
}
