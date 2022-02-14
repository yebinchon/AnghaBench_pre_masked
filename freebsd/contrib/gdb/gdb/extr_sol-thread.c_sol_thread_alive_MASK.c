
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int td_thrhandle_t ;
typedef int td_err_e ;
typedef int ptid_t ;
struct TYPE_4__ {int (* to_thread_alive ) (int ) ;} ;
struct TYPE_3__ {int (* to_thread_alive ) (int ) ;} ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_2 (int ,int,int *) ;
 int FUNC_3 (int *) ;
 TYPE_1__ VAR_3 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int
FUNC_6 (ptid_t VAR_5)
{
  if (FUNC_1 (VAR_5))
    {
      td_err_e VAR_6;
      td_thrhandle_t VAR_7;
      int VAR_8;

      VAR_8 = FUNC_0 (VAR_5);
      if ((VAR_6 = FUNC_2 (VAR_1, VAR_8, &VAR_7)) != VAR_0)
 return 0;
      if ((VAR_6 = FUNC_3 (&VAR_7)) != VAR_0)
 return 0;
      return 1;
    }
  else

    {
      if (VAR_4)
 return VAR_3.to_thread_alive (VAR_5);
      else
 return VAR_2.to_thread_alive (VAR_5);
    }
}
