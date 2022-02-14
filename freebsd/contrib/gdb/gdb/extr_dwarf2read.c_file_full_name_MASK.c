
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct line_header {char** include_dirs; struct file_entry* file_names; } ;
struct file_entry {char const* name; int dir_index; } ;


 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (char const*) ;
 char* FUNC_3 (int) ;
 char* FUNC_4 (char const*) ;

__attribute__((used)) static char *
FUNC_5 (int VAR_0, struct line_header *VAR_1, const char *VAR_2)
{
  struct file_entry *VAR_3 = &VAR_1->file_names[VAR_0 - 1];

  if (FUNC_0 (VAR_3->name))
    return FUNC_4 (VAR_3->name);
  else
    {
      const char *VAR_4;
      int VAR_5;
      char *VAR_6;

      if (VAR_3->dir_index)
        VAR_4 = VAR_1->include_dirs[VAR_3->dir_index - 1];
      else
        VAR_4 = VAR_2;

      if (VAR_4)
        {
          VAR_5 = FUNC_2 (VAR_4);
          VAR_6 = FUNC_3 (VAR_5 + 1 + FUNC_2 (VAR_3->name) + 1);
          FUNC_1 (VAR_6, VAR_4);
          VAR_6[VAR_5] = '/';
          FUNC_1 (VAR_6 + VAR_5 + 1, VAR_3->name);
          return VAR_6;
        }
      else
        return FUNC_4 (VAR_3->name);
    }
}
