
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cpp_reader ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (size_t) ;
 int FUNC_1 (char*,char const*,size_t) ;
 int FUNC_2 (int *,int ,char*,size_t) ;
 char* FUNC_3 (char const*,char) ;
 size_t FUNC_4 (char const*) ;

void
FUNC_5 (cpp_reader *VAR_1, const char *VAR_2)
{
  char *VAR_3, *VAR_4;
  size_t VAR_5;





  VAR_5 = FUNC_4 (VAR_2);
  VAR_3 = (char *) FUNC_0 (VAR_5 + 3);
  FUNC_1 (VAR_3, VAR_2, VAR_5);

  VAR_4 = FUNC_3 (VAR_2, '=');
  if (VAR_4)
    VAR_3[VAR_4 - VAR_2] = ' ';
  else
    {
      VAR_3[VAR_5++] = ' ';
      VAR_3[VAR_5++] = '1';
    }
  VAR_3[VAR_5] = '\n';

  FUNC_2 (VAR_1, VAR_0, VAR_3, VAR_5);
}
