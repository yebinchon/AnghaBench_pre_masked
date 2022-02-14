
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pid; long lwp; long tid; } ;
typedef TYPE_1__ ptid_t ;



ptid_t
FUNC_0 (int VAR_0, long VAR_1, long VAR_2)
{
  ptid_t VAR_3;

  VAR_3.pid = VAR_0;
  VAR_3.lwp = VAR_1;
  VAR_3.tid = VAR_2;
  return VAR_3;
}
