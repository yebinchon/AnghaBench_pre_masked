
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct g_provider {int flags; TYPE_1__* geom; } ;
struct g_consumer {scalar_t__ acr; scalar_t__ acw; scalar_t__ ace; scalar_t__ nstart; scalar_t__ nend; TYPE_2__* geom; struct g_provider* provider; } ;
struct TYPE_4__ {int flags; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct g_consumer*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (struct g_consumer*,int ) ;
 int VAR_3 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ,char*,struct g_consumer*) ;
 int FUNC_6 (TYPE_2__*) ;

void
FUNC_7(struct g_consumer *VAR_4)
{
 struct g_provider *VAR_5;

 FUNC_4();
 FUNC_0(VAR_4);
 FUNC_5(VAR_2, "g_detach(%p)", VAR_4);
 FUNC_1(VAR_4->provider != ((void*)0), ("detach but not attached"));
 FUNC_1(VAR_4->acr == 0, ("detach but nonzero acr"));
 FUNC_1(VAR_4->acw == 0, ("detach but nonzero acw"));
 FUNC_1(VAR_4->ace == 0, ("detach but nonzero ace"));
 FUNC_1(VAR_4->nstart == VAR_4->nend,
     ("detach with active requests"));
 VAR_5 = VAR_4->provider;
 FUNC_2(VAR_4, VAR_3);
 VAR_4->provider = ((void*)0);
 if ((VAR_4->geom->flags & VAR_0) ||
     (VAR_5->geom->flags & VAR_0) ||
     (VAR_5->flags & VAR_1))
  FUNC_3();
 FUNC_6(VAR_4->geom);
}
