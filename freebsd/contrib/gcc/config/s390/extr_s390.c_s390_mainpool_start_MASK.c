
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct constant_pool {int size; scalar_t__ pool_insn; } ;
typedef scalar_t__ rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_4 (scalar_t__,int) ;
 int FUNC_5 (scalar_t__,scalar_t__*) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 () ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (struct constant_pool*,scalar_t__,int) ;
 int FUNC_12 (struct constant_pool*,scalar_t__) ;
 struct constant_pool* FUNC_13 () ;
 scalar_t__ FUNC_14 (scalar_t__) ;
 int FUNC_15 (struct constant_pool*) ;

__attribute__((used)) static struct constant_pool *
FUNC_16 (void)
{
  struct constant_pool *VAR_7;
  rtx VAR_8;

  VAR_7 = FUNC_13 ();

  for (VAR_8 = FUNC_7 (); VAR_8; VAR_8 = FUNC_1 (VAR_8))
    {
      if (FUNC_0 (VAR_8) == VAR_1
   && FUNC_0 (FUNC_2 (VAR_8)) == VAR_3
   && FUNC_0 (FUNC_3 (FUNC_2 (VAR_8))) == VAR_6
   && FUNC_4 (FUNC_3 (FUNC_2 (VAR_8)), 1) == VAR_5)
 {
   FUNC_6 (!VAR_7->pool_insn);
   VAR_7->pool_insn = VAR_8;
 }

      if (!VAR_4 && FUNC_14 (VAR_8))
 {
   FUNC_12 (VAR_7, VAR_8);
 }
      else if (FUNC_0 (VAR_8) == VAR_1 || FUNC_0 (VAR_8) == VAR_0)
 {
   rtx VAR_9 = VAR_2;
   FUNC_5 (FUNC_2 (VAR_8), &VAR_9);
   if (VAR_9)
     {
       rtx VAR_10 = FUNC_8 (VAR_9);
       enum machine_mode VAR_11 = FUNC_9 (VAR_9);
       FUNC_11 (VAR_7, VAR_10, VAR_11);
     }
 }
    }

  FUNC_6 (VAR_7->pool_insn || VAR_7->size == 0);

  if (VAR_7->size >= 4096)
    {


      FUNC_10 (VAR_7->pool_insn);

      FUNC_15 (VAR_7);
      VAR_7 = ((void*)0);
    }

  return VAR_7;
}
