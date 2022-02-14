
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_18__ {int addend; unsigned int address; int * howto; int * sym_ptr_ptr; } ;
struct TYPE_19__ {TYPE_2__ relent; int symbol; struct TYPE_19__* next; } ;
typedef TYPE_3__ ieee_reloc_type ;
struct TYPE_20__ {unsigned int pc; TYPE_3__** reloc_tail_ptr; } ;
typedef TYPE_4__ ieee_per_section_type ;
struct TYPE_23__ {int abfd; } ;
struct TYPE_21__ {TYPE_7__ h; } ;
typedef TYPE_5__ ieee_data_type ;
typedef unsigned int bfd_vma ;
typedef int bfd_boolean ;
struct TYPE_22__ {int * symbol_ptr_ptr; int reloc_count; TYPE_1__* owner; int flags; } ;
typedef TYPE_6__ asection ;
struct TYPE_17__ {int flags; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_3__* FUNC_1 (int ,int) ;
 int FUNC_2 (int ,unsigned int,unsigned char*) ;
 int FUNC_3 (int ,unsigned int,unsigned char*) ;
 int FUNC_4 (int ,int,unsigned char*) ;
 scalar_t__ VAR_7 ;
 unsigned int FUNC_5 (TYPE_7__*) ;
 int FUNC_6 (TYPE_7__*) ;
 int FUNC_7 (TYPE_5__*,int*,int *,int *,unsigned int*,TYPE_6__**) ;
 int FUNC_8 (TYPE_7__*,unsigned int*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_9 (TYPE_7__*) ;

__attribute__((used)) static bfd_boolean
FUNC_10 (ieee_data_type *VAR_11,
 ieee_per_section_type *VAR_12,
 unsigned char *VAR_13,
 asection *VAR_14,
 int VAR_15)
{
  switch (FUNC_9 (&(VAR_11->h)))
    {
    case 130:
      {
 unsigned int VAR_16;
 unsigned int VAR_17;

 FUNC_6 (&(VAR_11->h));
 VAR_16 = FUNC_5 (&(VAR_11->h));

 for (VAR_17 = 0; VAR_17 < VAR_16; VAR_17++)
   {
     VAR_13[VAR_12->pc++] = FUNC_9 (&(VAR_11->h));
     FUNC_6 (&(VAR_11->h));
   }
      }
      break;

    case 129:
      {
 bfd_boolean VAR_18 = VAR_3;

 FUNC_6 (&(VAR_11->h));
 while (VAR_18)
   {
     switch (FUNC_9 (&(VAR_11->h)))
       {
       case 128:

       case 133:
       case 131:
       case 135:
  {
    unsigned int VAR_19 = 4;
    bfd_boolean VAR_20 = VAR_0;
    asection *VAR_21;
    ieee_reloc_type *VAR_22;

    VAR_22 = FUNC_1 (VAR_11->h.abfd, sizeof (* VAR_22));
    if (!VAR_22)
      return VAR_0;

    *(VAR_12->reloc_tail_ptr) = VAR_22;
    VAR_12->reloc_tail_ptr = &VAR_22->next;
    VAR_22->next = (ieee_reloc_type *) ((void*)0);
    FUNC_6 (&(VAR_11->h));

    VAR_22->relent.sym_ptr_ptr = 0;
    FUNC_7 (VAR_11,
        &VAR_22->relent.addend,
        &VAR_22->symbol,
        &VAR_20, &VAR_19, &VAR_21);
    VAR_22->relent.address = VAR_12->pc;
    VAR_14->flags |= VAR_2;
    VAR_14->owner->flags |= VAR_1;
    VAR_14->reloc_count++;
    if (VAR_22->relent.sym_ptr_ptr == ((void*)0) && VAR_21 != ((void*)0))
      VAR_22->relent.sym_ptr_ptr = VAR_21->symbol_ptr_ptr;

    if (FUNC_9 (&(VAR_11->h)) == (int) VAR_7)
      {
        FUNC_6 (&(VAR_11->h));

        VAR_19 = FUNC_5 (&(VAR_11->h));
      };

    switch (FUNC_9 (&(VAR_11->h)))
      {
      case 134:
        FUNC_6 (&(VAR_11->h));
        break;
      case 132:
        FUNC_6 (&(VAR_11->h));
        break;
      case 136:
        FUNC_6 (&(VAR_11->h));
        break;
      default:
        break;
      }







    switch (VAR_19)
      {
      case 0:
      case 4:

        if (VAR_20)
   {






     FUNC_3 (VAR_11->h.abfd, (bfd_vma) 0, VAR_13 +
          VAR_12->pc);
     VAR_22->relent.howto = &VAR_9;

   }
        else
   {
     FUNC_3 (VAR_11->h.abfd, (bfd_vma) 0,
          VAR_13 + VAR_12->pc);
     VAR_22->relent.howto = &VAR_5;
   }
        VAR_12->pc += 4;
        break;
      case 2:
        if (VAR_20)
   {







     FUNC_2 (VAR_11->h.abfd, (bfd_vma) 0,
          VAR_13 + VAR_12->pc);
     VAR_22->relent.howto = &VAR_8;

   }

        else
   {
     FUNC_2 (VAR_11->h.abfd, (bfd_vma) 0,
          VAR_13 + VAR_12->pc);
     VAR_22->relent.howto = &VAR_4;
   }
        VAR_12->pc += 2;
        break;
      case 1:
        if (VAR_20)
   {





     FUNC_4 (VAR_11->h.abfd, 0, VAR_13 + VAR_12->pc);
     VAR_22->relent.howto = &VAR_10;

   }
        else
   {
     FUNC_4 (VAR_11->h.abfd, 0, VAR_13 + VAR_12->pc);
     VAR_22->relent.howto = &VAR_6;
   }
        VAR_12->pc += 1;
        break;

      default:
        FUNC_0 ();
        return VAR_0;
      }
  }
  break;
       default:
  {
    bfd_vma VAR_23;

    if (FUNC_8 (&(VAR_11->h), &VAR_23))
      {
        unsigned int VAR_24;

        for (VAR_24 = 0; VAR_24 < VAR_23; VAR_24++)
   {
     VAR_13[VAR_12->pc++] = FUNC_9 (&(VAR_11->h));
     FUNC_6 (&(VAR_11->h));
   }
      }
    else
      VAR_18 = VAR_0;
  }
       }



     if (VAR_15 != 1)
       VAR_18 = VAR_0;
   }
      }
    }
  return VAR_3;
}
