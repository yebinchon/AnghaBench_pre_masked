
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_raid_softc {int sc_geom; } ;
struct g_provider {int dummy; } ;
struct g_consumer {int flags; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct g_consumer*,int,int,int) ;
 scalar_t__ FUNC_1 (struct g_consumer*,struct g_provider*) ;
 int FUNC_2 (struct g_consumer*) ;
 int FUNC_3 (struct g_consumer*) ;
 struct g_consumer* FUNC_4 (int ) ;
 struct g_provider* FUNC_5 (char const*) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (char const*,char*,int) ;

struct g_consumer *
FUNC_8(struct g_raid_softc *VAR_1, const char *VAR_2)
{
 struct g_consumer *VAR_3;
 struct g_provider *VAR_4;

 FUNC_6();

 if (FUNC_7(VAR_2, "/dev/", 5) == 0)
  VAR_2 += 5;
 VAR_4 = FUNC_5(VAR_2);
 if (VAR_4 == ((void*)0))
  return (((void*)0));
 VAR_3 = FUNC_4(VAR_1->sc_geom);
 VAR_3->flags |= VAR_0;
 if (FUNC_1(VAR_3, VAR_4) != 0) {
  FUNC_2(VAR_3);
  return (((void*)0));
 }
 if (FUNC_0(VAR_3, 1, 1, 1) != 0) {
  FUNC_3(VAR_3);
  FUNC_2(VAR_3);
  return (((void*)0));
 }
 return (VAR_3);
}
