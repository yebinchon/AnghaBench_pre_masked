
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zoneref {int zone_idx; struct zone* zone; } ;
struct zone {int dummy; } ;


 int FUNC_0 (struct zone*) ;

__attribute__((used)) static void FUNC_1(struct zone *VAR_0, struct zoneref *VAR_1)
{
 VAR_1->zone = VAR_0;
 VAR_1->zone_idx = FUNC_0(VAR_0);
}
