
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int id; } ;
struct thread_info {void* target_data; TYPE_1__ entry; } ;


 int FUNC_0 (int *,TYPE_1__*) ;
 int VAR_0 ;
 struct thread_info* VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct thread_info*,int ,int) ;
 int FUNC_3 () ;
 int FUNC_4 (struct thread_info*,int ) ;

void
FUNC_5 (int VAR_2, void *VAR_3)
{
  struct thread_info *VAR_4
    = (struct thread_info *) FUNC_1 (sizeof (*VAR_4));

  FUNC_2 (VAR_4, 0, sizeof (*VAR_4));

  VAR_4->entry.id = VAR_2;

  FUNC_0 (&VAR_0, & VAR_4->entry);

  if (VAR_1 == ((void*)0))
    VAR_1 = VAR_4;

  VAR_4->target_data = VAR_3;
  FUNC_4 (VAR_4, FUNC_3 ());
}
