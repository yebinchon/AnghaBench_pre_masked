
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char const* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t FUNC_0 (char const*,int,size_t*,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (char const*,char const*,int*) ;
 size_t FUNC_3 (char const*,int,size_t*,int ) ;

__attribute__((used)) static int
FUNC_4 (char const *VAR_7, char const *VAR_8)
{
  int VAR_9, VAR_10;
  register char const *VAR_11;
  size_t VAR_12;
  size_t VAR_13;

  VAR_9 = 0;
  VAR_11 = VAR_7;
  while ((VAR_12 = FUNC_0) (VAR_11, VAR_8 - VAR_11, &VAR_13, 0)) != (size_t) -1)
    {
      char const *VAR_14 = VAR_11 + VAR_12;
      char const *VAR_15 = VAR_14 + VAR_13;

      if (VAR_14 == VAR_8)
 break;
      if (!VAR_5)
 {
   FUNC_2 (VAR_14, VAR_15, (int *) 0);
   VAR_9++;
          VAR_6--;
   if (!VAR_6 || VAR_3)
     {
       if (VAR_4)
  FUNC_1 (0);
       VAR_0 = VAR_2 - (VAR_1 - VAR_15);
       return VAR_9;
     }
 }
      else if (VAR_11 < VAR_14)
 {
   FUNC_2 (VAR_11, VAR_14, &VAR_10);
   VAR_9 += VAR_10;
          VAR_6 -= VAR_10;
   if (!VAR_6)
     return VAR_9;
 }
      VAR_11 = VAR_15;
    }
  if (VAR_5 && VAR_11 < VAR_8)
    {
      FUNC_2 (VAR_11, VAR_8, &VAR_10);
      VAR_9 += VAR_10;
      VAR_6 -= VAR_10;
    }
  return VAR_9;
}
