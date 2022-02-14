
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned int map_len; TYPE_1__* map; } ;
typedef TYPE_2__ td_thragent_t ;
typedef scalar_t__ lwpid_t ;
struct TYPE_4__ {scalar_t__ type; scalar_t__ lwp; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_0(const td_thragent_t *VAR_2, lwpid_t VAR_3)
{
 unsigned int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2->map_len; ++VAR_4) {
  if (VAR_2->map[VAR_4].type == VAR_0 && VAR_2->map[VAR_4].lwp == VAR_3) {
   VAR_2->map[VAR_4].type = VAR_1;
   return;
  }
 }
}
