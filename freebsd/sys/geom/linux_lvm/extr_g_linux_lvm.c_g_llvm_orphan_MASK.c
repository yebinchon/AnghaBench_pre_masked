
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_llvm_vg {int dummy; } ;
struct g_geom {struct g_llvm_vg* softc; } ;
struct g_consumer {struct g_geom* geom; } ;


 int FUNC_0 (struct g_llvm_vg*,int) ;
 int FUNC_1 (struct g_llvm_vg*,struct g_consumer*) ;
 int FUNC_2 () ;

__attribute__((used)) static void
FUNC_3(struct g_consumer *VAR_0)
{
 struct g_llvm_vg *VAR_1;
 struct g_geom *VAR_2;

 FUNC_2();
 VAR_2 = VAR_0->geom;
 VAR_1 = VAR_2->softc;
 if (VAR_1 == ((void*)0))
  return;

 FUNC_1(VAR_1, VAR_0);
 FUNC_0(VAR_1, 1);
}
