
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sig; } ;
struct target_waitstatus {TYPE_1__ value; int kind; } ;
typedef int ptid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,unsigned long,unsigned long) ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long FUNC_1 (int) ;
 int FUNC_2 () ;

__attribute__((used)) static ptid_t
FUNC_3 (ptid_t VAR_5, struct target_waitstatus *VAR_6)
{
  int VAR_7;

  VAR_6->kind = VAR_2;

  VAR_7 = FUNC_2 ();

  if (VAR_7)
    {
      VAR_6->value.sig = VAR_0;
      return VAR_4;
    }

  VAR_6->value.sig = VAR_1;
  return VAR_4;
}
