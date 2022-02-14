
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
 unsigned int VAR_5 ;

__attribute__((used)) static unsigned int
FUNC_0 (const uchar *VAR_6, size_t VAR_7)
{
  size_t VAR_8 = 0, VAR_9 = 0, VAR_10 = 0, VAR_11 = 0, VAR_12 = 0;

  while (VAR_7--)
    switch (VAR_6[VAR_7])
      {
      case 'f': case 'F':
 if (VAR_11 > 0)
   return 0;
 VAR_8++;
 break;
      case 'l': case 'L':
 if (VAR_11 > 0)
   return 0;
 VAR_9++;
 break;
      case 'i': case 'I':
      case 'j': case 'J': VAR_10++; break;
      case 'd': case 'D': VAR_11++; break;
      default:
 return 0;
      }

  if (VAR_11 == 1 && !VAR_8 && !VAR_9) {
    VAR_11 = 0;
    VAR_12 = 1;
  }

  if (VAR_8 + VAR_12 + VAR_9 > 1 || VAR_10 > 1)
    return 0;


  if (VAR_11 && ((VAR_11 + VAR_8 + VAR_9 != 2) || VAR_10))
    return 0;

  return ((VAR_10 ? VAR_2 : 0)
   | (VAR_8 ? VAR_5 :
      VAR_12 ? VAR_4 :
      VAR_9 ? VAR_3 : VAR_0)
   | (VAR_11 ? VAR_1 : 0));
}
