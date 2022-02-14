
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct elf_backend_data {int (* elf_backend_fake_sections ) (int *,TYPE_4__*,TYPE_3__*) ;TYPE_2__* s; int may_use_rel_p; int may_use_rela_p; } ;
struct bfd_link_order {scalar_t__ offset; scalar_t__ size; } ;
typedef scalar_t__ bfd_boolean ;
typedef int bfd ;
struct TYPE_13__ {struct bfd_link_order* link_order; } ;
struct TYPE_15__ {int flags; scalar_t__ size; int alignment_power; int entsize; int use_rela_p; TYPE_1__ map_tail; scalar_t__ vma; scalar_t__ user_set_vma; int name; } ;
typedef TYPE_3__ asection ;
struct TYPE_16__ {unsigned int sh_name; scalar_t__ sh_size; int sh_addralign; int sh_type; int sh_entsize; int sh_flags; int sh_info; int * contents; TYPE_3__* bfd_section; scalar_t__ sh_link; scalar_t__ sh_offset; scalar_t__ sh_addr; } ;
struct TYPE_18__ {int rel_hdr; TYPE_4__ this_hdr; } ;
struct TYPE_17__ {int cverrefs; int cverdefs; } ;
struct TYPE_14__ {int sizeof_hash_entry; int sizeof_sym; int sizeof_dyn; int sizeof_rela; int sizeof_rel; int arch_size; } ;
typedef TYPE_4__ Elf_Internal_Shdr ;
typedef int Elf_External_Versym ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;





 scalar_t__ VAR_21 ;
 int FUNC_1 (int *,int *,TYPE_3__*,int ) ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;
 int * FUNC_3 (TYPE_3__*) ;
 TYPE_8__* FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int *) ;
 TYPE_7__* FUNC_6 (int *) ;
 struct elf_backend_data* FUNC_7 (int *) ;
 int FUNC_8 (int *,TYPE_4__*,TYPE_3__*) ;

__attribute__((used)) static void
FUNC_9 (bfd *VAR_22, asection *VAR_23, void *VAR_24)
{
  const struct elf_backend_data *VAR_25 = FUNC_7 (VAR_22);
  bfd_boolean *VAR_26 = VAR_24;
  Elf_Internal_Shdr *VAR_27;
  unsigned int VAR_28;

  if (*VAR_26)
    {


      return;
    }

  VAR_27 = &FUNC_4 (VAR_23)->this_hdr;

  VAR_27->sh_name = (unsigned int) FUNC_2 (FUNC_5 (VAR_22),
         VAR_23->name, VAR_0);
  if (VAR_27->sh_name == (unsigned int) -1)
    {
      *VAR_26 = VAR_21;
      return;
    }



  if ((VAR_23->flags & VAR_2) != 0
      || VAR_23->user_set_vma)
    VAR_27->sh_addr = VAR_23->vma;
  else
    VAR_27->sh_addr = 0;

  VAR_27->sh_offset = 0;
  VAR_27->sh_size = VAR_23->size;
  VAR_27->sh_link = 0;
  VAR_27->sh_addralign = 1 << VAR_23->alignment_power;



  VAR_27->bfd_section = VAR_23;
  VAR_27->contents = ((void*)0);



  if (VAR_27->sh_type == VAR_20)
    {
      if ((VAR_23->flags & VAR_4) != 0)
 VAR_27->sh_type = 137;
      else if ((VAR_23->flags & VAR_2) != 0
        && (((VAR_23->flags & (VAR_6 | VAR_5)) == 0)
     || (VAR_23->flags & VAR_8) != 0))
 VAR_27->sh_type = 134;
      else
 VAR_27->sh_type = 131;
    }

  switch (VAR_27->sh_type)
    {
    default:
      break;

    case 128:
    case 135:
    case 142:
    case 132:
    case 133:
    case 134:
    case 131:
      break;

    case 136:
      VAR_27->sh_entsize = VAR_25->s->sizeof_hash_entry;
      break;

    case 143:
      VAR_27->sh_entsize = VAR_25->s->sizeof_sym;
      break;

    case 144:
      VAR_27->sh_entsize = VAR_25->s->sizeof_dyn;
      break;

    case 129:
      if (FUNC_7 (VAR_22)->may_use_rela_p)
 VAR_27->sh_entsize = VAR_25->s->sizeof_rela;
      break;

     case 130:
      if (FUNC_7 (VAR_22)->may_use_rel_p)
 VAR_27->sh_entsize = VAR_25->s->sizeof_rel;
      break;

     case 138:
      VAR_27->sh_entsize = sizeof (Elf_External_Versym);
      break;

     case 140:
      VAR_27->sh_entsize = 0;



      if (VAR_27->sh_info == 0)
 VAR_27->sh_info = FUNC_6 (VAR_22)->cverdefs;
      else
 FUNC_0 (FUNC_6 (VAR_22)->cverdefs == 0
      || VAR_27->sh_info == FUNC_6 (VAR_22)->cverdefs);
      break;

    case 139:
      VAR_27->sh_entsize = 0;



      if (VAR_27->sh_info == 0)
 VAR_27->sh_info = FUNC_6 (VAR_22)->cverrefs;
      else
 FUNC_0 (FUNC_6 (VAR_22)->cverrefs == 0
      || VAR_27->sh_info == FUNC_6 (VAR_22)->cverrefs);
      break;

    case 137:
      VAR_27->sh_entsize = VAR_1;
      break;

    case 141:
      VAR_27->sh_entsize = VAR_25->s->arch_size == 64 ? 0 : 4;
      break;
    }

  if ((VAR_23->flags & VAR_2) != 0)
    VAR_27->sh_flags |= VAR_13;
  if ((VAR_23->flags & VAR_9) == 0)
    VAR_27->sh_flags |= VAR_19;
  if ((VAR_23->flags & VAR_3) != 0)
    VAR_27->sh_flags |= VAR_14;
  if ((VAR_23->flags & VAR_7) != 0)
    {
      VAR_27->sh_flags |= VAR_16;
      VAR_27->sh_entsize = VAR_23->entsize;
      if ((VAR_23->flags & VAR_11) != 0)
 VAR_27->sh_flags |= VAR_17;
    }
  if ((VAR_23->flags & VAR_4) == 0 && FUNC_3 (VAR_23) != ((void*)0))
    VAR_27->sh_flags |= VAR_15;
  if ((VAR_23->flags & VAR_12) != 0)
    {
      VAR_27->sh_flags |= VAR_18;
      if (VAR_23->size == 0
   && (VAR_23->flags & VAR_5) == 0)
 {
   struct bfd_link_order *VAR_29 = VAR_23->map_tail.link_order;

   VAR_27->sh_size = 0;
   if (VAR_29 != ((void*)0))
     {
       VAR_27->sh_size = VAR_29->offset + VAR_29->size;
       if (VAR_27->sh_size != 0)
  VAR_27->sh_type = 134;
     }
 }
    }


  VAR_28 = VAR_27->sh_type;
  if (VAR_25->elf_backend_fake_sections
      && !(*VAR_25->elf_backend_fake_sections) (VAR_22, VAR_27, VAR_23))
    *VAR_26 = VAR_21;

  if (VAR_28 == 134 && VAR_23->size != 0)
    {


      VAR_27->sh_type = VAR_28;
    }





  if ((VAR_23->flags & VAR_10) != 0
      && !FUNC_1 (VAR_22,
        &FUNC_4 (VAR_23)->rel_hdr,
        VAR_23,
        VAR_23->use_rela_p))
    *VAR_26 = VAR_21;
}
