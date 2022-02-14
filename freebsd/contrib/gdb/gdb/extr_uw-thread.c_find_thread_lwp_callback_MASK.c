
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread_info {TYPE_1__* private; int ptid; } ;
struct TYPE_2__ {int lwpid; int stable; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1 (struct thread_info *VAR_0, void *VAR_1)
{
  int VAR_2 = (int)VAR_1;

  if (!FUNC_0 (VAR_0->ptid))
    return 0;
  if (!VAR_0->private->stable)
    return 0;
  if (VAR_2 != VAR_0->private->lwpid)
    return 0;


  return 1;
}
