
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct macro_source_file {int filename; } ;
struct macro_key {int end_line; struct macro_source_file* end_file; } ;
typedef TYPE_1__* splay_tree_node ;
struct TYPE_3__ {scalar_t__ key; } ;


 int FUNC_0 (int *,char*,char const*,int ,int,...) ;
 TYPE_1__* FUNC_1 (char const*,struct macro_source_file*,int) ;
 int VAR_0 ;

void
FUNC_2 (struct macro_source_file *VAR_1, int VAR_2,
             const char *VAR_3)
{
  splay_tree_node VAR_4 = FUNC_1 (VAR_3, VAR_1, VAR_2);

  if (VAR_4)
    {





      struct macro_key *VAR_5 = (struct macro_key *) VAR_4->key;

      if (VAR_5->end_file)
        {
   FUNC_0 (&VAR_0,
       "macro '%s' is #undefined twice, at %s:%d and %s:%d", VAR_3,
       VAR_1->filename, VAR_2, VAR_5->end_file->filename,
       VAR_5->end_line);
        }



      VAR_5->end_file = VAR_1;
      VAR_5->end_line = VAR_2;
    }
  else
    {
    }
}
