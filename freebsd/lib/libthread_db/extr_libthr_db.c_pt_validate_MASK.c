
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ th_tid; scalar_t__ th_thread; } ;
typedef TYPE_1__ td_thrhandle_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_0(const td_thrhandle_t *VAR_2)
{

 if (VAR_2->th_tid == 0 || VAR_2->th_thread == 0)
  return (VAR_0);
 return (VAR_1);
}
