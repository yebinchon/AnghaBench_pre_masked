
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct constant_pool {scalar_t__ pool_insn; struct constant_pool* next; } ;
typedef scalar_t__ rtx ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_6 (scalar_t__,int ) ;
 scalar_t__ FUNC_7 (scalar_t__,int) ;
 scalar_t__ FUNC_8 () ;
 scalar_t__ VAR_9 ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (struct constant_pool*) ;

__attribute__((used)) static void
FUNC_11 (struct constant_pool *VAR_10)
{
  struct constant_pool *VAR_11 = ((void*)0);
  rtx VAR_12;



  for (VAR_11 = VAR_10; VAR_11; VAR_11 = VAR_11->next)
    {

      rtx VAR_13 = FUNC_3 (VAR_11->pool_insn);
      rtx VAR_14 = VAR_13? FUNC_3 (VAR_13) : VAR_5;
      rtx VAR_15 = FUNC_1 (VAR_11->pool_insn);

      if (VAR_14 && FUNC_0 (VAR_14) == VAR_3
   && VAR_13 && FUNC_0 (VAR_13) == VAR_0
   && VAR_15 && FUNC_0 (VAR_15) == VAR_1
   && FUNC_0 (FUNC_2 (VAR_14)) == VAR_6
   && FUNC_4 (FUNC_2 (VAR_14)) == VAR_9
   && FUNC_0 (FUNC_5 (FUNC_2 (VAR_14))) == VAR_4
   && FUNC_6 (FUNC_5 (FUNC_2 (VAR_14)), 0) == VAR_15)
 {
   FUNC_9 (VAR_14);
   FUNC_9 (VAR_13);
   FUNC_9 (VAR_15);
 }

      FUNC_9 (VAR_11->pool_insn);
    }



  for (VAR_12 = FUNC_8 (); VAR_12; )
    {
      rtx VAR_16 = FUNC_1 (VAR_12);

      if (FUNC_0 (VAR_12) == VAR_2
   && FUNC_0 (FUNC_2 (VAR_12)) == VAR_6
   && FUNC_0 (FUNC_5 (FUNC_2 (VAR_12))) == VAR_7
   && FUNC_7 (FUNC_5 (FUNC_2 (VAR_12)), 1) == VAR_8)
 FUNC_9 (VAR_12);

      VAR_12 = VAR_16;
    }



  while (VAR_10)
    {
      struct constant_pool *VAR_17 = VAR_10->next;
      FUNC_10 (VAR_10);
      VAR_10 = VAR_17;
    }
}
