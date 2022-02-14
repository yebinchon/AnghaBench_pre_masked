
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (size_t) ;
 unsigned int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (int ) ;
 int VAR_2 ;
 unsigned int** VAR_3 ;

__attribute__((used)) static bool
FUNC_6 (rtx VAR_4, unsigned int VAR_5)
{
  unsigned int VAR_6, VAR_7;

  if (FUNC_0 (VAR_4) == VAR_1
      && (((FUNC_2 (FUNC_1 (VAR_4))
     + VAR_2 - 1) / VAR_2)
   == ((FUNC_2 (FUNC_1 (FUNC_5 (VAR_4)))
        + VAR_2 - 1) / VAR_2)))
    VAR_4 = FUNC_5 (VAR_4);

  if (!FUNC_4 (VAR_4))
    return 0;

  VAR_6 = FUNC_3 (VAR_4);
  VAR_7 = (VAR_6 >= VAR_0 ? VAR_6 + 1
       : VAR_6 + VAR_3[VAR_6][FUNC_1 (VAR_4)]);
  return (VAR_5 >= VAR_6 && VAR_5 < VAR_7);
}
