
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__* section; scalar_t__ value; } ;
struct TYPE_9__ {TYPE_1__ def; } ;
struct bfd_link_hash_entry {TYPE_2__ u; int type; } ;
typedef int bfd ;
struct TYPE_10__ {int alignment_power; scalar_t__ reloc_count; scalar_t__ orelocation; struct TYPE_10__* output_section; int output_offset; scalar_t__ size; int lma; int user_set_vma; int vma; int flags; } ;
typedef TYPE_3__ asection ;
struct TYPE_11__ {int hash; } ;


 scalar_t__ FUNC_0 (char const*,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (char) ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int *) ;
 char* FUNC_4 (int *,char*,int*) ;
 int VAR_2 ;
 struct bfd_link_hash_entry* FUNC_5 (int ,char*,int ,int ,int ) ;
 TYPE_3__* FUNC_6 (int *,char*) ;
 int FUNC_7 (int ,...) ;
 int FUNC_8 (char*) ;
 TYPE_4__ VAR_3 ;
 int FUNC_9 (char*,char const*,unsigned int) ;
 scalar_t__ FUNC_10 (char const*,char*) ;
 int FUNC_11 (char const*) ;
 char* FUNC_12 (unsigned int) ;

__attribute__((used)) static asection *
FUNC_13 (bfd *VAR_4, asection *VAR_5, const char *VAR_6, int *VAR_7)
{
  char *VAR_8;
  char *VAR_9;
  unsigned int VAR_10;
  asection *VAR_11;
  struct bfd_link_hash_entry *VAR_12;



  VAR_10 = FUNC_11 (VAR_6);
  VAR_8 = FUNC_12 (VAR_10 + 1);
  FUNC_9 (VAR_8, VAR_6, VAR_10 + 1);

  while (VAR_10 && FUNC_1 (VAR_8[VAR_10-1]))
    VAR_10--;
  if (VAR_10 > 1 && VAR_8[VAR_10-1] == '.')

    VAR_8[VAR_10-1] = 0;



  if (FUNC_3 (VAR_4) && FUNC_11 (VAR_8) > 5)
    {


      if (FUNC_0 (VAR_6, ".stab")
   || FUNC_10 (VAR_6, "$GDB_SYMBOLS$") == 0)
 {
   FUNC_7 (FUNC_2 ("%F%P: cannot create split section name for %s\n"), VAR_6);

   return ((void*)0);
 }
      VAR_8[5] = 0;
    }

  if ((VAR_9 = FUNC_4 (VAR_4, VAR_8, VAR_7)) == ((void*)0)
      || (VAR_11 = FUNC_6 (VAR_4, VAR_9)) == ((void*)0)
      || (VAR_12 = FUNC_5 (VAR_3.hash,
        VAR_9, VAR_1, VAR_1, VAR_0)) == ((void*)0))
    {
      FUNC_7 (FUNC_2("%F%P: clone section failed: %E\n"));

      return ((void*)0);
    }
  FUNC_8 (VAR_8);


  VAR_12->type = VAR_2;
  VAR_12->u.def.value = 0;
  VAR_12->u.def.section = VAR_11;

  VAR_11->flags = VAR_5->flags;
  VAR_11->vma = VAR_5->vma;
  VAR_11->user_set_vma = VAR_5->user_set_vma;
  VAR_11->lma = VAR_5->lma;
  VAR_11->size = 0;
  VAR_11->output_offset = VAR_5->output_offset;
  VAR_11->output_section = VAR_11;
  VAR_11->orelocation = 0;
  VAR_11->reloc_count = 0;
  VAR_11->alignment_power = VAR_5->alignment_power;
  return VAR_11;
}
