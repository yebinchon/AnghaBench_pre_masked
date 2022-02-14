
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (long*,int ,int ) ;

__attribute__((used)) static int
FUNC_5 (tree VAR_4, unsigned char *VAR_5, int VAR_6)
{
  tree VAR_7 = FUNC_2 (VAR_4);
  int VAR_8 = FUNC_0 (FUNC_3 (VAR_7));
  int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
  unsigned char VAR_14;




  long VAR_15[6];

  if (VAR_8 > VAR_6)
    return 0;
  VAR_12 = 32 / VAR_2;

  FUNC_4 (VAR_15, FUNC_1 (VAR_4), FUNC_3 (VAR_7));

  for (VAR_13 = 0; VAR_13 < VAR_8 * VAR_0;
       VAR_13 += VAR_0)
    {
      VAR_9 = (VAR_13 / VAR_0) & 3;
      VAR_14 = (unsigned char) (VAR_15[VAR_13 / 32] >> (VAR_13 & 31));

      if (VAR_2 < 4)
 {
   VAR_11 = VAR_9 / VAR_2;
   if (VAR_3)
     VAR_11 = (VAR_12 - 1) - VAR_11;
   VAR_10 = VAR_11 * VAR_2;
   if (VAR_1)
     VAR_10 += (VAR_2 - 1) - (VAR_9 % VAR_2);
   else
     VAR_10 += VAR_9 % VAR_2;
 }
      else
 VAR_10 = VAR_1 ? 3 - VAR_9 : VAR_9;
      VAR_5[VAR_10 + ((VAR_13 / VAR_0) & ~3)] = VAR_14;
    }
  return VAR_8;
}
