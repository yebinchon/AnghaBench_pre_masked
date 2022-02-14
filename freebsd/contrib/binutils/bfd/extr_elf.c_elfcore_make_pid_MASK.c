
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int bfd ;
struct TYPE_2__ {int core_lwpid; int core_pid; } ;


 TYPE_1__* FUNC_0 (int *) ;

__attribute__((used)) static int
FUNC_1 (bfd *VAR_0)
{
  return ((FUNC_0 (VAR_0)->core_lwpid << 16)
   + (FUNC_0 (VAR_0)->core_pid));
}
