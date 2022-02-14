
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symtab_and_line {scalar_t__ line; } ;
struct execution_control_state {scalar_t__ stop_func_start; } ;
typedef scalar_t__ CORE_ADDR ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct symtab_and_line FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (struct execution_control_state*) ;
 int VAR_4 ;
 scalar_t__ FUNC_7 (int ) ;
 int VAR_5 ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 (int ) ;
 int VAR_6 ;
 int FUNC_11 (struct execution_control_state*) ;
 scalar_t__ VAR_7 ;
 int FUNC_12 (struct execution_control_state*) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_13 (struct execution_control_state*) ;

__attribute__((used)) static void
FUNC_14 (struct execution_control_state *VAR_12)
{
  CORE_ADDR VAR_13;

  if ((VAR_7 == VAR_2)
      || ((VAR_8 == 1)
          && FUNC_5 (VAR_5, VAR_12->stop_func_start)))
    {






      VAR_11 = 1;
      FUNC_8 (VAR_0, 0);
      FUNC_13 (VAR_12);
      return;
    }

  if (VAR_7 == VAR_1 || FUNC_0 (VAR_10))
    {


      if (FUNC_7 (VAR_10)
          && FUNC_4 (VAR_6,
                             FUNC_3 (FUNC_9 (), 0)))
        VAR_6 = VAR_4;

      FUNC_12 (VAR_12);
      FUNC_6 (VAR_12);
      return;
    }






  VAR_13 = FUNC_10 (VAR_10);
  if (VAR_13 == 0)
    VAR_13 = FUNC_1 (VAR_10);
  if (VAR_13 != 0)
    VAR_12->stop_func_start = VAR_13;







  {
    struct symtab_and_line VAR_14;

    VAR_14 = FUNC_2 (VAR_12->stop_func_start, 0);
    if (VAR_14.line != 0)
      {
        FUNC_11 (VAR_12);
        return;
      }
  }




  if (VAR_7 == VAR_3 && VAR_9)
    {
      VAR_11 = 1;
      FUNC_8 (VAR_0, 0);
      FUNC_13 (VAR_12);
      return;
    }

  FUNC_12 (VAR_12);
  FUNC_6 (VAR_12);
  return;
}
