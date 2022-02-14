
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct print_file_list {char const* filename; char const* modname; int first; struct print_file_list* next; scalar_t__ last_line; int maxline; int mapsize; int * map; int linemap; } ;


 int FUNC_0 (struct print_file_list*) ;
 int FUNC_1 (int *,int ,int *) ;
 struct print_file_list* VAR_0 ;
 int * FUNC_2 (char const*,int *) ;
 struct print_file_list* FUNC_3 (int) ;

__attribute__((used)) static struct print_file_list *
FUNC_4 (const char *VAR_1, const char *VAR_2)
{
  struct print_file_list *VAR_3;

  VAR_3 = FUNC_3 (sizeof (struct print_file_list));

  VAR_3->map = FUNC_2 (VAR_2, &VAR_3->mapsize);
  if (VAR_3->map == ((void*)0))
    {
      FUNC_0 (VAR_3);
      return ((void*)0);
    }

  VAR_3->linemap = FUNC_1 (VAR_3->map, VAR_3->mapsize, &VAR_3->maxline);
  VAR_3->last_line = 0;
  VAR_3->filename = VAR_1;
  VAR_3->modname = VAR_2;
  VAR_3->next = VAR_0;
  VAR_3->first = 1;
  VAR_0 = VAR_3;
  return VAR_3;
}
