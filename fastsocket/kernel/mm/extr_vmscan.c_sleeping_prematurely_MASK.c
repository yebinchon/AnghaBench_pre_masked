
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct zone {int dummy; } ;
struct TYPE_3__ {int nr_zones; struct zone* node_zones; } ;
typedef TYPE_1__ pg_data_t ;


 int FUNC_0 (struct zone*) ;
 int FUNC_1 (struct zone*) ;
 scalar_t__ FUNC_2 (struct zone*) ;
 int FUNC_3 (struct zone*,int,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(pg_data_t *VAR_0, int VAR_1, long VAR_2)
{
 int VAR_3;


 if (VAR_2)
  return 1;


 for (VAR_3 = 0; VAR_3 < VAR_0->nr_zones; VAR_3++) {
  struct zone *VAR_4 = VAR_0->node_zones + VAR_3;

  if (!FUNC_1(VAR_4))
   continue;

  if (FUNC_2(VAR_4))
   continue;

  if (!FUNC_3(VAR_4, VAR_1, FUNC_0(VAR_4),
        0, 0))
   return 1;
 }

 return 0;
}
