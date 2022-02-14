
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 unsigned int VAR_0 ;
 size_t FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (unsigned int,int) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__** VAR_1 ;

__attribute__((used)) static bool
FUNC_6 (rtx VAR_2, int VAR_3, enum machine_mode VAR_4)
{
  unsigned int VAR_5;

  if (!FUNC_4(VAR_2))
    return 0;

  VAR_5 = FUNC_2 (VAR_2);


  if (VAR_5 < VAR_0)
    return (FUNC_1 (VAR_5, VAR_4)
     && (VAR_1[VAR_5][FUNC_0 (VAR_2)]
  >= VAR_1[VAR_5][VAR_4]));


  return (FUNC_3 (VAR_5) == 1 && !VAR_3
   && !FUNC_5 (VAR_2));
}
