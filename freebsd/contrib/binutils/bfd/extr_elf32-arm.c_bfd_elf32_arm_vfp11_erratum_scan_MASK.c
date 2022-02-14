
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;
typedef struct TYPE_23__ TYPE_13__ ;
typedef struct TYPE_22__ TYPE_10__ ;


struct elf32_arm_link_hash_table {scalar_t__ vfp11_fix; } ;
struct bfd_link_info {scalar_t__ relocatable; } ;
struct _arm_elf_section_data {unsigned int mapcount; int erratumcount; TYPE_4__* erratumlist; TYPE_10__* map; } ;
typedef enum bfd_arm_vfp11_pipe { ____Placeholder_bfd_arm_vfp11_pipe } bfd_arm_vfp11_pipe ;
struct TYPE_24__ {unsigned int vfp_insn; } ;
struct TYPE_25__ {TYPE_1__ b; } ;
struct TYPE_27__ {int vma; struct TYPE_27__* next; int type; TYPE_2__ u; } ;
typedef TYPE_4__ elf32_vfp11_erratum_list ;
typedef int elf32_arm_section_map ;
typedef int bfd_byte ;
typedef int bfd_boolean ;
struct TYPE_28__ {TYPE_6__* sections; } ;
typedef TYPE_5__ bfd ;
struct TYPE_29__ {int flags; unsigned int size; int name; struct TYPE_29__* next; } ;
typedef TYPE_6__ asection ;
struct TYPE_26__ {int* contents; } ;
struct TYPE_23__ {TYPE_3__ this_hdr; } ;
struct TYPE_22__ {unsigned int vma; char type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 () ;
 int FUNC_2 (unsigned int,int*,int) ;
 int FUNC_3 (unsigned int,unsigned int*,int*,int*) ;
 scalar_t__ FUNC_4 (TYPE_5__*) ;
 scalar_t__ FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (TYPE_5__*,TYPE_6__*,int**) ;
 scalar_t__ VAR_13 ;
 TYPE_4__* FUNC_7 (int) ;
 int VAR_14 ;
 struct elf32_arm_link_hash_table* FUNC_8 (struct bfd_link_info*) ;
 struct _arm_elf_section_data* FUNC_9 (TYPE_6__*) ;
 TYPE_13__* FUNC_10 (TYPE_6__*) ;
 int FUNC_11 (TYPE_6__*) ;
 scalar_t__ FUNC_12 (TYPE_6__*) ;
 int FUNC_13 (int*) ;
 int FUNC_14 (TYPE_10__*,unsigned int,int,int ) ;
 int FUNC_15 (struct bfd_link_info*,TYPE_4__*,TYPE_5__*,TYPE_6__*,unsigned int) ;
 scalar_t__ FUNC_16 (int ,int ) ;

bfd_boolean
FUNC_17 (bfd *VAR_15, struct bfd_link_info *VAR_16)
{
  asection *VAR_17;
  bfd_byte *VAR_18 = ((void*)0);
  int VAR_19 = 0;
  int VAR_20[3], VAR_21 = 0;
  struct elf32_arm_link_hash_table *VAR_22 = FUNC_8 (VAR_16);
  int VAR_23 = (VAR_22->vfp11_fix == VAR_2);
  if (VAR_16->relocatable)
    return VAR_7;


  FUNC_0 (VAR_22->vfp11_fix != VAR_0);

  if (VAR_22->vfp11_fix == VAR_1)
    return VAR_7;


  if (FUNC_5 (VAR_15) != VAR_13)
    return VAR_7;

  for (VAR_17 = VAR_15->sections; VAR_17 != ((void*)0); VAR_17 = VAR_17->next)
    {
      unsigned int VAR_24, VAR_25, VAR_26 = 0, VAR_27 = 0;
      struct _arm_elf_section_data *VAR_28;



      if (FUNC_12 (VAR_17) != VAR_6
          || (FUNC_11 (VAR_17) & VAR_5) == 0
          || (VAR_17->flags & VAR_4) != 0
          || FUNC_16 (VAR_17->name, VAR_11) == 0)
        continue;

      VAR_28 = FUNC_9 (VAR_17);

      if (VAR_28->mapcount == 0)
        continue;

      if (FUNC_10 (VAR_17)->this_hdr.contents != ((void*)0))
 VAR_18 = FUNC_10 (VAR_17)->this_hdr.contents;
      else if (! FUNC_6 (VAR_15, VAR_17, &VAR_18))
 goto error_return;

      FUNC_14 (VAR_28->map, VAR_28->mapcount, sizeof (elf32_arm_section_map),
      VAR_14);

      for (VAR_25 = 0; VAR_25 < VAR_28->mapcount; VAR_25++)
        {
          unsigned int VAR_29 = VAR_28->map[VAR_25].vma;
          unsigned int VAR_30 = (VAR_25 == VAR_28->mapcount - 1)
      ? VAR_17->size : VAR_28->map[VAR_25 + 1].vma;
          char VAR_31 = VAR_28->map[VAR_25].type;



          if (VAR_31 != 'a')
            continue;

          for (VAR_24 = VAR_29; VAR_24 < VAR_30;)
            {
              unsigned int VAR_32 = VAR_24 + 4;
              unsigned int VAR_33 = FUNC_4 (VAR_15)
                ? (VAR_18[VAR_24] << 24)
                  | (VAR_18[VAR_24 + 1] << 16)
                  | (VAR_18[VAR_24 + 2] << 8)
                  | VAR_18[VAR_24 + 3]
                : (VAR_18[VAR_24 + 3] << 24)
                  | (VAR_18[VAR_24 + 2] << 16)
                  | (VAR_18[VAR_24 + 1] << 8)
                  | VAR_18[VAR_24];
              unsigned int VAR_34 = 0;
              enum bfd_arm_vfp11_pipe VAR_35;

              switch (VAR_19)
                {
                case 0:
                  VAR_35 = FUNC_3 (VAR_33, &VAR_34, VAR_20,
                                                    &VAR_21);



                  if (VAR_35 == VAR_12 || VAR_35 == VAR_9)
                    {
                      VAR_19 = VAR_23 ? 1 : 2;
                      VAR_26 = VAR_24;
                      VAR_27 = VAR_33;
                    }
                  break;

                case 1:
                  {
                    int VAR_36[3], VAR_37;
                    VAR_35 = FUNC_3 (VAR_33, &VAR_34,
            VAR_36,
                                                      &VAR_37);
                    if (VAR_35 != VAR_8
                        && FUNC_2 (VAR_34, VAR_20,
        VAR_21))
                      VAR_19 = 3;
                    else
                      VAR_19 = 2;
                  }
                  break;

                case 2:
                  {
                    int VAR_38[3], VAR_39;
                    VAR_35 = FUNC_3 (VAR_33, &VAR_34,
            VAR_38,
                                                      &VAR_39);
                    if (VAR_35 != VAR_8
                        && FUNC_2 (VAR_34, VAR_20,
        VAR_21))
                      VAR_19 = 3;
                    else
                      {
                        VAR_19 = 0;
                        VAR_32 = VAR_26 + 4;
                      }
                  }
                  break;

                case 3:
                  FUNC_1 ();
                }

              if (VAR_19 == 3)
                {
                  elf32_vfp11_erratum_list *VAR_40
                    = FUNC_7 (sizeof (elf32_vfp11_erratum_list));
                  int VAR_41;

                  VAR_41 = ++(FUNC_9 (VAR_17)->erratumcount);

                  VAR_40->u.b.vfp_insn = VAR_27;

                  switch (VAR_31)
                    {
                    case 'a':
                      VAR_40->type = VAR_10;
                      break;

                    default:
                      FUNC_1 ();
                    }

                  FUNC_15 (VAR_16, VAR_40, VAR_15, VAR_17,
            VAR_26);

                  VAR_40->vma = -1;

                  VAR_40->next = VAR_28->erratumlist;
                  VAR_28->erratumlist = VAR_40;

                  VAR_19 = 0;
                }

              VAR_24 = VAR_32;
            }
        }

      if (VAR_18 != ((void*)0)
          && FUNC_10 (VAR_17)->this_hdr.contents != VAR_18)
        FUNC_13 (VAR_18);
      VAR_18 = ((void*)0);
    }

  return VAR_7;

error_return:
  if (VAR_18 != ((void*)0)
      && FUNC_10 (VAR_17)->this_hdr.contents != VAR_18)
    FUNC_13 (VAR_18);

  return VAR_3;
}
