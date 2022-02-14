
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpp_buffer {int dummy; } ;
typedef int cpp_reader ;
typedef int cpp_dir ;


 struct cpp_buffer* FUNC_0 (int *) ;
 int * FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (struct cpp_buffer*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 struct cpp_buffer* FUNC_4 (struct cpp_buffer*) ;
 char* FUNC_5 (char const*,scalar_t__) ;

__attribute__((used)) static const char*
FUNC_6 (cpp_reader *VAR_0, const char *VAR_1, cpp_dir **VAR_2)
{
  const char *VAR_3 = VAR_1;
  struct cpp_buffer *VAR_4;
  const char *VAR_5;

  for (VAR_4 = FUNC_0 (VAR_0);
       VAR_4 && FUNC_2 (VAR_4) && FUNC_3 (FUNC_2 (VAR_4));
       VAR_4 = FUNC_4 (VAR_4))
    {
      VAR_5 = FUNC_5 (VAR_3, FUNC_3 (FUNC_2 (VAR_4)));
      if (VAR_5)
 {




   *VAR_2 = FUNC_1 (FUNC_2 (VAR_4));
   return VAR_5;
 }
    }

  return 0;
}
