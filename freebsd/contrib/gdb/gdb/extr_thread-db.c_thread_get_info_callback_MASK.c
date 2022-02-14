
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int ti ;
struct TYPE_11__ {int ti_tid; } ;
typedef TYPE_2__ const td_thrinfo_t ;
typedef TYPE_2__ td_thrhandle_t ;
typedef scalar_t__ td_err_e ;
struct thread_info {TYPE_1__* private; } ;
typedef int ptid_t ;
struct TYPE_10__ {int th_valid; int ti_valid; int ti; int th; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ,TYPE_2__ const*,TYPE_2__ const*,int) ;
 int FUNC_3 (char*,int ) ;
 struct thread_info* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_1 ;
 int FUNC_6 (int *,TYPE_2__ const*,int) ;
 scalar_t__ FUNC_7 (TYPE_2__ const*,TYPE_2__ const*) ;
 int FUNC_8 (scalar_t__) ;

__attribute__((used)) static int
FUNC_9 (const td_thrhandle_t *VAR_2, void *VAR_3)
{
  td_thrinfo_t VAR_4;
  td_err_e VAR_5;
  struct thread_info *VAR_6;
  ptid_t VAR_7;

  VAR_5 = FUNC_7 (VAR_2, &VAR_4);
  if (VAR_5 != VAR_0)
    FUNC_3 ("thread_get_info_callback: cannot get thread info: %s",
    FUNC_8 (VAR_5));


  VAR_7 = FUNC_0 (VAR_4.ti_tid, FUNC_1 (VAR_1));
  VAR_6 = FUNC_4 (VAR_7);

  if (VAR_6 == ((void*)0))
    {

      FUNC_2 (VAR_7, VAR_2, &VAR_4, 1);
      VAR_6 = FUNC_4 (VAR_7);
      FUNC_5 (VAR_6 != ((void*)0));
    }

  FUNC_6 (&VAR_6->private->th, VAR_2, sizeof (*VAR_2));
  VAR_6->private->th_valid = 1;
  FUNC_6 (&VAR_6->private->ti, &VAR_4, sizeof (VAR_4));
  VAR_6->private->ti_valid = 1;

  if (VAR_3 != ((void*)0))
    *(struct thread_info **) VAR_3 = VAR_6;

  return 0;
}
