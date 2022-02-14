
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {char* name; int constraint; } ;
struct TYPE_6__ {TYPE_3__ output_section_statement; } ;
struct TYPE_5__ {unsigned long hash; struct TYPE_5__* next; } ;
struct out_section_hash_entry {TYPE_2__ s; TYPE_1__ root; } ;
typedef TYPE_3__ lang_output_section_statement_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int *,char const* const,int ,int ) ;
 int FUNC_2 (int ,char const* const) ;
 scalar_t__ FUNC_3 (int *,int *,char const* const) ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (char const* const,char*) ;

__attribute__((used)) static lang_output_section_statement_type *
FUNC_5 (const char *const VAR_4, int VAR_5)
{
  struct out_section_hash_entry *VAR_6;
  struct out_section_hash_entry *VAR_7;
  unsigned long VAR_8;

  VAR_6 = ((struct out_section_hash_entry *)
    FUNC_1 (&VAR_3, VAR_4,
       VAR_2, VAR_0));
  if (VAR_6 == ((void*)0))
    {
      FUNC_2 (FUNC_0("%P%F: failed creating section `%s': %E\n"), VAR_4);
      return ((void*)0);
    }

  if (VAR_6->s.output_section_statement.name != ((void*)0))
    {


      VAR_8 = VAR_6->root.hash;
      do
 {
   if (VAR_6->s.output_section_statement.constraint != -1
       && (VAR_5 == 0
    || (VAR_5 == VAR_6->s.output_section_statement.constraint
        && VAR_5 != VAR_1)))
     return &VAR_6->s.output_section_statement;
   VAR_7 = VAR_6;
   VAR_6 = (struct out_section_hash_entry *) VAR_6->root.next;
 }
      while (VAR_6 != ((void*)0)
      && VAR_6->root.hash == VAR_8
      && FUNC_4 (VAR_4, VAR_6->s.output_section_statement.name) == 0);

      VAR_6
 = ((struct out_section_hash_entry *)
    FUNC_3 (((void*)0),
          &VAR_3,
          VAR_4));
      if (VAR_6 == ((void*)0))
 {
   FUNC_2 (FUNC_0("%P%F: failed creating section `%s': %E\n"), VAR_4);
   return ((void*)0);
 }
      VAR_6->root = VAR_7->root;
      VAR_7->root.next = &VAR_6->root;
    }

  VAR_6->s.output_section_statement.name = VAR_4;
  VAR_6->s.output_section_statement.constraint = VAR_5;
  return &VAR_6->s.output_section_statement;
}
