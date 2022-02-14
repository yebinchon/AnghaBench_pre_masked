
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cbb_softc {int rl; int dev; } ;
struct cbb_reslist {int res; int type; int rid; } ;


 int VAR_0 ;
 struct cbb_reslist* FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,char*,int ,int ,int ) ;
 int FUNC_3 (struct cbb_reslist*,int ) ;
 int VAR_1 ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(struct cbb_softc *VAR_2)
{
 struct cbb_reslist *VAR_3;

 while ((VAR_3 = FUNC_0(&VAR_2->rl)) != ((void*)0)) {
  FUNC_2(VAR_2->dev, "Danger Will Robinson: Resource "
      "left allocated!  This is a bug... "
      "(rid=%x, type=%d, addr=%jx)\n", VAR_3->rid, VAR_3->type,
      FUNC_4(VAR_3->res));
  FUNC_1(&VAR_2->rl, VAR_1);
  FUNC_3(VAR_3, VAR_0);
 }
}
