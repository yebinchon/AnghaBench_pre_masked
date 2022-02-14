
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int td_thrinfo_t ;
typedef int td_thrhandle_t ;
typedef int ptid_t ;
struct TYPE_2__ {int pid; } ;


 int FUNC_0 (long,int ) ;
 int FUNC_1 (int ,int *,int *,int) ;
 long FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_4 (int ,int *,int *) ;

__attribute__((used)) static void
FUNC_5 ()
{
  td_thrhandle_t VAR_2;
  td_thrinfo_t VAR_3;
  long VAR_4;
  ptid_t VAR_5, VAR_6;

  VAR_4 = FUNC_2 (VAR_1.pid);
  VAR_5 = FUNC_0 (VAR_4, VAR_1.pid);
  VAR_6 = FUNC_4 (VAR_5, &VAR_2, &VAR_3);
  if (!FUNC_3 (VAR_6))
    {
      FUNC_1 (VAR_6, &VAR_2, &VAR_3, 1);
    }
  VAR_0 = VAR_6;
}
