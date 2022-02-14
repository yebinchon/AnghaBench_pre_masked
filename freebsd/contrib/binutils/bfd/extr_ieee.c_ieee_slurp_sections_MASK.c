
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int ieee_record_enum_type ;
struct TYPE_9__ {scalar_t__ section_part; } ;
struct TYPE_10__ {TYPE_1__ r; } ;
struct TYPE_11__ {unsigned int section_count; int h; TYPE_4__** section_table; TYPE_2__ w; } ;
typedef TYPE_3__ ieee_data_type ;
typedef scalar_t__ file_ptr ;
typedef int bfd_vma ;
typedef int bfd_byte ;
typedef int bfd ;
struct TYPE_12__ {int flags; char* name; size_t size; size_t vma; size_t lma; int alignment_power; } ;
typedef TYPE_4__ asection ;


 TYPE_3__* FUNC_0 (int *) ;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (size_t) ;
 TYPE_4__* FUNC_2 (int *,TYPE_3__*,unsigned int) ;
 int FUNC_3 (TYPE_3__*,scalar_t__) ;
 size_t FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 char* FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void
FUNC_11 (bfd *VAR_5)
{
  ieee_data_type *VAR_6 = FUNC_0 (VAR_5);
  file_ptr VAR_7 = VAR_6->w.r.section_part;
  char *VAR_8;

  if (VAR_7 != 0)
    {
      bfd_byte VAR_9[3];

      FUNC_3 (VAR_6, VAR_7);
      while (VAR_4)
 {
   switch (FUNC_9 (&(VAR_6->h)))
     {
     case 128:
       {
  asection *VAR_10;
  unsigned int VAR_11;

  FUNC_5 (&(VAR_6->h));
  VAR_11 = FUNC_4 (&(VAR_6->h));

  VAR_10 = FUNC_2 (VAR_5, VAR_6, VAR_11);

  VAR_9[0] = FUNC_10 (&(VAR_6->h));



  switch (VAR_9[0])
    {
    case 0xC1:

      VAR_9[1] = FUNC_9 (&(VAR_6->h));
      VAR_10->flags = VAR_0;
      switch (VAR_9[1])
        {

        case 0xD3:
   FUNC_5 (&(VAR_6->h));
   VAR_9[2] = FUNC_9 (&(VAR_6->h));
   switch (VAR_9[2])
     {
     case 0xD0:

       FUNC_5 (&(VAR_6->h));
       VAR_10->flags |= VAR_1;
       break;
     case 0xC4:

       FUNC_5 (&(VAR_6->h));
       VAR_10->flags |= VAR_2;
       break;
     case 0xD2:
       FUNC_5 (&(VAR_6->h));

       VAR_10->flags |= VAR_3 | VAR_2;
       break;
     default:
       break;
     }
        }
      break;


    case 0xC3:
      VAR_9[1] = FUNC_9 (&(VAR_6->h));
      VAR_10->flags = VAR_0;
      switch (VAR_9[1])
        {
        case 0xD0:
   FUNC_5 (&(VAR_6->h));
   VAR_10->flags |= VAR_1;
   break;
        case 0xC4:
   FUNC_5 (&(VAR_6->h));
   VAR_10->flags |= VAR_2;
   break;
        case 0xD2:
   FUNC_5 (&(VAR_6->h));
   VAR_10->flags |= VAR_3 | VAR_2;
   break;
        default:
   break;
        }
    }


  VAR_8 = FUNC_8 (&VAR_6->h);
  if (VAR_8[0])
    VAR_10->name = VAR_8;


  {
    bfd_vma VAR_12, VAR_13, VAR_14;

    FUNC_6 (&(VAR_6->h), &VAR_12);
    FUNC_6 (&(VAR_6->h), &VAR_13);
    FUNC_6 (&(VAR_6->h), &VAR_14);
  }
       }
       break;
     case 132:
       {
  unsigned int VAR_15;
  bfd_vma VAR_16;
  asection *VAR_17;

  FUNC_5 (&(VAR_6->h));
  VAR_15 = FUNC_4 (&VAR_6->h);
  VAR_17 = FUNC_2 (VAR_5, VAR_6, VAR_15);
  if (VAR_15 > VAR_6->section_count)
    VAR_6->section_count = VAR_15;

  VAR_17->alignment_power =
    FUNC_1 (FUNC_4 (&VAR_6->h));
  (void) FUNC_6 (&(VAR_6->h), &VAR_16);
       }
       break;
     case 137:
       {
  asection *VAR_18;
  ieee_record_enum_type VAR_19;

  VAR_19 = (ieee_record_enum_type) (FUNC_7 (&(VAR_6->h)));
  switch (VAR_19)
    {
    case 129:
      VAR_18 = VAR_6->section_table[FUNC_4 (&(VAR_6->h))];
      VAR_18->size = FUNC_4 (&(VAR_6->h));
      break;
    case 134:
      VAR_18 = VAR_6->section_table[FUNC_4 (&(VAR_6->h))];
      VAR_18->size = FUNC_4 (&(VAR_6->h));
      break;
    case 133:
      VAR_18 = VAR_6->section_table[FUNC_4 (&(VAR_6->h))];
      VAR_18->vma = FUNC_4 (&(VAR_6->h));
      VAR_18->lma = VAR_18->vma;
      break;
    case 135:
      FUNC_4 (&(VAR_6->h));
      FUNC_4 (&(VAR_6->h));
      break;
    case 136:
      FUNC_4 (&(VAR_6->h));
      FUNC_4 (&(VAR_6->h));
      break;
    case 131:
      VAR_18 = VAR_6->section_table[FUNC_4 (&(VAR_6->h))];
      VAR_18->vma = FUNC_4 (&(VAR_6->h));
      VAR_18->lma = VAR_18->vma;
      break;
    case 130:
      (void) FUNC_4 (&(VAR_6->h));
      (void) FUNC_4 (&(VAR_6->h));
      break;
    default:
      return;
    }
       }
       break;
     default:
       return;
     }
 }
    }
}
