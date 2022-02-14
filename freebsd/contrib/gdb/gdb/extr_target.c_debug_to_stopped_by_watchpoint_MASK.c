
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* to_stopped_by_watchpoint ) () ;} ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int ,char*,unsigned long) ;
 int VAR_1 ;
 int FUNC_1 () ;

__attribute__((used)) static int
FUNC_2 (void)
{
  int VAR_2;

  VAR_2 = VAR_0.to_stopped_by_watchpoint ();

  FUNC_0 (VAR_1,
        "STOPPED_BY_WATCHPOINT () = %ld\n",
        (unsigned long) VAR_2);
  return VAR_2;
}
