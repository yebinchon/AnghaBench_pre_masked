
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {void* section; int value; } ;
struct TYPE_11__ {TYPE_1__ def; } ;
struct bfd_link_hash_entry {scalar_t__ type; TYPE_2__ u; } ;
struct TYPE_12__ {int size; struct TYPE_12__* next; } ;
typedef TYPE_3__ asection ;
struct TYPE_14__ {int hash; scalar_t__ relocatable; } ;
struct TYPE_13__ {TYPE_3__* sections; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 void* VAR_2 ;
 char* FUNC_1 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_2 (TYPE_4__*,TYPE_3__*) ;
 void* VAR_3 ;
 struct bfd_link_hash_entry* FUNC_3 (int ,char*,int ,int ,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (char*) ;
 TYPE_5__ VAR_5 ;
 TYPE_4__* VAR_6 ;
 int FUNC_5 (char*,char*,char const*) ;
 scalar_t__ FUNC_6 (char const*) ;
 char* FUNC_7 (scalar_t__) ;

__attribute__((used)) static void
FUNC_8 (void)
{
  asection *VAR_7;

  if (VAR_5.relocatable)
    return;

  for (VAR_7 = VAR_6->sections; VAR_7 != ((void*)0); VAR_7 = VAR_7->next)
    {
      const char *VAR_8;
      char *VAR_9;
      struct bfd_link_hash_entry *VAR_10;

      VAR_8 = FUNC_1 (VAR_6, VAR_7);
      VAR_9 = FUNC_7 (10 + FUNC_6 (VAR_8));

      FUNC_5 (VAR_9, ".startof.%s", VAR_8);
      VAR_10 = FUNC_3 (VAR_5.hash, VAR_9, VAR_0, VAR_0, VAR_1);
      if (VAR_10 != ((void*)0) && VAR_10->type == VAR_4)
 {
   VAR_10->type = VAR_3;
   VAR_10->u.def.value = FUNC_2 (VAR_6, VAR_7);
   VAR_10->u.def.section = VAR_2;
 }

      FUNC_5 (VAR_9, ".sizeof.%s", VAR_8);
      VAR_10 = FUNC_3 (VAR_5.hash, VAR_9, VAR_0, VAR_0, VAR_1);
      if (VAR_10 != ((void*)0) && VAR_10->type == VAR_4)
 {
   VAR_10->type = VAR_3;
   VAR_10->u.def.value = FUNC_0 (VAR_7->size);
   VAR_10->u.def.section = VAR_2;
 }

      FUNC_4 (VAR_9);
    }
}
