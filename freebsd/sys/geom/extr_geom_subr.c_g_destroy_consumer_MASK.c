
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_geom {int flags; } ;
struct g_consumer {scalar_t__ acr; scalar_t__ acw; scalar_t__ ace; int stat; struct g_geom* geom; int * provider; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct g_consumer*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (struct g_consumer*,int ) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct g_consumer*) ;
 int FUNC_5 () ;
 int FUNC_6 (struct g_consumer*) ;
 int FUNC_7 () ;
 int FUNC_8 (int ,char*,struct g_consumer*) ;

void
FUNC_9(struct g_consumer *VAR_3)
{
 struct g_geom *VAR_4;

 FUNC_7();
 FUNC_0(VAR_3);
 FUNC_8(VAR_1, "g_destroy_consumer(%p)", VAR_3);
 FUNC_1 (VAR_3->provider == ((void*)0), ("g_destroy_consumer but attached"));
 FUNC_1 (VAR_3->acr == 0, ("g_destroy_consumer with acr"));
 FUNC_1 (VAR_3->acw == 0, ("g_destroy_consumer with acw"));
 FUNC_1 (VAR_3->ace == 0, ("g_destroy_consumer with ace"));
 FUNC_4(VAR_3);
 VAR_4 = VAR_3->geom;
 FUNC_2(VAR_3, VAR_2);
 FUNC_3(VAR_3->stat);
 FUNC_6(VAR_3);
 if (VAR_4->flags & VAR_0)
  FUNC_5();
}
