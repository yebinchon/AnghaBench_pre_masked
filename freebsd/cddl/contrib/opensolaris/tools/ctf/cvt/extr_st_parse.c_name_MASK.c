
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char) ;
 scalar_t__ FUNC_1 (char) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (char*,char) ;
 char* FUNC_4 (int) ;

__attribute__((used)) static char *
FUNC_5(char *VAR_0, char **VAR_1)
{
 char *VAR_2, *VAR_3, VAR_4;
 int VAR_5;

 VAR_3 = VAR_0;
 VAR_4 = *VAR_0++;
 if (VAR_4 == ':')
  *VAR_1 = ((void*)0);
 else if (FUNC_1(VAR_4) || FUNC_3("_.$#", VAR_4)) {
  for (VAR_4 = *VAR_0++; FUNC_0(VAR_4) || FUNC_3(" _.$#", VAR_4); VAR_4 = *VAR_0++)
   ;
  if (VAR_4 != ':')
   FUNC_2();
  VAR_5 = VAR_0 - VAR_3;
  VAR_2 = FUNC_4(VAR_5);
  while (VAR_3 < VAR_0 - 1)
   *VAR_2++ = *VAR_3++;
  *VAR_2 = '\0';
  *VAR_1 = VAR_2 - (VAR_5 - 1);
 } else
  FUNC_2();

 return (VAR_0);
}
