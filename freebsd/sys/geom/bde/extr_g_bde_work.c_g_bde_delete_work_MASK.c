
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_bde_work {struct g_bde_softc* softc; } ;
struct g_bde_softc {int worklist; int nwork; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct g_bde_work*,int ) ;
 int FUNC_1 (struct g_bde_work*,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_2(struct g_bde_work *VAR_3)
{
 struct g_bde_softc *VAR_4;

 VAR_4 = VAR_3->softc;
 VAR_1--;
 VAR_4->nwork--;
 FUNC_0(&VAR_4->worklist, VAR_3, VAR_2);
 FUNC_1(VAR_3, VAR_0);
}
