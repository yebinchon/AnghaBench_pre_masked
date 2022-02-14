
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct varinfo {scalar_t__ stack; char* file; scalar_t__ addr; unsigned int line; int * sec; int * name; struct varinfo* prev_var; } ;
struct comp_unit {struct varinfo* variable_table; } ;
typedef scalar_t__ bfd_vma ;
typedef int bfd_boolean ;
typedef int asymbol ;
typedef int asection ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (char const*,int *) ;

__attribute__((used)) static bfd_boolean
FUNC_3 (struct comp_unit *VAR_2,
     asymbol *VAR_3,
     bfd_vma VAR_4,
     const char **VAR_5,
     unsigned int *VAR_6)
{
  const char *VAR_7 = FUNC_0 (VAR_3);
  asection *VAR_8 = FUNC_1 (VAR_3);
  struct varinfo* VAR_9;

  for (VAR_9 = VAR_2->variable_table; VAR_9; VAR_9 = VAR_9->prev_var)
    if (VAR_9->stack == 0
 && VAR_9->file != ((void*)0)
 && VAR_9->name != ((void*)0)
 && VAR_9->addr == VAR_4
 && (!VAR_9->sec || VAR_9->sec == VAR_8)
 && FUNC_2 (VAR_7, VAR_9->name) == 0)
      break;

  if (VAR_9)
    {
      VAR_9->sec = VAR_8;
      *VAR_5 = VAR_9->file;
      *VAR_6 = VAR_9->line;
      return VAR_1;
    }
  else
    return VAR_0;
}
