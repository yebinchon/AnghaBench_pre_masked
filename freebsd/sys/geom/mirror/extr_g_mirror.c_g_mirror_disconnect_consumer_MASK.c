
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_mirror_softc {int dummy; } ;
struct g_consumer {int * provider; } ;


 int FUNC_0 (struct g_consumer*) ;
 int FUNC_1 (struct g_mirror_softc*,struct g_consumer*) ;
 int FUNC_2 () ;

__attribute__((used)) static void
FUNC_3(struct g_mirror_softc *VAR_0, struct g_consumer *VAR_1)
{

 FUNC_2();

 if (VAR_1 == ((void*)0))
  return;
 if (VAR_1->provider != ((void*)0))
  FUNC_1(VAR_0, VAR_1);
 else
  FUNC_0(VAR_1);
}
