
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {long th_tid; TYPE_2__* th_ta; } ;
typedef TYPE_3__ td_thrhandle_t ;
struct TYPE_6__ {TYPE_1__* map; scalar_t__ map_len; } ;
struct TYPE_5__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_0(const td_thrhandle_t *VAR_3)
{

 if (VAR_3->th_tid < 0 || VAR_3->th_tid >= (long)VAR_3->th_ta->map_len ||
     VAR_3->th_ta->map[VAR_3->th_tid].type == VAR_0)
  return (VAR_1);
 return (VAR_2);
}
