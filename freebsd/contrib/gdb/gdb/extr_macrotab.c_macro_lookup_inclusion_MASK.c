
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct macro_source_file {char const* filename; struct macro_source_file* next_included; struct macro_source_file* includes; } ;


 int FUNC_0 (struct macro_source_file*) ;
 scalar_t__ FUNC_1 (char const*,char const*) ;
 int FUNC_2 (char const*) ;

struct macro_source_file *
FUNC_3 (struct macro_source_file *VAR_0, const char *VAR_1)
{

  if (FUNC_1 (VAR_1, VAR_0->filename) == 0)
    return VAR_0;



  {
    int VAR_2 = FUNC_2 (VAR_1);
    int VAR_3 = FUNC_2 (VAR_0->filename);




    if (VAR_2 < VAR_3
        && VAR_0->filename[VAR_3 - VAR_2 - 1] == '/'
        && FUNC_1 (VAR_1, VAR_0->filename + VAR_3 - VAR_2) == 0)
      return VAR_0;
  }


  {
    struct macro_source_file *VAR_4;
    struct macro_source_file *VAR_5 = ((void*)0);
    int VAR_6 = 0;

    for (VAR_4 = VAR_0->includes; VAR_4; VAR_4 = VAR_4->next_included)
      {
        struct macro_source_file *VAR_7
          = FUNC_3 (VAR_4, VAR_1);

        if (VAR_7)
          {
            int VAR_8 = FUNC_0 (VAR_7);

            if (! VAR_5 || VAR_8 < VAR_6)
              {
                VAR_5 = VAR_7;
                VAR_6 = VAR_8;
              }
          }
      }

    return VAR_5;
  }
}
