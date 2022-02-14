
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct args_size {int constant; } ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int FUNC_0 (struct args_size,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct args_size,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int) ;

__attribute__((used)) static void
FUNC_7 (struct args_size *VAR_4, enum machine_mode VAR_5, tree VAR_6)
{
  if (VAR_5 != VAR_1)
    {
      if (FUNC_1 (VAR_5) % VAR_3)
 VAR_4->constant
   += (((FUNC_1 (VAR_5) + VAR_3 - 1)
        / VAR_3 * VAR_3 / VAR_0)
       - FUNC_2 (VAR_5));
    }
  else
    {
      if (FUNC_4 (VAR_6) != VAR_2
   || (FUNC_5 (VAR_6) * VAR_0) % VAR_3)
 {

   tree VAR_7 = FUNC_6 (VAR_6, VAR_3 / VAR_0);

   FUNC_0 (*VAR_4, VAR_7);
   FUNC_3 (*VAR_4, VAR_6);
 }
    }
}
