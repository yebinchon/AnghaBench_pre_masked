
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct cipso_v4_map_cache_bkt {int dummy; } ;
struct TYPE_3__ {int list; scalar_t__ size; int lock; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 TYPE_1__* VAR_3 ;
 TYPE_1__* FUNC_1 (size_t,int,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(void)
{
 u32 VAR_4;

 VAR_3 = FUNC_1(VAR_0,
     sizeof(struct cipso_v4_map_cache_bkt),
     VAR_2);
 if (VAR_3 == ((void*)0))
  return -VAR_1;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  FUNC_2(&VAR_3[VAR_4].lock);
  VAR_3[VAR_4].size = 0;
  FUNC_0(&VAR_3[VAR_4].list);
 }

 return 0;
}
