
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_9__ ;
typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_12__ ;
typedef struct TYPE_20__ TYPE_11__ ;
typedef struct TYPE_19__ TYPE_10__ ;


struct elf32_arm_link_hash_table {scalar_t__ byteswap_code; } ;
struct bfd_link_info {int dummy; } ;
struct TYPE_28__ {TYPE_6__* branch; } ;
struct TYPE_24__ {int vfp_insn; TYPE_2__* veneer; } ;
struct TYPE_29__ {TYPE_7__ v; TYPE_3__ b; } ;
struct TYPE_30__ {int vma; int type; TYPE_8__ u; struct TYPE_30__* next; } ;
typedef TYPE_9__ elf32_vfp11_erratum_list ;
struct TYPE_19__ {int vma; int type; } ;
typedef TYPE_10__ elf32_arm_section_map ;
typedef int bfd_vma ;
typedef unsigned int bfd_byte ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_20__ {int output_offset; int size; TYPE_1__* output_section; } ;
typedef TYPE_11__ asection ;
struct TYPE_21__ {int mapcount; int erratumcount; TYPE_10__* map; scalar_t__ mapsize; TYPE_9__* erratumlist; } ;
typedef TYPE_12__ _arm_elf_section_data ;
struct TYPE_25__ {unsigned int vfp_insn; } ;
struct TYPE_26__ {TYPE_4__ b; } ;
struct TYPE_27__ {int vma; TYPE_5__ u; } ;
struct TYPE_23__ {int vma; } ;
struct TYPE_22__ {int vma; } ;


 int VAR_0 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int *) ;
 int VAR_1 ;
 struct elf32_arm_link_hash_table* FUNC_4 (struct bfd_link_info*) ;
 int FUNC_5 (TYPE_10__*) ;
 TYPE_12__* FUNC_6 (TYPE_11__*) ;
 int FUNC_7 (TYPE_10__*,int,int,int ) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (TYPE_11__*) ;

