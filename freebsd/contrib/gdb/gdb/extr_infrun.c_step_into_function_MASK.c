
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct symtab_and_line {scalar_t__ pc; int section; } ;
struct symtab {scalar_t__ language; } ;
struct TYPE_2__ {scalar_t__ end; scalar_t__ pc; } ;
struct execution_control_state {scalar_t__ stop_func_start; scalar_t__ stop_func_end; TYPE_1__ sal; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 () ;
 int VAR_3 ;
 TYPE_1__ FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (scalar_t__) ;
 struct symtab* FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int ,scalar_t__) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct symtab_and_line*) ;
 int FUNC_8 () ;
 int FUNC_9 (struct execution_control_state*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (struct symtab_and_line,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_12 (struct execution_control_state*) ;

__attribute__((used)) static void
FUNC_13 (struct execution_control_state *VAR_11)
{
  struct symtab *VAR_12;
  struct symtab_and_line VAR_13;

  VAR_12 = FUNC_4 (VAR_9);
  if (VAR_12 && VAR_12->language != VAR_4)
    VAR_11->stop_func_start = FUNC_0 (VAR_11->stop_func_start);

  VAR_11->sal = FUNC_2 (VAR_11->stop_func_start, 0);






  if (VAR_11->sal.end
      && VAR_11->sal.pc != VAR_11->stop_func_start
      && VAR_11->sal.end < VAR_11->stop_func_end)
    VAR_11->stop_func_start = VAR_11->sal.end;
  if (FUNC_6 (VAR_3))
    {
      VAR_11->stop_func_start
 = FUNC_5 (VAR_3,
                                      VAR_11->stop_func_start);
    }

  if (VAR_11->stop_func_start == VAR_9)
    {

      VAR_10 = 1;
      FUNC_10 (VAR_0, 0);
      FUNC_12 (VAR_11);
      return;
    }
  else
    {

      FUNC_7 (&VAR_13);
      VAR_13.pc = VAR_11->stop_func_start;
      VAR_13.section = FUNC_3 (VAR_11->stop_func_start);



      FUNC_1 ();
      VAR_8 =
 FUNC_11 (VAR_13, VAR_5, VAR_1);
      if (VAR_2)
 FUNC_8 ();


      VAR_6 = VAR_7;
    }
  FUNC_9 (VAR_11);
}
