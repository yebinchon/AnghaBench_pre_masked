
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cpp_reader ;


 scalar_t__ FUNC_0 (size_t) ;
 int FUNC_1 (char*,char const*,size_t) ;
 int FUNC_2 (int *,int,char const*,size_t) ;
 char* FUNC_3 (char const*,char) ;
 size_t FUNC_4 (char const*) ;

__attribute__((used)) static void
FUNC_5 (cpp_reader *VAR_0, const char *VAR_1, int VAR_2)
{
  size_t VAR_3 = FUNC_4 (VAR_1);
  const char *VAR_4 = FUNC_3 (VAR_1, '=');



  char *VAR_5 = (char *) FUNC_0 (VAR_3 + 2);

  FUNC_1 (VAR_5, VAR_1, VAR_3);
  if (VAR_4)
    {
      VAR_5[VAR_4 - VAR_1] = '(';
      VAR_5[VAR_3++] = ')';
    }
  VAR_5[VAR_3] = '\n';
  VAR_1 = VAR_5;

  FUNC_2 (VAR_0, VAR_2, VAR_1, VAR_3);
}
