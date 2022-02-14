
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dump_file_info {int state; int flags; } ;
typedef enum tree_dump_index { ____Placeholder_tree_dump_index } tree_dump_index ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (char*,char*,char*) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;
 struct dump_file_info* FUNC_4 (int) ;
 char* FUNC_5 (int) ;
 char* FUNC_6 (int ) ;

FILE *
FUNC_7 (enum tree_dump_index VAR_2, int *VAR_3)
{
  char *VAR_4;
  struct dump_file_info *VAR_5;
  FILE *VAR_6;

  if (VAR_2 == VAR_0 || !FUNC_0 (VAR_2))
    return ((void*)0);

  VAR_4 = FUNC_5 (VAR_2);
  VAR_5 = FUNC_4 (VAR_2);
  VAR_6 = FUNC_2 (VAR_4, VAR_5->state < 0 ? "w" : "a");
  if (!VAR_6)
    FUNC_1 ("could not open dump file %qs: %s", VAR_4, FUNC_6 (VAR_1));
  else
    VAR_5->state = 1;
  FUNC_3 (VAR_4);

  if (VAR_3)
    *VAR_3 = VAR_5->flags;

  return VAR_6;
}
