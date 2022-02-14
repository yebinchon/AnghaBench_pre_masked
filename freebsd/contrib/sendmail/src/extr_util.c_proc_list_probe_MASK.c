
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ pid_t ;
struct TYPE_4__ {int e_id; } ;
struct TYPE_3__ {scalar_t__ proc_pid; scalar_t__ proc_type; scalar_t__ proc_count; int proc_task; } ;


 int FUNC_0 (char*,int,scalar_t__) ;
 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 TYPE_1__* VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,char*,int,...) ;

void
FUNC_6()
{
 int VAR_14, VAR_15;
 int VAR_16;
 pid_t VAR_17;

 VAR_15 = 0;
 VAR_16 = FUNC_3(VAR_13);


 for (VAR_14 = 1; VAR_14 < VAR_11; VAR_14++)
 {
  VAR_17 = VAR_12[VAR_14].proc_pid;
  if (VAR_17 == VAR_9 || VAR_17 == VAR_3)
   continue;
  if (FUNC_2(VAR_17, 0) < 0)
  {
   if (VAR_7 > 3)
    FUNC_5(VAR_5, VAR_1->e_id,
       "proc_list_probe: lost pid %d",
       (int) VAR_12[VAR_14].proc_pid);
   VAR_12[VAR_14].proc_pid = VAR_9;
   FUNC_1(VAR_12[VAR_14].proc_task);

   if (VAR_12[VAR_14].proc_type == VAR_10)
   {
    VAR_2 -= VAR_12[VAR_14].proc_count;
    FUNC_0("proc_list_probe", VAR_14,
      VAR_12[VAR_14].proc_count);
   }

   VAR_0--;
  }
  else
  {
   ++VAR_15;
  }
 }
 if (VAR_0 < 0)
  VAR_0 = 0;
 if (VAR_16 == 0)
  (void) FUNC_4(VAR_13);
 if (VAR_7 > 10 && VAR_15 != VAR_0 && VAR_3 == VAR_4)
 {
  FUNC_5(VAR_6, VAR_8,
     "proc_list_probe: found %d children, expected %d",
     VAR_15, VAR_0);
 }
}
