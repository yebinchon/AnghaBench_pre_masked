
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread_info {TYPE_1__* private; } ;
struct TYPE_2__ {scalar_t__ mapp; } ;
typedef scalar_t__ CORE_ADDR ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 struct thread_info* FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int ,void*) ;

__attribute__((used)) static CORE_ADDR
FUNC_4 (void)
{
  if (!VAR_2)
    {
      struct thread_info *VAR_3;
      FUNC_3 (VAR_1, (void *)1);
      if ((VAR_3 = FUNC_2 (FUNC_0 (FUNC_1 (VAR_0), 1))))
 VAR_2 = VAR_3->private->mapp;
    }
  return VAR_2;
}
