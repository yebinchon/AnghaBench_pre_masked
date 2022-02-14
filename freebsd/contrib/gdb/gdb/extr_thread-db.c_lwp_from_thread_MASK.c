
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct thread_info {TYPE_2__* private; } ;
typedef int ptid_t ;
struct TYPE_3__ {int ti_lid; } ;
struct TYPE_4__ {TYPE_1__ ti; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 struct thread_info* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct thread_info*) ;

__attribute__((used)) static ptid_t
FUNC_5 (ptid_t VAR_0)
{
  struct thread_info *VAR_1;
  ptid_t VAR_2;

  if (!FUNC_3 (VAR_0))
    return VAR_0;

  VAR_1 = FUNC_2 (VAR_0);
  FUNC_4 (VAR_1);

  return FUNC_0 (VAR_1->private->ti.ti_lid, FUNC_1 (VAR_0));
}
