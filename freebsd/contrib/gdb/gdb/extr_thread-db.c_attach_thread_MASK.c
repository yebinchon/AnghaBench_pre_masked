
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ ti_state; int ti_lid; } ;
typedef TYPE_1__ td_thrinfo_t ;
typedef int td_thrhandle_t ;
typedef scalar_t__ td_err_e ;
struct thread_info {int private; } ;
struct private_thread_info {int dummy; } ;
typedef int ptid_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct thread_info* FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,int ,char*) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int const*,int) ;
 char* FUNC_10 (scalar_t__) ;
 int FUNC_11 (int) ;

__attribute__((used)) static void
FUNC_12 (ptid_t VAR_3, const td_thrhandle_t *VAR_4,
        const td_thrinfo_t *VAR_5, int VAR_6)
{
  struct thread_info *VAR_7;
  td_err_e VAR_8;

  FUNC_4 ();


  VAR_7 = FUNC_3 (VAR_3);
  VAR_7->private = FUNC_11 (sizeof (struct private_thread_info));
  FUNC_6 (VAR_7->private, 0, sizeof (struct private_thread_info));

  if (VAR_6)
    FUNC_7 ("[New %s]\n", FUNC_8 (VAR_3));

  if (VAR_5->ti_state == VAR_1 || VAR_5->ti_state == VAR_2)
    return;







  VAR_8 = FUNC_9 (VAR_4, 1);
  if (VAR_8 != VAR_0)
    FUNC_5 ("Cannot enable thread event reporting for %s: %s",
    FUNC_8 (VAR_3), FUNC_10 (VAR_8));
}
