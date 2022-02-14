
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int expressionS ;
typedef int bfd_reloc_code_real_type ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 char* VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (char**,int *) ;
 int VAR_3 ;

__attribute__((used)) static size_t
FUNC_3 (expressionS *VAR_4, bfd_reloc_code_real_type *VAR_5,
         char *VAR_6)
{
  bfd_reloc_code_real_type VAR_7[3];
  size_t VAR_8, VAR_9;
  int VAR_10, VAR_11;
  char *VAR_12;





  VAR_8 = -1;
  VAR_11 = 0;
  do
    {
      VAR_8++;
      VAR_12 = VAR_6;
      VAR_10 = VAR_11;



      while (*VAR_6 == ' ' || *VAR_6 == '\t' || *VAR_6 == '(')
 if (*VAR_6++ == '(')
   VAR_11++;
    }
  while (*VAR_6 == '%'
  && VAR_8 < (VAR_0 ? 3 : 1)
  && FUNC_2 (&VAR_6, &VAR_7[VAR_8]));

  FUNC_1 (VAR_4, VAR_12);
  VAR_6 = VAR_1;


  while (VAR_10 > 0 && (*VAR_6 == ')' || *VAR_6 == ' ' || *VAR_6 == '\t'))
    if (*VAR_6++ == ')')
      VAR_10--;

  if (VAR_10 > 0)
    FUNC_0 ("unclosed '('");

  VAR_1 = VAR_6;

  if (VAR_8 != 0)
    {
      VAR_3 = VAR_2;
      for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++)
 VAR_5[VAR_9] = VAR_7[VAR_8 - 1 - VAR_9];
    }

  return VAR_8;
}
