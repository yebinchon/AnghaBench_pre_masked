
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct g_raid3_softc {TYPE_1__* sc_zones; } ;
typedef enum g_raid3_zones { ____Placeholder_g_raid3_zones } g_raid3_zones ;
struct TYPE_2__ {int sz_failed; int sz_requested; int sz_zone; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (size_t) ;
 void* FUNC_1 (size_t,int ,int) ;
 void* FUNC_2 (int ,TYPE_1__*,int) ;

__attribute__((used)) static void *
FUNC_3(struct g_raid3_softc *VAR_3, size_t VAR_4, int VAR_5)
{
 void *VAR_6;
 enum g_raid3_zones VAR_7;

 if (VAR_2 ||
     (VAR_7 = FUNC_0(VAR_4)) == VAR_0)
  VAR_6 = FUNC_1(VAR_4, VAR_1, VAR_5);
 else {
  VAR_6 = FUNC_2(VAR_3->sc_zones[VAR_7].sz_zone,
     &VAR_3->sc_zones[VAR_7], VAR_5);
  VAR_3->sc_zones[VAR_7].sz_requested++;
  if (VAR_6 == ((void*)0))
   VAR_3->sc_zones[VAR_7].sz_failed++;
 }
 return (VAR_6);
}
