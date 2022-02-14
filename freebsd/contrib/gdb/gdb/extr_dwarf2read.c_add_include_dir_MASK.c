
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct line_header {int include_dirs_size; char** include_dirs; int num_include_dirs; } ;


 char** FUNC_0 (int) ;
 char** FUNC_1 (char**,int) ;

__attribute__((used)) static void
FUNC_2 (struct line_header *VAR_0, char *VAR_1)
{

  if (VAR_0->include_dirs_size == 0)
    {
      VAR_0->include_dirs_size = 1;
      VAR_0->include_dirs = FUNC_0 (VAR_0->include_dirs_size
                                  * sizeof (*VAR_0->include_dirs));
    }
  else if (VAR_0->num_include_dirs >= VAR_0->include_dirs_size)
    {
      VAR_0->include_dirs_size *= 2;
      VAR_0->include_dirs = FUNC_1 (VAR_0->include_dirs,
                                   (VAR_0->include_dirs_size
                                    * sizeof (*VAR_0->include_dirs)));
    }

  VAR_0->include_dirs[VAR_0->num_include_dirs++] = VAR_1;
}
