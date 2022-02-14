
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_slicer {struct g_slicer* softc; struct g_slicer* hotspot; struct g_slicer* slices; } ;
struct g_geom {struct g_slicer* softc; } ;


 int FUNC_0 (struct g_slicer*) ;

__attribute__((used)) static void
FUNC_1(struct g_geom *VAR_0)
{
 struct g_slicer *VAR_1;

 VAR_1 = VAR_0->softc;
 VAR_0->softc = ((void*)0);






 if (VAR_1 == ((void*)0))
  return;
 FUNC_0(VAR_1->slices);
 if (VAR_1->hotspot != ((void*)0))
  FUNC_0(VAR_1->hotspot);
 if (VAR_1->softc != ((void*)0))
  FUNC_0(VAR_1->softc);
 FUNC_0(VAR_1);
}
