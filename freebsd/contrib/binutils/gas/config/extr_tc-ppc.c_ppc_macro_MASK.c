
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct powerpc_macro {unsigned int operands; char* format; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char*,char) ;
 int FUNC_6 (char*,char*) ;
 scalar_t__ FUNC_7 (char*) ;
 unsigned int FUNC_8 (char const*,char**,int) ;

__attribute__((used)) static void
FUNC_9 (char *VAR_0, const struct powerpc_macro *VAR_1)
{
  char *VAR_2[10];
  unsigned int VAR_3;
  char *VAR_4;
  unsigned int VAR_5;
  const char *VAR_6;
  unsigned int VAR_7;
  char *VAR_8;
  char *VAR_9;


  VAR_3 = 0;
  VAR_4 = VAR_0;
  while (1)
    {
      if (VAR_3 >= sizeof VAR_2 / sizeof VAR_2[0])
 break;
      VAR_2[VAR_3++] = VAR_4;
      VAR_4 = FUNC_5 (VAR_4, ',');
      if (VAR_4 == (char *) ((void*)0))
 break;
      *VAR_4++ = '\0';
    }

  if (VAR_3 != VAR_1->operands)
    {
      FUNC_2 (FUNC_0("wrong number of operands"));
      return;
    }



  VAR_5 = 0;
  VAR_6 = VAR_1->format;
  while (*VAR_6 != '\0')
    {
      if (*VAR_6 != '%')
 {
   ++VAR_5;
   ++VAR_6;
 }
      else
 {
   VAR_7 = FUNC_8 (VAR_6 + 1, &VAR_8, 10);
   FUNC_3 (VAR_8 != VAR_6 && VAR_7 < VAR_3);
   VAR_5 += FUNC_7 (VAR_2[VAR_7]);
   VAR_6 = VAR_8;
 }
    }


  VAR_9 = VAR_4 = (char *) FUNC_1 (VAR_5 + 1);
  VAR_6 = VAR_1->format;
  while (*VAR_6 != '\0')
    {
      if (*VAR_6 != '%')
 *VAR_4++ = *VAR_6++;
      else
 {
   VAR_7 = FUNC_8 (VAR_6 + 1, &VAR_8, 10);
   FUNC_6 (VAR_4, VAR_2[VAR_7]);
   VAR_4 += FUNC_7 (VAR_4);
   VAR_6 = VAR_8;
 }
    }
  *VAR_4 = '\0';


  FUNC_4 (VAR_9);
}
