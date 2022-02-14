
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct g_eli_softc {int dummy; } ;
struct g_consumer {TYPE_1__* geom; } ;
struct TYPE_2__ {struct g_eli_softc* softc; } ;


 int VAR_0 ;
 int FUNC_0 (struct g_eli_softc*,int ) ;
 int FUNC_1 () ;

__attribute__((used)) static void
FUNC_2(struct g_consumer *VAR_1)
{
 struct g_eli_softc *VAR_2;

 FUNC_1();
 VAR_2 = VAR_1->geom->softc;
 if (VAR_2 == ((void*)0))
  return;
 FUNC_0(VAR_2, VAR_0);
}
