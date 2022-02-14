
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spec_path_info {scalar_t__ append_len; char* option; scalar_t__ separate_options; int append; scalar_t__ omit_relative; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char) ;
 int FUNC_2 (char*,int,int *) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char*,int ,scalar_t__) ;
 size_t FUNC_5 (char*) ;

__attribute__((used)) static void *
FUNC_6 (char *VAR_0, void *VAR_1)
{
  struct spec_path_info *VAR_2 = VAR_1;
  size_t VAR_3 = 0;
  char VAR_4 = 0;

  if (VAR_2->omit_relative && !FUNC_0 (VAR_0))
    return ((void*)0);

  if (VAR_2->append_len != 0)
    {
      VAR_3 = FUNC_5 (VAR_0);
      FUNC_4 (VAR_0 + VAR_3, VAR_2->append, VAR_2->append_len + 1);
    }

  if (!FUNC_3 (VAR_0, 1))
    return ((void*)0);

  FUNC_2 (VAR_2->option, 1, ((void*)0));
  if (VAR_2->separate_options)
    FUNC_2 (" ", 0, ((void*)0));

  if (VAR_2->append_len == 0)
    {
      VAR_3 = FUNC_5 (VAR_0);
      VAR_4 = VAR_0[VAR_3 - 1];
      if (FUNC_1 (VAR_0[VAR_3 - 1]))
 VAR_0[VAR_3 - 1] = '\0';
    }

  FUNC_2 (VAR_0, 1, ((void*)0));
  FUNC_2 (" ", 0, ((void*)0));


  if (VAR_2->append_len == 0)
    VAR_0[VAR_3 - 1] = VAR_4;

  return ((void*)0);
}
