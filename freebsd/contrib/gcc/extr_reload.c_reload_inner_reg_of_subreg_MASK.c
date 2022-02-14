
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 scalar_t__ FUNC_0 (int ) ;
 size_t VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 size_t FUNC_2 (int ) ;
 int FUNC_3 (size_t) ;
 int FUNC_4 (int ,int) ;
 scalar_t__ VAR_1 ;
 size_t FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_7 (int ) ;
 int VAR_3 ;
 scalar_t__** VAR_4 ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int
FUNC_9 (rtx VAR_5, enum machine_mode VAR_6, int VAR_7)
{
  rtx VAR_8;


  if (FUNC_1 (VAR_5) != VAR_2)
    return 0;

  VAR_8 = FUNC_7 (VAR_5);


  if (FUNC_0 (VAR_8) || FUNC_1 (VAR_8) == VAR_1)
    return 1;



  if (!FUNC_6 (VAR_8)
      || FUNC_5 (VAR_8) >= VAR_0)
    return 0;


  if (! FUNC_4 (FUNC_8 (VAR_5), VAR_6))
    return 1;




  return (FUNC_3 (VAR_6) <= VAR_3
   && VAR_7
   && FUNC_3 (FUNC_2 (VAR_8)) > VAR_3
   && ((FUNC_3 (FUNC_2 (VAR_8)) / VAR_3)
       != (int) VAR_4[FUNC_5 (VAR_8)][FUNC_2 (VAR_8)]));
}
