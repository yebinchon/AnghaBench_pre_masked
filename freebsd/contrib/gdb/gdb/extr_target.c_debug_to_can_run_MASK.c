
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* to_can_run ) () ;} ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_1 ;
 int FUNC_1 () ;

__attribute__((used)) static int
FUNC_2 (void)
{
  int VAR_2;

  VAR_2 = VAR_0.to_can_run ();

  FUNC_0 (VAR_1, "target_can_run () = %d\n", VAR_2);

  return VAR_2;
}
