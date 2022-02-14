
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
struct gdbarch {int dummy; } ;


 int FUNC_0 (struct type*) ;
 scalar_t__ FUNC_1 (int ,struct type*) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 (struct type*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;

int
FUNC_4 (struct gdbarch *VAR_5, struct type *VAR_6)
{
  if (FUNC_2 ()
      && FUNC_1 (VAR_4, VAR_6))
    {
      FUNC_0 (VAR_6);

      return (FUNC_3 (VAR_6) == VAR_2
       || FUNC_3 (VAR_6) == VAR_3
       || FUNC_3 (VAR_6) == VAR_1
       || FUNC_3 (VAR_6) == VAR_0);
    }

  return 0;
}
