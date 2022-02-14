
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_11__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct score_elf_link_hash_entry {scalar_t__ possibly_dynamic_relocs; int no_fn_stub; scalar_t__ readonly_reloc; } ;
struct TYPE_23__ {TYPE_8__* weakdef; } ;
struct TYPE_16__ {int value; TYPE_10__* section; } ;
struct TYPE_17__ {TYPE_2__ def; } ;
struct TYPE_18__ {scalar_t__ type; TYPE_3__ u; } ;
struct TYPE_15__ {int offset; } ;
struct elf_link_hash_entry {scalar_t__ type; TYPE_9__ u; TYPE_4__ root; scalar_t__ needs_plt; TYPE_1__ plt; int def_regular; scalar_t__ ref_regular; scalar_t__ def_dynamic; } ;
struct bfd_link_info {int flags; int relocatable; } ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_13__ {int size; } ;
typedef TYPE_10__ asection ;
struct TYPE_19__ {int value; TYPE_10__* section; } ;
struct TYPE_20__ {TYPE_5__ def; } ;
struct TYPE_21__ {scalar_t__ type; TYPE_6__ u; } ;
struct TYPE_22__ {TYPE_7__ root; } ;
struct TYPE_14__ {int dynamic_sections_created; int * dynobj; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 TYPE_10__* FUNC_1 (int *,int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_11__* FUNC_2 (struct bfd_link_info*) ;
 int FUNC_3 (int *,scalar_t__) ;

__attribute__((used)) static bfd_boolean
FUNC_4 (struct bfd_link_info *VAR_7,
          struct elf_link_hash_entry *VAR_8)
{
  bfd *VAR_9;
  struct score_elf_link_hash_entry *VAR_10;
  asection *VAR_11;

  VAR_9 = FUNC_2 (VAR_7)->dynobj;


  FUNC_0 (VAR_9 != ((void*)0)
              && (VAR_8->needs_plt
                  || VAR_8->u.weakdef != ((void*)0)
                  || (VAR_8->def_dynamic && VAR_8->ref_regular && !VAR_8->def_regular)));




  VAR_10 = (struct score_elf_link_hash_entry *)VAR_8;
  if (!VAR_7->relocatable
      && VAR_10->possibly_dynamic_relocs != 0
      && (VAR_8->root.type == VAR_6 || !VAR_8->def_regular))
    {
      FUNC_3 (VAR_9, VAR_10->possibly_dynamic_relocs);
      if (VAR_10->readonly_reloc)


        VAR_7->flags |= VAR_0;
    }


  if (!VAR_10->no_fn_stub && VAR_8->needs_plt)
    {
      if (!FUNC_2 (VAR_7)->dynamic_sections_created)
        return VAR_4;





      if (!VAR_8->def_regular)
        {

          VAR_11 = FUNC_1 (VAR_9, VAR_1);
          FUNC_0 (VAR_11 != ((void*)0));

          VAR_8->root.u.def.section = VAR_11;
          VAR_8->root.u.def.value = VAR_11->size;


          VAR_8->plt.offset = VAR_11->size;


          VAR_11->size += VAR_2;



          return VAR_4;
        }
    }
  else if ((VAR_8->type == VAR_3) && !VAR_8->needs_plt)
    {


      VAR_8->root.u.def.value = 0;
      return VAR_4;
    }




  if (VAR_8->u.weakdef != ((void*)0))
    {
      FUNC_0 (VAR_8->u.weakdef->root.type == VAR_5
                  || VAR_8->u.weakdef->root.type == VAR_6);
      VAR_8->root.u.def.section = VAR_8->u.weakdef->root.u.def.section;
      VAR_8->root.u.def.value = VAR_8->u.weakdef->root.u.def.value;
      return VAR_4;
    }



  return VAR_4;
}
