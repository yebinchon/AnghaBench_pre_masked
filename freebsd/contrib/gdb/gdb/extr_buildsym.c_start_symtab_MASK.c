
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct context_stack {int dummy; } ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 struct context_stack* VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int * VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 scalar_t__ VAR_7 ;
 char* VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (char*,char*) ;
 int * VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_2 (int) ;

void
FUNC_3 (char *VAR_12, char *VAR_13, CORE_ADDR VAR_14)
{

  VAR_8 = VAR_12;
  VAR_9 = VAR_14;
  VAR_5 = ((void*)0);
  VAR_6 = ((void*)0);
  VAR_11 = 0;
  VAR_7 = 0;



  if (VAR_1 == ((void*)0))
    {
      VAR_3 = VAR_0;
      VAR_1 = (struct context_stack *)
 FUNC_2 (VAR_3 * sizeof (struct context_stack));
    }
  VAR_2 = 0;



  FUNC_0 ();




  VAR_10 = ((void*)0);
  VAR_4 = ((void*)0);
  FUNC_1 (VAR_12, VAR_13);
}
