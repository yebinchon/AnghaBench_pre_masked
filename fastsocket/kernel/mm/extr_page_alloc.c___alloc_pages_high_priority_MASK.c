
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
 int VAR_2 ;
 int VAR_3 ;
 struct page* FUNC_0 (int,int *,unsigned int,struct zonelist*,int,int ,struct zone*,int) ;
 int FUNC_1 (struct zone*,int ,int) ;

__attribute__((used)) static inline struct page *
FUNC_2(gfp_t VAR_4, unsigned int VAR_5,
 struct zonelist *VAR_6, enum zone_type VAR_7,
 nodemask_t *VAR_8, struct zone *VAR_9,
 int VAR_10)
{
 struct page *VAR_11;

 do {
  VAR_11 = FUNC_0(VAR_4, VAR_8, VAR_5,
   VAR_6, VAR_7, VAR_0,
   VAR_9, VAR_10);

  if (!VAR_11 && VAR_4 & VAR_3) {
   FUNC_1(VAR_9, VAR_1, VAR_2/50);
  }
 } while (!VAR_11 && (VAR_4 & VAR_3));

 return VAR_11;
}
