
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct macro_buffer {int is_identifier; } ;


 scalar_t__ FUNC_0 (char) ;
 scalar_t__ FUNC_1 (char) ;
 int FUNC_2 (struct macro_buffer*,char*,char*) ;

__attribute__((used)) static int
FUNC_3 (struct macro_buffer *VAR_0, char *VAR_1, char *VAR_2)
{
  if (VAR_1 < VAR_2
      && FUNC_1 (*VAR_1))
    {
      char *VAR_3 = VAR_1;

      while (VAR_1 < VAR_2
             && (FUNC_1 (*VAR_1)
                 || FUNC_0 (*VAR_1)))
        VAR_1++;

      FUNC_2 (VAR_0, VAR_3, VAR_1);
      VAR_0->is_identifier = 1;
      return 1;
    }
  else
    return 0;
}
