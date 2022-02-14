
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ rtx ;
struct TYPE_3__ {scalar_t__ (* expand_builtin_saveregs ) () ;} ;
struct TYPE_4__ {TYPE_1__ calls; } ;


 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 scalar_t__ VAR_0 ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 () ;
 TYPE_2__ VAR_1 ;

rtx
FUNC_8 (void)
{
  rtx VAR_2, VAR_3;



  if (VAR_0 != 0)
    return VAR_0;





  FUNC_6 ();


  VAR_2 = VAR_1.calls.expand_builtin_saveregs ();

  VAR_3 = FUNC_3 ();
  FUNC_1 ();

  VAR_0 = VAR_2;




  FUNC_5 ();
  FUNC_0 (VAR_3, FUNC_2 ());
  FUNC_4 ();

  return VAR_2;
}
