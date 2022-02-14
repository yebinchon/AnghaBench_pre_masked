
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ task_t ;
struct target_ops {int dummy; } ;
struct mem_attrib {int dummy; } ;
struct TYPE_5__ {TYPE_1__* task; } ;
struct TYPE_4__ {scalar_t__ port; } ;
typedef scalar_t__ CORE_ADDR ;


 scalar_t__ VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (scalar_t__,scalar_t__,char*,int) ;
 int FUNC_1 (scalar_t__,scalar_t__,char*,int) ;
 int FUNC_2 (TYPE_2__*,char*,char*,void*,int,char*,char*) ;

__attribute__((used)) static int
FUNC_3 (CORE_ADDR VAR_2, char *VAR_3, int VAR_4, int VAR_5,
   struct mem_attrib *VAR_6,
   struct target_ops *VAR_7)
{
  task_t VAR_8 = (VAR_1
   ? (VAR_1->task
      ? VAR_1->task->port : 0)
   : 0);

  if (VAR_8 == VAR_0)
    return 0;
  else
    {
      FUNC_2 (VAR_1, "%s %p[%d] %s %p",
   VAR_5 ? "writing" : "reading", (void *) VAR_2, VAR_4,
   VAR_5 ? "<--" : "-->", VAR_3);
      if (VAR_5)
 return FUNC_1 (VAR_8, VAR_2, VAR_3, VAR_4);
      else
 return FUNC_0 (VAR_8, VAR_2, VAR_3, VAR_4);
    }
}
