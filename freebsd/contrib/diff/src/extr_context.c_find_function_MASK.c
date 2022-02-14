
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ lin ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (size_t,int ) ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int *,char const*,int,int ,int,int ) ;

__attribute__((used)) static char const *
FUNC_2 (char const * const *VAR_5, lin VAR_6)
{
  lin VAR_7 = VAR_6;
  lin VAR_8 = VAR_3;
  VAR_3 = VAR_7;

  while (VAR_8 <= --VAR_7)
    {

      char const *VAR_9 = VAR_5[VAR_7];
      size_t VAR_10 = VAR_5[VAR_7 + 1] - VAR_9 - 1;


      int VAR_11 = FUNC_0 (VAR_10, VAR_0);

      if (0 <= FUNC_1 (&VAR_4, VAR_9, VAR_11, 0, VAR_11, 0))
 {
   VAR_2 = VAR_7;
   return VAR_9;
 }
    }


  if (VAR_2 != VAR_1)
    return VAR_5[VAR_2];

  return 0;
}
