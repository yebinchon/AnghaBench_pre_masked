
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_slicer {struct g_redboot_softc* softc; } ;
struct g_redboot_softc {int (* parent_access ) (struct g_provider*,int,int,int) ;scalar_t__* readonly; } ;
struct g_provider {size_t index; struct g_geom* geom; } ;
struct g_geom {struct g_slicer* softc; } ;


 int VAR_0 ;
 int FUNC_0 (struct g_provider*,int,int,int) ;

__attribute__((used)) static int
FUNC_1(struct g_provider *VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
 struct g_geom *VAR_5 = VAR_1->geom;
 struct g_slicer *VAR_6 = VAR_5->softc;
 struct g_redboot_softc *VAR_7 = VAR_6->softc;

 if (VAR_3 > 0 && VAR_7->readonly[VAR_1->index])
  return (VAR_0);
 return (VAR_7->parent_access(VAR_1, VAR_2, VAR_3, VAR_4));
}
