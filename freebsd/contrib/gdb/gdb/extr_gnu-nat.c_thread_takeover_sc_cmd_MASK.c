
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vm_address_t ;
typedef TYPE_1__* thread_basic_info_t ;
struct TYPE_3__ {int suspend_count; } ;
typedef TYPE_1__ thread_basic_info_data_t ;
struct proc {int sc; int port; } ;
typedef int mach_msg_type_number_t ;
typedef scalar_t__ error_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct proc* FUNC_0 () ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int ,int ,int*,int*) ;
 int FUNC_6 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_7 (char *VAR_2, int VAR_3)
{
  struct proc *VAR_4 = FUNC_0 ();
  thread_basic_info_data_t VAR_5;
  thread_basic_info_t VAR_6 = &VAR_5;
  mach_msg_type_number_t VAR_7 = VAR_1;
  error_t VAR_8 =
  FUNC_5 (VAR_4->port, VAR_0, (int *) &VAR_6, &VAR_7);
  if (VAR_8)
    FUNC_1 ("%s.", FUNC_4 (VAR_8));
  VAR_4->sc = VAR_6->suspend_count;
  if (VAR_3)
    FUNC_3 ("Suspend count was %d.\n", VAR_4->sc);
  if (VAR_6 != &VAR_5)
    FUNC_6 (FUNC_2 (), (vm_address_t) VAR_6,
     VAR_7 * sizeof (int));
}
