
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gmesh {int dummy; } ;
struct ggeom {TYPE_1__* lg_class; } ;
struct TYPE_2__ {char* lg_name; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,char*) ;
 int FUNC_1 (int ,char*,char const*) ;
 struct ggeom* FUNC_2 (struct gmesh*,char const*) ;
 int FUNC_3 (struct gmesh*) ;
 int FUNC_4 (struct ggeom*) ;
 int FUNC_5 (char*,char*) ;

__attribute__((used)) static void
FUNC_6(const char *VAR_1)
{
 struct gmesh VAR_2;
 struct ggeom *VAR_3;
 int VAR_4;

 VAR_4 = FUNC_3(&VAR_2);
 if (VAR_4 != 0)
  FUNC_0(VAR_0, VAR_4, "Cannot get GEOM tree");

 VAR_3 = FUNC_2(&VAR_2, VAR_1);
 if (VAR_3 == ((void*)0))
  FUNC_1(VAR_0, "Cannot find provider '%s'.", VAR_1);

 FUNC_5("Geom class: %s\n", VAR_3->lg_class->lg_name);
 FUNC_4(VAR_3);
}
