
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int td_thrinfo_t ;
typedef int td_thrhandle_t ;
struct TYPE_3__ {scalar_t__ sig; } ;
struct target_waitstatus {scalar_t__ kind; TYPE_1__ value; } ;
typedef int ptid_t ;
struct TYPE_4__ {int (* to_wait ) (int ,struct target_waitstatus*) ;} ;
typedef int CORE_ADDR ;


 int FUNC_0 (long,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ,int *,int *,int) ;
 int FUNC_3 (int ) ;
 TYPE_2__ VAR_2 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 long FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ) ;
 int VAR_3 ;
 int FUNC_8 (int ,struct target_waitstatus*) ;
 int FUNC_9 (int ,int *,int *) ;

__attribute__((used)) static ptid_t
FUNC_10 (ptid_t VAR_4, struct target_waitstatus *VAR_5)
{
  ptid_t VAR_6;
  long VAR_7;
  CORE_ADDR VAR_8;
  td_thrhandle_t VAR_9;
  td_thrinfo_t VAR_10;

  VAR_6 = VAR_2.to_wait (VAR_4, VAR_5);
  if (FUNC_1(VAR_6) >= 0 && VAR_5->kind == VAR_1)
    {
      VAR_7 = FUNC_6 (FUNC_1(VAR_6));
      VAR_6 = FUNC_9 (FUNC_0(VAR_7, FUNC_1(VAR_6)),
         &VAR_9, &VAR_10);
      if (!FUNC_7(VAR_6)) {




        FUNC_2(VAR_6, &VAR_9, &VAR_10, 1);
      }
      if (VAR_5->value.sig == VAR_0)
        FUNC_3(VAR_6);





      if (!FUNC_5 (VAR_3))
        {
          FUNC_4 (VAR_3);
          VAR_3 = VAR_6;
        }
    }

  return (VAR_6);
}
