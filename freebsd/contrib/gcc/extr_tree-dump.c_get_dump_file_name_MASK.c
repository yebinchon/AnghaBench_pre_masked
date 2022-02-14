
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dump_file_info {scalar_t__ state; scalar_t__ num; int flags; int suffix; } ;
typedef enum tree_dump_index { ____Placeholder_tree_dump_index } tree_dump_index ;
typedef int dump_id ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int ,char*,int ,int *) ;
 int VAR_3 ;
 struct dump_file_info* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (char*,int,char*,scalar_t__,char) ;

char *
FUNC_3 (enum tree_dump_index VAR_4)
{
  char VAR_5[10];
  struct dump_file_info *VAR_6;

  if (VAR_4 == VAR_2)
    return ((void*)0);

  VAR_6 = FUNC_1 (VAR_4);
  if (VAR_6->state == 0)
    return ((void*)0);

  if (VAR_6->num < 0)
    VAR_5[0] = '\0';
  else
    {
      char VAR_7;
      if (VAR_6->flags & VAR_1)
 VAR_7 = 't';
      else if (VAR_6->flags & VAR_0)
 VAR_7 = 'i';
      else
 VAR_7 = 'r';

      if (FUNC_2 (VAR_5, sizeof (VAR_5), ".%03d%c", VAR_6->num, VAR_7) < 0)
 VAR_5[0] = '\0';
    }

  return FUNC_0 (VAR_3, VAR_5, VAR_6->suffix, ((void*)0));
}
