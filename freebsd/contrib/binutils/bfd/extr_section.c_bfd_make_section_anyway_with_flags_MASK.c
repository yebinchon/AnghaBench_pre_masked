
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {char const* name; int flags; } ;
struct TYPE_7__ {struct TYPE_7__* next; } ;
struct section_hash_entry {TYPE_3__ section; TYPE_1__ root; } ;
typedef int * sec_ptr ;
typedef int flagword ;
struct TYPE_8__ {int section_htab; scalar_t__ output_has_begun; } ;
typedef TYPE_2__ bfd ;
typedef TYPE_3__ asection ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int *,char const*) ;
 int * FUNC_1 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_2 (int ) ;
 struct section_hash_entry* FUNC_3 (int *,char const*,int ,int ) ;

sec_ptr
FUNC_4 (bfd *VAR_3, const char *VAR_4,
        flagword VAR_5)
{
  struct section_hash_entry *VAR_6;
  asection *VAR_7;

  if (VAR_3->output_has_begun)
    {
      FUNC_2 (VAR_2);
      return ((void*)0);
    }

  VAR_6 = FUNC_3 (&VAR_3->section_htab, VAR_4, VAR_1, VAR_0);
  if (VAR_6 == ((void*)0))
    return ((void*)0);

  VAR_7 = &VAR_6->section;
  if (VAR_7->name != ((void*)0))
    {




      struct section_hash_entry *VAR_8;
      VAR_8 = (struct section_hash_entry *)
 FUNC_0 (((void*)0), &VAR_3->section_htab, VAR_4);
      if (VAR_8 == ((void*)0))
 return ((void*)0);

      VAR_8->root = VAR_6->root;
      VAR_6->root.next = &VAR_8->root;
      VAR_7 = &VAR_8->section;
    }

  VAR_7->flags = VAR_5;
  VAR_7->name = VAR_4;
  return FUNC_1 (VAR_3, VAR_7);
}
