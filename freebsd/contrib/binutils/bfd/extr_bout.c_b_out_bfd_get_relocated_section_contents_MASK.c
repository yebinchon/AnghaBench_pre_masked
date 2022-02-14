
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_19__ {TYPE_4__* section; } ;
struct TYPE_20__ {TYPE_1__ indirect; } ;
struct bfd_link_order {unsigned int size; TYPE_2__ u; } ;
struct bfd_link_info {int dummy; } ;
typedef long bfd_vma ;
typedef int bfd_size_type ;
typedef int bfd_byte ;
typedef scalar_t__ bfd_boolean ;
typedef int bfd ;
typedef int asymbol ;
struct TYPE_22__ {long size; int * owner; } ;
typedef TYPE_4__ asection ;
struct TYPE_23__ {unsigned int address; unsigned int addend; TYPE_3__* howto; } ;
typedef TYPE_5__ arelent ;
struct TYPE_21__ {int type; unsigned int size; } ;






 long VAR_0 ;
 int FUNC_0 (int) ;

 int VAR_1 ;

 long VAR_2 ;

 int VAR_3 ;
 int FUNC_1 () ;
 long FUNC_2 (int *,TYPE_4__*,TYPE_5__**,int **) ;
 int * FUNC_3 (int *,struct bfd_link_info*,struct bfd_link_order*,int *,scalar_t__,int **) ;
 long FUNC_4 (int *,int *) ;
 long FUNC_5 (int *,TYPE_4__*) ;
 int FUNC_6 (int *,TYPE_4__*,int *,long,long) ;
 TYPE_5__** FUNC_7 (int ) ;
 int FUNC_8 (int *,long,int *) ;
 int FUNC_9 (int *,struct bfd_link_info*,TYPE_5__*,int *,unsigned int,unsigned int,TYPE_4__*,int ) ;
 int FUNC_10 (int *,struct bfd_link_info*,TYPE_5__*,int *,int *,TYPE_4__*) ;
 int FUNC_11 (TYPE_5__**) ;
 long FUNC_12 (TYPE_5__*,struct bfd_link_info*,TYPE_4__*) ;
 long FUNC_13 (TYPE_4__*) ;

__attribute__((used)) static bfd_byte *
FUNC_14 (bfd *VAR_4,
       struct bfd_link_info *VAR_5,
       struct bfd_link_order *VAR_6,
       bfd_byte *VAR_7,
       bfd_boolean VAR_8,
       asymbol **VAR_9)
{

  bfd *VAR_10 = VAR_6->u.indirect.section->owner;
  asection *VAR_11 = VAR_6->u.indirect.section;
  long VAR_12 = FUNC_5 (VAR_10, VAR_11);
  arelent **VAR_13 = ((void*)0);
  long VAR_14;

  if (VAR_12 < 0)
    goto error_return;


  if (VAR_8)
    return FUNC_3 (VAR_4, VAR_5,
             VAR_6,
             VAR_7, VAR_8,
             VAR_9);

  VAR_13 = FUNC_7 ((bfd_size_type) VAR_12);
  if (VAR_13 == ((void*)0) && VAR_12 != 0)
    goto error_return;


  FUNC_0 (FUNC_6 (VAR_10,
     VAR_11,
     VAR_7,
     (bfd_vma) 0,
     VAR_11->size));

  VAR_14 = FUNC_2 (VAR_10,
     VAR_11,
     VAR_13,
     VAR_9);
  if (VAR_14 < 0)
    goto error_return;
  if (VAR_14 > 0)
    {
      arelent **VAR_15 = VAR_13;
      arelent *VAR_16 ;
      unsigned int VAR_17 = 0;
      unsigned int VAR_18 = 0;
      unsigned int VAR_19;
      unsigned int VAR_20;


      while (VAR_17 < VAR_6->size)
 {
   VAR_16 = *VAR_15;
   if (VAR_16)
     {



       FUNC_0 (VAR_16->address >= VAR_18);
       VAR_19 = VAR_16->address - VAR_18;
       VAR_15++;
     }
   else
     VAR_19 = VAR_6->size - VAR_17;


   for (VAR_20 = 0; VAR_20 < VAR_19; VAR_20++)
     VAR_7[VAR_17++] = VAR_7[VAR_18++];


   if (VAR_16)
     {
       switch (VAR_16->howto->type)
  {
  case 133:
    FUNC_10 (VAR_10, VAR_5, VAR_16,
       VAR_18 + VAR_7, VAR_17 + VAR_7,
       VAR_11);
    VAR_18 += 4;
    VAR_17 += 4;
    break;
  case 134:
    FUNC_8 (VAR_10,
         (FUNC_4 (VAR_10, VAR_7 + VAR_18)
          + FUNC_12 (VAR_16, VAR_5, VAR_11)),
         VAR_7 + VAR_17);
    VAR_18 += 4;
    VAR_17 += 4;
    break;
  case 130:
    FUNC_9 (VAR_10, VAR_5, VAR_16, VAR_7,
      VAR_18, VAR_17, VAR_11,
      VAR_1);
    VAR_18 += 4;
    VAR_17 += 4;
    break;
  case 131:
    FUNC_0 (VAR_16->addend >= VAR_18);
    FUNC_0 ((bfd_vma) VAR_16->addend
         <= VAR_11->size);
    VAR_18 = VAR_16->addend;
    VAR_17 = ((VAR_17 + VAR_16->howto->size)
     & ~VAR_16->howto->size);
    break;
  case 132:


    FUNC_9 (VAR_10, VAR_5, VAR_16, VAR_7,
      VAR_18 + 4, VAR_17, VAR_11,
      VAR_3);
    VAR_17 += 4;
    VAR_18 += 8;
    break;
  case 128:
    {
      long int VAR_21 = FUNC_4 (VAR_10,
      VAR_7 + VAR_18);
      bfd_vma VAR_22;

      VAR_22 = FUNC_12 (VAR_16, VAR_5, VAR_11);
      VAR_21 = ((VAR_21 & ~VAR_0)
       | (((VAR_21 & VAR_0)
    + VAR_22
    - FUNC_13 (VAR_11)
    + VAR_16->addend)
          & VAR_0));

      FUNC_8 (VAR_10, (bfd_vma) VAR_21, VAR_7 + VAR_17);
      VAR_17 += 4;
      VAR_18 += 4;

    }
    break;
  case 129:
    {
      long int VAR_23 = FUNC_4 (VAR_10,
      VAR_7 + VAR_18);
      bfd_vma VAR_24;

      VAR_24 = FUNC_12 (VAR_16, VAR_5, VAR_11);
      VAR_23 = ((VAR_23 & ~VAR_2)
       | (((VAR_23 & VAR_2)
    + VAR_24
    + VAR_16->addend
    - FUNC_13 (VAR_11))
          & VAR_2));

      FUNC_8 (VAR_10, (bfd_vma) VAR_23, VAR_7 + VAR_17);
      VAR_17 += 4;
      VAR_18 += 4;
    }
    break;

  default:
    FUNC_1 ();
  }
     }
 }
    }
  if (VAR_13 != ((void*)0))
    FUNC_11 (VAR_13);
  return VAR_7;
 error_return:
  if (VAR_13 != ((void*)0))
    FUNC_11 (VAR_13);
  return ((void*)0);
}
