
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum mdelim { ____Placeholder_mdelim } mdelim ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (char*) ;

__attribute__((used)) static int
FUNC_1(const char *VAR_4, int VAR_5)
{
 int VAR_6;
 char VAR_7[VAR_0];
 enum mdelim VAR_8;



 for (VAR_6 = 0; VAR_4[VAR_5] && ' ' != VAR_4[VAR_5] && VAR_6 < VAR_0; VAR_6++, VAR_5++)
  VAR_7[VAR_6] = VAR_4[VAR_5];

 if (VAR_0 == VAR_6)
  return 0;

 VAR_7[VAR_6] = '\0';
 if (VAR_1 != FUNC_0(VAR_7))
  return 0;

 while (' ' == VAR_4[VAR_5])
  VAR_5++;



 while (VAR_4[VAR_5]) {
  VAR_6 = 0;
  while (VAR_4[VAR_5] && ' ' != VAR_4[VAR_5] && VAR_6 < VAR_0)
   VAR_7[VAR_6++] = VAR_4[VAR_5++];

  if (VAR_0 == VAR_6)
   return 0;

  VAR_7[VAR_6] = '\0';
  VAR_8 = FUNC_0(VAR_7);
  if (VAR_2 == VAR_8 || VAR_3 == VAR_8)
   return 0;

  while (' ' == VAR_4[VAR_5])
   VAR_5++;
 }

 return '\0' == VAR_4[VAR_5];
}
