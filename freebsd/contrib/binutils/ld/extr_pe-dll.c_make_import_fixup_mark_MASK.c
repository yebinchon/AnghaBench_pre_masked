
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct bfd_symbol {char* name; } ;
struct bfd_link_hash_entry {int dummy; } ;
typedef int bfd ;
struct TYPE_3__ {int address; struct bfd_symbol** sym_ptr_ptr; } ;
typedef TYPE_1__ arelent ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (struct bfd_symbol*) ;
 int FUNC_1 (int *,int *,char*,int ,int ,int ,int *,int ,int ,struct bfd_link_hash_entry**) ;
 int VAR_3 ;
 int FUNC_2 (char*) ;
 int VAR_4 ;
 int FUNC_3 (char*,char*,int ,char*) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (size_t) ;

__attribute__((used)) static char *
FUNC_6 (arelent *VAR_5)
{

  static int VAR_6;
  static char *VAR_7 = ((void*)0);
  static size_t VAR_8 = 0;

  struct bfd_symbol *VAR_9 = *VAR_5->sym_ptr_ptr;

  bfd *VAR_10 = FUNC_0 (VAR_9);
  struct bfd_link_hash_entry *VAR_11;

  if (!VAR_7)
    {
      VAR_7 = FUNC_5 (384);
      VAR_8 = 384;
    }

  if (FUNC_4 (VAR_9->name) + 25 > VAR_8)



    {
      FUNC_2 (VAR_7);


      VAR_8 = ((FUNC_4 (VAR_9->name) + 25) + 127) & ~127;
      VAR_7 = FUNC_5 (VAR_8);
    }

  FUNC_3 (VAR_7, "__fu%d_%s", VAR_6++, VAR_9->name);

  VAR_11 = ((void*)0);
  FUNC_1 (&VAR_4, VAR_10, VAR_7, VAR_0,
    VAR_3,
    VAR_5->address, ((void*)0), VAR_2, VAR_1, &VAR_11);

  return VAR_7;
}
