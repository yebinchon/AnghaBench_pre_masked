
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct cbb_softc {int rl; } ;
struct cbb_reslist {int type; int rid; struct resource* res; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct cbb_reslist*,int ) ;
 int VAR_2 ;
 struct cbb_reslist* FUNC_1 (int,int ,int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void
FUNC_3(struct cbb_softc *VAR_3, struct resource *VAR_4, int VAR_5,
    int VAR_6)
{
 struct cbb_reslist *VAR_7;





 VAR_7 = FUNC_1(sizeof(struct cbb_reslist), VAR_0, VAR_1);
 if (VAR_7 == ((void*)0))
  FUNC_2("cbb_cardbus_alloc_resource: can't record entry!");
 VAR_7->res = VAR_4;
 VAR_7->type = VAR_5;
 VAR_7->rid = VAR_6;
 FUNC_0(&VAR_3->rl, VAR_7, VAR_2);
}
