
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int
FUNC_5 (tree VAR_5, unsigned char *VAR_6, int VAR_7)
{
  tree VAR_8 = FUNC_3 (VAR_5);
  int VAR_9 = FUNC_0 (FUNC_4 (VAR_8));
  int VAR_10, VAR_11, VAR_12, VAR_13;
  unsigned char VAR_14;

  if (VAR_9 > VAR_7)
    return 0;
  VAR_13 = VAR_9 / VAR_3;

  for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++)
    {
      int VAR_15 = VAR_10 * VAR_0;
      if (VAR_15 < VAR_2)
 VAR_14 = (unsigned char) (FUNC_2 (VAR_5) >> VAR_15);
      else
 VAR_14 = (unsigned char) (FUNC_1 (VAR_5)
     >> (VAR_15 - VAR_2));

      if (VAR_9 > VAR_3)
 {
   VAR_12 = VAR_10 / VAR_3;
   if (VAR_4)
     VAR_12 = (VAR_13 - 1) - VAR_12;
   VAR_11 = VAR_12 * VAR_3;
   if (VAR_1)
     VAR_11 += (VAR_3 - 1) - (VAR_10 % VAR_3);
   else
     VAR_11 += VAR_10 % VAR_3;
 }
      else
 VAR_11 = VAR_1 ? (VAR_9 - 1) - VAR_10 : VAR_10;
      VAR_6[VAR_11] = VAR_14;
    }
  return VAR_9;
}
