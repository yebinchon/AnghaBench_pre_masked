
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct map_browser {int b; TYPE_2__* map; } ;
struct TYPE_4__ {TYPE_1__* dso; } ;
struct TYPE_3__ {int long_name; } ;


 int FUNC_0 (struct map_browser*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *,int ,char*,char*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_4(struct map_browser *VAR_1)
{
 int VAR_2;

 if (FUNC_3(&VAR_1->b, VAR_1->map->dso->long_name,
        "Press <- or ESC to exit, %s / to search",
        VAR_0 ? "" : "restart with -v to use") < 0)
  return -1;

 while (1) {
  VAR_2 = FUNC_2(&VAR_1->b, 0);

  if (VAR_0 && VAR_2 == '/')
   FUNC_0(VAR_1);
  else
   break;
 }

 FUNC_1(&VAR_1->b);
 return VAR_2;
}
