
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ sig; } ;
struct target_waitstatus {scalar_t__ kind; TYPE_1__ value; } ;
typedef int ptid_t ;
typedef scalar_t__ CORE_ADDR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int *,struct target_waitstatus*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static int
FUNC_9 (void)
{
  ptid_t VAR_6;
  struct target_waitstatus VAR_7;


  FUNC_3 (&VAR_6, &VAR_7);



  if (VAR_7.kind != VAR_2
      || (VAR_7.value.sig != VAR_1 &&
          VAR_7.value.sig != VAR_0))
    {
      return 0;
    }

  if (!FUNC_4 (VAR_6, VAR_4)
      && !FUNC_4 (VAR_3, VAR_6))
    {

      CORE_ADDR VAR_8 = FUNC_6 (VAR_6);

      if (VAR_8 != FUNC_5 ())
 {

   VAR_3 = VAR_6;



   FUNC_1 ();
   FUNC_7 ();
   VAR_5 = VAR_8;
   FUNC_8 (FUNC_2 ());
 }




 if (FUNC_0 (VAR_8))
    return 1;
    }

  return 0;

}