__attribute__((used)) static bfd_boolean
FUNC_11 (bfd *VAR_2,
    struct bfd_link_info *VAR_3, asection *VAR_4,
    bfd_byte *VAR_5)
{
  int VAR_6, VAR_7;
  _arm_elf_section_data *VAR_8;
  struct elf32_arm_link_hash_table *VAR_9 = FUNC_4 (VAR_3);
  elf32_arm_section_map *VAR_10;
  elf32_vfp11_erratum_list *VAR_11;
  bfd_vma VAR_12;
  bfd_vma VAR_13;
  bfd_vma VAR_14 = VAR_4->output_section->vma + VAR_4->output_offset;
  bfd_byte VAR_15;
  int VAR_16;



  VAR_8 = FUNC_6 (VAR_4);
  if (VAR_8 == ((void*)0))
    return VAR_0;

  VAR_6 = VAR_8->mapcount;
  VAR_10 = VAR_8->map;
  VAR_7 = VAR_8->erratumcount;

  if (VAR_7 != 0)
    {
      unsigned int VAR_17 = FUNC_3 (VAR_2) ? 3 : 0;

      for (VAR_11 = VAR_8->erratumlist; VAR_11 != 0;
           VAR_11 = VAR_11->next)
        {
          bfd_vma VAR_18 = VAR_11->vma - VAR_14;

          switch (VAR_11->type)
            {
            case 128:
              {
                bfd_vma VAR_19;


                unsigned int VAR_20 = (VAR_11->u.b.vfp_insn & 0xf0000000)
                                  | 0x0a000000;


  VAR_18 -= 4;


  VAR_19 = VAR_11->u.b.veneer->vma
                                   - VAR_11->vma - 4;

  if ((signed) VAR_19 < -(1 << 25)
      || (signed) VAR_19 >= (1 << 25))
    FUNC_1) (FUNC_0("%B: error: VFP11 veneer out of "
        "range"), VAR_2);

                VAR_20 |= (VAR_19 >> 2) & 0xffffff;
                VAR_5[VAR_17 ^ VAR_18] = VAR_20 & 0xff;
                VAR_5[VAR_17 ^ (VAR_18 + 1)] = (VAR_20 >> 8) & 0xff;
                VAR_5[VAR_17 ^ (VAR_18 + 2)] = (VAR_20 >> 16) & 0xff;
                VAR_5[VAR_17 ^ (VAR_18 + 3)] = (VAR_20 >> 24) & 0xff;
              }
              break;

     case 129:
              {
                bfd_vma VAR_21;
                unsigned int VAR_22;


                VAR_21 = VAR_11->u.v.branch->vma
                                     - VAR_11->vma - 12;

  if ((signed) VAR_21 < -(1 << 25)
      || (signed) VAR_21 >= (1 << 25))
    FUNC_1) (FUNC_0("%B: error: VFP11 veneer out of "
        "range"), VAR_2);


                VAR_22 = VAR_11->u.v.branch->u.b.vfp_insn;
                VAR_5[VAR_17 ^ VAR_18] = VAR_22 & 0xff;
                VAR_5[VAR_17 ^ (VAR_18 + 1)] = (VAR_22 >> 8) & 0xff;
                VAR_5[VAR_17 ^ (VAR_18 + 2)] = (VAR_22 >> 16) & 0xff;
                VAR_5[VAR_17 ^ (VAR_18 + 3)] = (VAR_22 >> 24) & 0xff;


                VAR_22 = 0xea000000 | ((VAR_21 >> 2) & 0xffffff);
                VAR_5[VAR_17 ^ (VAR_18 + 4)] = VAR_22 & 0xff;
                VAR_5[VAR_17 ^ (VAR_18 + 5)] = (VAR_22 >> 8) & 0xff;
                VAR_5[VAR_17 ^ (VAR_18 + 6)] = (VAR_22 >> 16) & 0xff;
                VAR_5[VAR_17 ^ (VAR_18 + 7)] = (VAR_22 >> 24) & 0xff;
              }
              break;

            default:
              FUNC_2 ();
            }
        }
    }

  if (VAR_6 == 0)
    return VAR_0;

  if (VAR_9->byteswap_code)
    {
      FUNC_7 (VAR_10, VAR_6, sizeof (* VAR_10), VAR_1);

      VAR_12 = VAR_10[0].vma;
      for (VAR_16 = 0; VAR_16 < VAR_6; VAR_16++)
        {
          if (VAR_16 == VAR_6 - 1)
     VAR_13 = VAR_4->size;
          else
            VAR_13 = VAR_10[VAR_16 + 1].vma;

          switch (VAR_10[VAR_16].type)
     {
     case 'a':

       while (VAR_12 + 3 < VAR_13)
         {
           VAR_15 = VAR_5[VAR_12];
           VAR_5[VAR_12] = VAR_5[VAR_12 + 3];
           VAR_5[VAR_12 + 3] = VAR_15;
           VAR_15 = VAR_5[VAR_12 + 1];
           VAR_5[VAR_12 + 1] = VAR_5[VAR_12 + 2];
           VAR_5[VAR_12 + 2] = VAR_15;
           VAR_12 += 4;
         }
       break;

     case 't':

       while (VAR_12 + 1 < VAR_13)
         {
           VAR_15 = VAR_5[VAR_12];
           VAR_5[VAR_12] = VAR_5[VAR_12 + 1];
           VAR_5[VAR_12 + 1] = VAR_15;
           VAR_12 += 2;
         }
       break;

     case 'd':

       break;
     }
          VAR_12 = VAR_13;
        }
    }

  FUNC_5 (VAR_10);
  VAR_8->mapcount = 0;
  VAR_8->mapsize = 0;
  VAR_8->map = ((void*)0);
  FUNC_10 (VAR_4);

  return VAR_0;
}
