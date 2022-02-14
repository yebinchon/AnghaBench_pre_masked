
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zonelist {int dummy; } ;
struct zone {int dummy; } ;
struct page {int dummy; } ;
typedef int nodemask_t ;
typedef int gfp_t ;
typedef enum zone_type { ____Placeholder_zone_type } zone_type ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct zonelist*,int) ;
 struct page* FUNC_1 (int,int *,unsigned int,struct zonelist*,int,int,struct zone*,int) ;
 int FUNC_2 (struct zonelist*,int,unsigned int,int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct zonelist*,int) ;

__attribute__((used)) static inline struct page *
FUNC_5(gfp_t VAR_6, unsigned int VAR_7,
 struct zonelist *VAR_8, enum zone_type VAR_9,
 nodemask_t *VAR_10, struct zone *VAR_11,
 int VAR_12)
{
 struct page *VAR_13;


 if (!FUNC_4(VAR_8, VAR_6)) {
  FUNC_3(1);
  return ((void*)0);
 }






 VAR_13 = FUNC_1(VAR_6|VAR_3, VAR_10,
  VAR_7, VAR_8, VAR_9,
  VAR_1|VAR_0,
  VAR_11, VAR_12);
 if (VAR_13)
  goto out;

 if (!(VAR_6 & VAR_4)) {

  if (VAR_7 > VAR_2)
   goto out;







  if (VAR_6 & VAR_5)
   goto out;
 }

 FUNC_2(VAR_8, VAR_6, VAR_7, VAR_10);

out:
 FUNC_0(VAR_8, VAR_6);
 return VAR_13;
}
