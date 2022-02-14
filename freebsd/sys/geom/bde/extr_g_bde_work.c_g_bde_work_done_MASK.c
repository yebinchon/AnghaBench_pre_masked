
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_bde_work {int * ksp; int * sp; int softc; int length; int bp; } ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct g_bde_work*) ;
 int FUNC_3 (struct g_bde_work*) ;

__attribute__((used)) static void
FUNC_4(struct g_bde_work *VAR_0, int VAR_1)
{

 FUNC_0(VAR_0->bp, VAR_0->length, VAR_1);
 if (VAR_0->sp != ((void*)0))
  FUNC_1(VAR_0->softc, VAR_0->sp);
 if (VAR_0->ksp != ((void*)0))
  FUNC_3(VAR_0);
 FUNC_2(VAR_0);
}
