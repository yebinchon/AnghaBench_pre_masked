
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_provider {scalar_t__ acr; scalar_t__ acw; scalar_t__ ace; int stat; struct g_geom* geom; int consumers; } ;
struct g_geom {int flags; int (* providergone ) (struct g_provider*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct g_provider*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct g_provider*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct g_provider*) ;
 int FUNC_6 () ;
 int FUNC_7 (struct g_provider*) ;
 int FUNC_8 () ;
 int VAR_1 ;
 int FUNC_9 (struct g_provider*) ;

void
FUNC_10(struct g_provider *VAR_2)
{
 struct g_geom *VAR_3;

 FUNC_8();
 FUNC_0(VAR_2);
 FUNC_1(FUNC_2(&VAR_2->consumers),
     ("g_destroy_provider but attached"));
 FUNC_1 (VAR_2->acr == 0, ("g_destroy_provider with acr"));
 FUNC_1 (VAR_2->acw == 0, ("g_destroy_provider with acw"));
 FUNC_1 (VAR_2->ace == 0, ("g_destroy_provider with ace"));
 FUNC_5(VAR_2);
 FUNC_3(VAR_2, VAR_1);
 VAR_3 = VAR_2->geom;
 FUNC_4(VAR_2->stat);




 if (VAR_3->providergone != ((void*)0))
  VAR_3->providergone(VAR_2);

 FUNC_7(VAR_2);
 if ((VAR_3->flags & VAR_0))
  FUNC_6();
}
