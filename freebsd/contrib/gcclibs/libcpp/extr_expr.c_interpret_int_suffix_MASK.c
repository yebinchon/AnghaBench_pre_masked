
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uchar ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;

__attribute__((used)) static unsigned int
FUNC_0 (const uchar *VAR_5, size_t VAR_6)
{
  size_t VAR_7, VAR_8, VAR_9;

  VAR_7 = VAR_8 = VAR_9 = 0;

  while (VAR_6--)
    switch (VAR_5[VAR_6])
      {
      case 'u': case 'U': VAR_7++; break;
      case 'i': case 'I':
      case 'j': case 'J': VAR_9++; break;
      case 'l': case 'L': VAR_8++;

 if (VAR_8 == 2 && VAR_5[VAR_6] != VAR_5[VAR_6 + 1])
   return 0;
 break;
      default:
 return 0;
      }

  if (VAR_8 > 2 || VAR_7 > 1 || VAR_9 > 1)
    return 0;

  return ((VAR_9 ? VAR_0 : 0)
   | (VAR_7 ? VAR_4 : 0)
   | ((VAR_8 == 0) ? VAR_3
      : (VAR_8 == 1) ? VAR_2 : VAR_1));
}
