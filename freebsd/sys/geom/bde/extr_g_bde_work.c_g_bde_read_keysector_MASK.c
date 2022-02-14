
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_bde_work {int dummy; } ;
struct g_bde_softc {int dummy; } ;
struct g_bde_sector {scalar_t__ state; struct g_bde_work* owner; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct g_bde_sector* FUNC_0 (struct g_bde_work*) ;
 int FUNC_1 (struct g_bde_softc*,int) ;
 int FUNC_2 (struct g_bde_work*) ;
 scalar_t__ FUNC_3 (struct g_bde_sector*) ;
 int FUNC_4 (int ,char*,struct g_bde_work*) ;

__attribute__((used)) static struct g_bde_sector *
FUNC_5(struct g_bde_softc *VAR_2, struct g_bde_work *VAR_3)
{
 struct g_bde_sector *VAR_4;

 FUNC_4(VAR_0, "g_bde_read_keysector(%p)", VAR_3);
 VAR_4 = FUNC_0(VAR_3);
 if (VAR_4 == ((void*)0)) {
  FUNC_1(VAR_2, -1);
  VAR_4 = FUNC_0(VAR_3);
 }
 if (VAR_4 == ((void*)0))
  return (VAR_4);
 if (VAR_4->owner != VAR_3)
  return (VAR_4);
 if (VAR_4->state == VAR_1)
  return (VAR_4);
 if (FUNC_3(VAR_4) == 0)
  return (VAR_4);
 FUNC_2(VAR_3);
 return (((void*)0));
}
