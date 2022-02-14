
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
struct TYPE_2__ {scalar_t__ (* mode_rep_extended ) (int,int) ;} ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int) ;
 scalar_t__** VAR_4 ;
 scalar_t__ FUNC_4 (int,int) ;
 scalar_t__ FUNC_5 (int,int) ;
 TYPE_1__ VAR_5 ;

__attribute__((used)) static void
FUNC_6 (void)
{
  enum machine_mode VAR_6, VAR_7;

  for (VAR_7 = FUNC_0 (VAR_0); VAR_7 != VAR_3;
       VAR_7 = FUNC_2 (VAR_6))
    for (VAR_6 = FUNC_0 (VAR_0); VAR_6 != VAR_7;
  VAR_6 = FUNC_2 (VAR_6))
      {
 enum machine_mode VAR_8;



 FUNC_3 (VAR_5.mode_rep_extended (VAR_6, VAR_7) == VAR_2
      || FUNC_2 (VAR_6) == VAR_7);



 for (VAR_8 = VAR_6; VAR_8 != VAR_7; VAR_8 = FUNC_2 (VAR_8))
   {
     enum machine_mode VAR_9 = FUNC_2 (VAR_8);

     if (VAR_5.mode_rep_extended (VAR_8, VAR_9) == VAR_1




  || VAR_4 [VAR_7][VAR_6])
       VAR_4 [VAR_7][VAR_6]
  += FUNC_1 (VAR_9) - FUNC_1 (VAR_8);
   }
      }
}
