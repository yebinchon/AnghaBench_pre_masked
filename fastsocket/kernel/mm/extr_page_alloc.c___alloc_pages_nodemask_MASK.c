
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zonelist {TYPE_1__* _zonerefs; } ;
struct zone {int dummy; } ;
struct page {int dummy; } ;
typedef int nodemask_t ;
typedef int gfp_t ;
typedef enum zone_type { ____Placeholder_zone_type } zone_type ;
struct TYPE_2__ {int zone; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct page* FUNC_0 (int,unsigned int,struct zonelist*,int,int *,struct zone*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct zonelist*,int,int *,struct zone**) ;
 int FUNC_3 () ;
 struct page* FUNC_4 (int,int *,unsigned int,struct zonelist*,int,int,struct zone*,int) ;
 int VAR_4 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (int,unsigned int) ;
 int FUNC_10 (struct page*,unsigned int,int,int) ;
 scalar_t__ FUNC_11 (int) ;

struct page *
FUNC_12(gfp_t VAR_5, unsigned int VAR_6,
   struct zonelist *VAR_7, nodemask_t *VAR_8)
{
 enum zone_type VAR_9 = FUNC_5(VAR_5);
 struct zone *VAR_10;
 struct page *VAR_11;
 int VAR_12 = FUNC_1(VAR_5);

 VAR_5 &= VAR_4;

 FUNC_6(VAR_5);

 FUNC_7(VAR_5 & VAR_3);

 if (FUNC_9(VAR_5, VAR_6))
  return ((void*)0);






 if (FUNC_11(!VAR_7->_zonerefs->zone))
  return ((void*)0);

 FUNC_3();

 FUNC_2(VAR_7, VAR_9, VAR_8, &VAR_10);
 if (!VAR_10) {
  FUNC_8();
  return ((void*)0);
 }


 VAR_11 = FUNC_4(VAR_5|VAR_2, VAR_8, VAR_6,
   VAR_7, VAR_9, VAR_1|VAR_0,
   VAR_10, VAR_12);
 if (FUNC_11(!VAR_11))
  VAR_11 = FUNC_0(VAR_5, VAR_6,
    VAR_7, VAR_9, VAR_8,
    VAR_10, VAR_12);
 FUNC_8();

 FUNC_10(VAR_11, VAR_6, VAR_5, VAR_12);
 return VAR_11;
}
