
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_bde_work {struct g_bde_softc* softc; int state; } ;
struct g_bde_softc {int worklist; int nwork; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,struct g_bde_work*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 struct g_bde_work* FUNC_1 (int,int ,int) ;

__attribute__((used)) static struct g_bde_work *
FUNC_2(struct g_bde_softc *VAR_6)
{
 struct g_bde_work *VAR_7;

 VAR_7 = FUNC_1(sizeof *VAR_7, VAR_0, VAR_1 | VAR_2);
 if (VAR_7 == ((void*)0))
  return (VAR_7);
 VAR_7->state = VAR_3;
 VAR_7->softc = VAR_6;
 VAR_4++;
 VAR_6->nwork++;
 FUNC_0(&VAR_6->worklist, VAR_7, VAR_5);
 return (VAR_7);
}
