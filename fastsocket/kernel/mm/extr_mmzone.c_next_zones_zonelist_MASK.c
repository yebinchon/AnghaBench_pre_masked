
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zoneref {scalar_t__ zone; } ;
struct zone {int dummy; } ;
typedef int nodemask_t ;
typedef enum zone_type { ____Placeholder_zone_type } zone_type ;


 scalar_t__ FUNC_0 (int ) ;
 struct zone* FUNC_1 (struct zoneref*) ;
 int FUNC_2 (struct zoneref*) ;
 int FUNC_3 (struct zoneref*,int *) ;

struct zoneref *FUNC_4(struct zoneref *VAR_0,
     enum zone_type VAR_1,
     nodemask_t *VAR_2,
     struct zone **VAR_3)
{




 if (FUNC_0(VAR_2 == ((void*)0)))
  while (FUNC_2(VAR_0) > VAR_1)
   VAR_0++;
 else
  while (FUNC_2(VAR_0) > VAR_1 ||
    (VAR_0->zone && !FUNC_3(VAR_0, VAR_2)))
   VAR_0++;

 *VAR_3 = FUNC_1(VAR_0);
 return VAR_0;
}
