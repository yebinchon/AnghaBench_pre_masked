
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int word ;
struct file_data {size_t buffered; int missing_newline; } ;


 char* FUNC_0 (struct file_data*) ;
 char* FUNC_1 (char*,char,size_t) ;
 int FUNC_2 (char*,int ,int) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_3 (struct file_data *VAR_1)
{
  size_t VAR_2 = VAR_1->buffered;
  char *VAR_3 = FUNC_0 (VAR_1);
  char *VAR_4;

  if (VAR_2 == 0 || VAR_3[VAR_2 - 1] == '\n')
    VAR_1->missing_newline = 0;
  else
    {
      VAR_3[VAR_2++] = '\n';
      VAR_1->missing_newline = 1;
    }

  if (!VAR_3)
    return;


  FUNC_2 (VAR_3 + VAR_2, 0, sizeof (word));

  if (VAR_0 && (VAR_4 = FUNC_1 (VAR_3, '\r', VAR_2)))
    {
      char const *VAR_5 = VAR_4;
      char const *VAR_6 = VAR_3 + VAR_2;

      do
 VAR_4 += ! ((*VAR_4 = *VAR_5++) == '\r' && *VAR_5 == '\n');
      while (VAR_5 < VAR_6);

      VAR_2 -= VAR_5 - VAR_4;
    }

  VAR_1->buffered = VAR_2;
}
