
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct target_waitstatus {int dummy; } ;
typedef int ptid_t ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ,struct target_waitstatus*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static ptid_t
FUNC_4 (ptid_t VAR_2, struct target_waitstatus *VAR_3)
{
  ptid_t VAR_4;
  VAR_1 = 1;
  VAR_4 = FUNC_3 (VAR_2, VAR_3);

  if (VAR_0)
    {

    }
  return VAR_4;
}
