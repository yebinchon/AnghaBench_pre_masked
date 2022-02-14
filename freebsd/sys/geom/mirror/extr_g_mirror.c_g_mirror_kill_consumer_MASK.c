
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct g_provider {int name; TYPE_1__* geom; } ;
struct g_mirror_softc {int dummy; } ;
struct g_consumer {int acw; int ace; int acr; struct g_provider* provider; int * private; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int ,...) ;
 int VAR_1 ;
 int FUNC_1 (struct g_consumer*,int ,int,int ) ;
 int FUNC_2 (struct g_consumer*) ;
 int FUNC_3 (struct g_consumer*) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (struct g_mirror_softc*,struct g_consumer*) ;
 int FUNC_5 (int ,struct g_consumer*,int ,int *) ;
 int FUNC_6 () ;

__attribute__((used)) static void
FUNC_7(struct g_mirror_softc *VAR_3, struct g_consumer *VAR_4)
{
 struct g_provider *VAR_5;
 int VAR_6;

 FUNC_6();

 VAR_4->private = ((void*)0);
 if (FUNC_4(VAR_3, VAR_4))
  return;
 VAR_5 = VAR_4->provider;
 VAR_6 = 0;
 if (VAR_4->acw == 1) {
  if ((VAR_5->geom->flags & VAR_0) == 0)
   VAR_6 = 1;
 }
 FUNC_0(2, "Access %s r%dw%de%d = %d", VAR_5->name, -VAR_4->acr,
     -VAR_4->acw, -VAR_4->ace, 0);
 if (VAR_4->acr > 0 || VAR_4->acw > 0 || VAR_4->ace > 0)
  FUNC_1(VAR_4, -VAR_4->acr, -VAR_4->acw, -VAR_4->ace);
 if (VAR_6) {
  FUNC_5(VAR_2, VAR_4, VAR_1, ((void*)0));
  return;
 }
 FUNC_0(1, "Consumer %s destroyed.", VAR_5->name);
 FUNC_3(VAR_4);
 FUNC_2(VAR_4);
}
