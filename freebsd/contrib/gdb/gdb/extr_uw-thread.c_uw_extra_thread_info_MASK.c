
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct thread_map {int thr_state; scalar_t__ thr_lwpp; } ;
struct thread_info {TYPE_1__* private; int ptid; } ;
struct TYPE_5__ {int lwp_id; } ;
typedef TYPE_2__ __lwp_desc_t ;
struct TYPE_4__ {int mapp; int stable; } ;
typedef int CORE_ADDR ;


 int FUNC_0 (int ) ;






 int FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (int ,struct thread_map*) ;
 int FUNC_3 (char*,char*,char*,int) ;

__attribute__((used)) static char *
FUNC_4 (struct thread_info *VAR_0)
{
  static char VAR_1[80];
  struct thread_map VAR_2;
  __lwp_desc_t VAR_3;
  int VAR_4;
  char *VAR_5;

  if (!FUNC_0 (VAR_0->ptid))
    return ((void*)0);

  if (!VAR_0->private->stable)
    return "switching";

  if (!FUNC_2 (VAR_0->private->mapp, &VAR_2))
    return ((void*)0);

  if (!VAR_2.thr_lwpp || !FUNC_1 ((CORE_ADDR)VAR_2.thr_lwpp, &VAR_3))
    VAR_4 = 0;
  else
    VAR_4 = VAR_3.lwp_id;

  switch (VAR_2.thr_state) {
  case 132: VAR_5 = "running"; break;
  case 130: VAR_5 = "sleeping"; break;
  case 131: VAR_5 = "runnable"; break;
  case 128: VAR_5 = "zombie"; break;
  case 129: VAR_5 = "suspended"; break;

  case 133: VAR_5 = "forking"; break;

  default: VAR_5 = "confused"; break;
  }

  if (!VAR_4)
    return VAR_5;

  FUNC_3 (VAR_1, "%s, LWP %d", VAR_5, VAR_4);
  return VAR_1;
}
