
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gctl_req {int dummy; } ;
struct g_provider {TYPE_1__* geom; } ;
struct g_gsched {int dummy; } ;
struct g_class {int dummy; } ;
struct TYPE_2__ {struct g_class* class; } ;


 int FUNC_0 (int,char*,char const*) ;
 struct g_gsched* FUNC_1 (char const*) ;
 int FUNC_2 (struct g_gsched*) ;
 struct g_provider* FUNC_3 (char const*) ;
 char* FUNC_4 (struct gctl_req*,int) ;
 scalar_t__ FUNC_5 (struct gctl_req*,struct g_class*,struct g_provider*,struct g_gsched*) ;
 int FUNC_6 (struct gctl_req*) ;
 int FUNC_7 () ;
 int FUNC_8 (struct gctl_req*,char*,char const*) ;
 char* FUNC_9 (struct gctl_req*,char*) ;

__attribute__((used)) static void
FUNC_10(struct gctl_req *VAR_0, struct g_class *VAR_1)
{
 struct g_provider *VAR_2;
 struct g_gsched *VAR_3;
 const char *VAR_4;
 int VAR_5, VAR_6;

 FUNC_7();

 VAR_4 = FUNC_9(VAR_0, "algo");
 if (VAR_4 == ((void*)0)) {
  FUNC_8(VAR_0, "No '%s' argument", "algo");
  return;
 }

 VAR_3 = FUNC_1(VAR_4);
 if (VAR_3 == ((void*)0)) {
  FUNC_8(VAR_0, "Bad algorithm '%s'", VAR_4);
  return;
 }

 VAR_6 = FUNC_6(VAR_0);





 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
  VAR_4 = FUNC_4(VAR_0, VAR_5);
  if (VAR_4 == ((void*)0))
   break;
  VAR_2 = FUNC_3(VAR_4);
  if (VAR_2 == ((void*)0) || VAR_2->geom->class != VAR_1) {
   FUNC_0(1, "Provider %s is invalid.", VAR_4);
   FUNC_8(VAR_0, "Provider %s is invalid.", VAR_4);
   break;
  }
  if (FUNC_5(VAR_0, VAR_1, VAR_2, VAR_3) != 0)
   break;
 }

 FUNC_2(VAR_3);
}
