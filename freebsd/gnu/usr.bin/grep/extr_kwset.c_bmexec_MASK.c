
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kwset {int mind; char* target; unsigned char* delta; int mind2; } ;
typedef scalar_t__ kwset_t ;


 int FUNC_0 (char const) ;
 char* FUNC_1 (char const*,char,size_t) ;

__attribute__((used)) static size_t
FUNC_2 (kwset_t VAR_0, char const *VAR_1, size_t VAR_2)
{
  struct kwset const *VAR_3;
  register unsigned char const *VAR_4;
  register char const *VAR_5, *VAR_6, *VAR_7;
  register int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;

  VAR_3 = (struct kwset const *) VAR_0;
  VAR_11 = VAR_3->mind;

  if (VAR_11 == 0)
    return 0;
  if (VAR_11 > VAR_2)
    return -1;
  if (VAR_11 == 1)
    {
      VAR_7 = FUNC_1 (VAR_1, VAR_3->target[0], VAR_2);
      return VAR_7 ? VAR_7 - VAR_1 : -1;
    }

  VAR_4 = VAR_3->delta;
  VAR_6 = VAR_3->target + VAR_11;
  VAR_9 = FUNC_0(VAR_6[-2]);
  VAR_12 = VAR_3->mind2;
  VAR_7 = VAR_1 + VAR_11;


  if (VAR_2 > 12 * VAR_11)

    for (VAR_5 = VAR_1 + VAR_2 - 11 * VAR_11;;)
      {
 while (VAR_7 <= VAR_5)
   {
     VAR_8 = VAR_4[FUNC_0(VAR_7[-1])], VAR_7 += VAR_8;
     VAR_8 = VAR_4[FUNC_0(VAR_7[-1])], VAR_7 += VAR_8;
     if (VAR_8 == 0)
       goto found;
     VAR_8 = VAR_4[FUNC_0(VAR_7[-1])], VAR_7 += VAR_8;
     VAR_8 = VAR_4[FUNC_0(VAR_7[-1])], VAR_7 += VAR_8;
     VAR_8 = VAR_4[FUNC_0(VAR_7[-1])], VAR_7 += VAR_8;
     if (VAR_8 == 0)
       goto found;
     VAR_8 = VAR_4[FUNC_0(VAR_7[-1])], VAR_7 += VAR_8;
     VAR_8 = VAR_4[FUNC_0(VAR_7[-1])], VAR_7 += VAR_8;
     VAR_8 = VAR_4[FUNC_0(VAR_7[-1])], VAR_7 += VAR_8;
     if (VAR_8 == 0)
       goto found;
     VAR_8 = VAR_4[FUNC_0(VAR_7[-1])], VAR_7 += VAR_8;
     VAR_8 = VAR_4[FUNC_0(VAR_7[-1])], VAR_7 += VAR_8;
   }
 break;
      found:
 if (FUNC_0(VAR_7[-2]) == VAR_9)
   {
     for (VAR_10 = 3; VAR_10 <= VAR_11 && FUNC_0(VAR_7[-VAR_10]) == FUNC_0(VAR_6[-VAR_10]); ++VAR_10)
       ;
     if (VAR_10 > VAR_11)
       return VAR_7 - VAR_11 - VAR_1;
   }
 VAR_7 += VAR_12;
      }



  VAR_5 = VAR_1 + VAR_2;
  VAR_8 = VAR_4[FUNC_0(VAR_7[-1])];
  while (VAR_8 <= VAR_5 - VAR_7)
    {
      VAR_8 = VAR_4[FUNC_0((VAR_7 += VAR_8)[-1])];
      if (VAR_8 != 0)
 continue;
      if (FUNC_0(VAR_7[-2]) == VAR_9)
 {
   for (VAR_10 = 3; VAR_10 <= VAR_11 && FUNC_0(VAR_7[-VAR_10]) == FUNC_0(VAR_6[-VAR_10]); ++VAR_10)
     ;
   if (VAR_10 > VAR_11)
     return VAR_7 - VAR_11 - VAR_1;
 }
      VAR_8 = VAR_12;
    }

  return -1;
}
