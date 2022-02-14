
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef int tmp ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef int REAL_VALUE_TYPE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (long*,int ,int) ;
 int FUNC_4 (int *,long*,int) ;

__attribute__((used)) static tree
FUNC_5 (tree VAR_5, unsigned char *VAR_6, int VAR_7)
{
  enum machine_mode VAR_8 = FUNC_1 (VAR_5);
  int VAR_9 = FUNC_0 (VAR_8);
  int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
  unsigned char VAR_15;



  REAL_VALUE_TYPE VAR_16;
  long VAR_17[6];

  VAR_9 = FUNC_0 (FUNC_1 (VAR_5));
  if (VAR_9 > VAR_7 || VAR_9 > 24)
    return VAR_2;
  VAR_13 = 32 / VAR_3;

  FUNC_3 (VAR_17, 0, sizeof (VAR_17));
  for (VAR_14 = 0; VAR_14 < VAR_9 * VAR_0;
       VAR_14 += VAR_0)
    {
      VAR_10 = (VAR_14 / VAR_0) & 3;
      if (VAR_3 < 4)
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
 VAR_11 = VAR_1 ? 3 - VAR_10 : VAR_10;
      VAR_15 = VAR_6[VAR_11 + ((VAR_14 / VAR_0) & ~3)];

      VAR_17[VAR_14 / 32] |= (unsigned long)VAR_15 << (VAR_14 & 31);
    }

  FUNC_4 (&VAR_16, VAR_17, VAR_8);
  return FUNC_2 (VAR_5, VAR_16);
}
