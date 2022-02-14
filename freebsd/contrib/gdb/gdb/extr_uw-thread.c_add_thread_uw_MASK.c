
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread_info {TYPE_1__* private; } ;
struct private_thread_info {int dummy; } ;
typedef int ptid_t ;
struct TYPE_2__ {int stable; int thrid; int lwpid; int mapp; } ;
typedef int CORE_ADDR ;


 struct thread_info* FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (int) ;

__attribute__((used)) static void
FUNC_5 (int VAR_1, int VAR_2, CORE_ADDR VAR_3, ptid_t VAR_4)
{
  struct thread_info *VAR_5;

  if ((VAR_5 = FUNC_0 (VAR_4)) == ((void*)0))
    FUNC_1 ("failed to create new thread structure");

  VAR_5->private = FUNC_4 (sizeof (struct private_thread_info));
  VAR_5->private->stable = 1;
  VAR_5->private->thrid = VAR_1;
  VAR_5->private->lwpid = VAR_2;
  VAR_5->private->mapp = VAR_3;

  if (VAR_0)
    FUNC_2 ("[New %s]\n", FUNC_3 (VAR_4));
}
