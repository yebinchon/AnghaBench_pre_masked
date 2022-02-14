
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct g_raid3_softc {TYPE_1__* sc_zones; } ;
typedef enum g_raid3_zones { ____Placeholder_g_raid3_zones } g_raid3_zones ;
struct TYPE_2__ {int sz_zone; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (int ,void*,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_3(struct g_raid3_softc *VAR_3, void *VAR_4, size_t VAR_5)
{
 enum g_raid3_zones VAR_6;

 if (VAR_2 ||
     (VAR_6 = FUNC_1(VAR_5)) == VAR_0)
  FUNC_0(VAR_4, VAR_1);
 else {
  FUNC_2(VAR_3->sc_zones[VAR_6].sz_zone,
      VAR_4, &VAR_3->sc_zones[VAR_6]);
 }
}
