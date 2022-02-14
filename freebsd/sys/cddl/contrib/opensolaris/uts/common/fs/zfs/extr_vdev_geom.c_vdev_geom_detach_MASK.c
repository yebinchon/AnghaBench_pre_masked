
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct g_geom {char* name; int consumer; } ;
struct g_consumer {scalar_t__ acr; scalar_t__ ace; TYPE_1__* provider; int acw; struct g_geom* geom; } ;
typedef scalar_t__ boolean_t ;
struct TYPE_2__ {char* name; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int,char*,char*) ;
 int FUNC_2 (struct g_consumer*,int,int ,int) ;
 int FUNC_3 (struct g_consumer*) ;
 int FUNC_4 (struct g_consumer*) ;
 int FUNC_5 () ;
 int FUNC_6 (struct g_geom*,int ) ;

__attribute__((used)) static void
FUNC_7(struct g_consumer *VAR_1, boolean_t VAR_2)
{
 struct g_geom *VAR_3;

 FUNC_5();

 FUNC_1(1, "Detaching from %s.",
     VAR_1->provider && VAR_1->provider->name ? VAR_1->provider->name : "NULL");

 VAR_3 = VAR_1->geom;
 if (VAR_2)
  FUNC_2(VAR_1, -1, 0, -1);

 if (VAR_1->acr == 0 && VAR_1->ace == 0) {
  if (VAR_1->acw > 0)
   FUNC_2(VAR_1, 0, -VAR_1->acw, 0);
  if (VAR_1->provider != ((void*)0)) {
   FUNC_1(1, "Destroying consumer for %s.",
       VAR_1->provider->name ? VAR_1->provider->name : "NULL");
   FUNC_4(VAR_1);
  }
  FUNC_3(VAR_1);
 }

 if (FUNC_0(&VAR_3->consumer)) {
  FUNC_1(1, "Destroyed geom %s.", VAR_3->name);
  FUNC_6(VAR_3, VAR_0);
 }
}
