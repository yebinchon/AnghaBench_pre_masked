
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_address_t ;
struct procinfo {int state; } ;
struct inf {int stopped; int nomsg; int traced; int pid; } ;
typedef int procinfo_t ;
typedef scalar_t__ mach_msg_type_number_t ;
typedef int error_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int*,int *,scalar_t__*,char**,scalar_t__*) ;
 int VAR_3 ;
 int FUNC_2 (int ,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_3 (struct inf *VAR_4)
{
  char *VAR_5;
  mach_msg_type_number_t VAR_6 = 0;
  struct procinfo *VAR_7;
  mach_msg_type_number_t VAR_8 = 0;
  int VAR_9 = 0;
  error_t VAR_10 =
  FUNC_1 (VAR_3, VAR_4->pid, &VAR_9,
      (procinfo_t *) &VAR_7, &VAR_8, &VAR_5, &VAR_6);

  if (!VAR_10)
    {
      VAR_4->stopped = !!(VAR_7->state & VAR_1);
      VAR_4->nomsg = !!(VAR_7->state & VAR_0);
      if (VAR_4->nomsg)
 VAR_4->traced = !!(VAR_7->state & VAR_2);
      FUNC_2 (FUNC_0 (), (vm_address_t) VAR_7, VAR_8);
      if (VAR_6 > 0)
 FUNC_2 (FUNC_0 (), (vm_address_t) VAR_5, VAR_6);
    }
}
