
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_17__ ;


typedef scalar_t__ bfd_vma ;
typedef scalar_t__ bfd_size_type ;
typedef int bfd_signed_vma ;
typedef int bfd_byte ;
typedef int bfd_boolean ;
struct TYPE_22__ {int flags; } ;
typedef TYPE_1__ bfd ;
typedef int asymbol ;
struct TYPE_23__ {unsigned int reloc_count; scalar_t__ lma; scalar_t__ size; scalar_t__ index; int * symbol; TYPE_3__** orelocation; } ;
typedef TYPE_2__ asection ;
struct TYPE_24__ {scalar_t__ address; scalar_t__ addend; TYPE_17__* howto; int ** sym_ptr_ptr; } ;
typedef TYPE_3__ arelent ;
struct TYPE_25__ {int * data; } ;
struct TYPE_21__ {int size; scalar_t__ pc_relative; int pcrel_offset; int src_mask; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_1 (TYPE_1__*) ;
 unsigned int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (void*,scalar_t__,TYPE_1__*) ;
 unsigned int FUNC_4 (TYPE_17__*) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 int FUNC_6 (TYPE_1__*,int *) ;
 int FUNC_7 (TYPE_1__*,int *) ;
 int * FUNC_8 (TYPE_1__*,scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_9__* FUNC_9 (TYPE_2__*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_10 (TYPE_1__*,int ) ;
 int FUNC_11 (TYPE_1__*,int ) ;
 int FUNC_12 (TYPE_1__*,scalar_t__,int *,scalar_t__,unsigned int) ;
 int FUNC_13 (TYPE_1__*,scalar_t__) ;
 int FUNC_14 (TYPE_3__**,unsigned int,int,int ) ;

__attribute__((used)) static bfd_boolean
FUNC_15 (bfd *VAR_11, asection *VAR_12)
{
  unsigned int VAR_13 =
    FUNC_1 (VAR_11) / FUNC_2 (VAR_11);
  unsigned int VAR_14 = VAR_12->reloc_count;
  bfd_byte *VAR_15 = FUNC_9 (VAR_12)->data;
  arelent **VAR_16 = VAR_12->orelocation;
  bfd_size_type VAR_17 = 0;

  FUNC_14 (VAR_12->orelocation,
  VAR_14,
  sizeof (arelent **),
  VAR_4);


  if (! FUNC_11 (VAR_11, VAR_10)
      || ! FUNC_11 (VAR_11,
       (bfd_byte) (VAR_12->index + VAR_2))
      || ! FUNC_10 (VAR_11, VAR_9)
      || ! FUNC_11 (VAR_11,
       (bfd_byte) (VAR_12->index + VAR_2)))
    return VAR_1;

  if ((VAR_11->flags & VAR_0) != 0 && VAR_14 == 0)
    {
      if (! FUNC_13 (VAR_11, VAR_12->lma))
 return VAR_1;
    }
  else
    {
      if (! FUNC_12 (VAR_11, (bfd_vma) 0, VAR_12->symbol, 0, 0))
 return VAR_1;
    }

  if (VAR_14 == 0)
    {


      while (VAR_17 < VAR_12->size)
 {
   bfd_size_type VAR_18;
   unsigned int VAR_19 = 127;

   VAR_18 = VAR_19;
   if (VAR_18 > VAR_12->size - VAR_17)
     VAR_18 = VAR_12->size - VAR_17;

   if (VAR_18 != 0)
     {
       if (! FUNC_11 (VAR_11, VAR_7))
  return VAR_1;

       if (! FUNC_13 (VAR_11, VAR_18))
  return VAR_1;
       if (FUNC_3 ((void *) (VAR_15 + VAR_17), VAR_18, VAR_11)
    != VAR_18)
  return VAR_1;
       VAR_17 += VAR_18;
     }
 }
    }
  else
    {
      if (! FUNC_11 (VAR_11, VAR_8))
 return VAR_1;




      if (VAR_15 == ((void*)0))
 {

   VAR_15 = FUNC_8 (VAR_11, VAR_12->size);
   if (!VAR_15)
     return VAR_1;
 }
      while (VAR_17 < VAR_12->size)
 {
   bfd_size_type VAR_20;
   unsigned int VAR_21 = 127;

   if (VAR_14)
     {
       VAR_20 = (*VAR_16)->address - VAR_17;
       if (VAR_20 > VAR_21)
  VAR_20 = VAR_21;
     }
   else
     VAR_20 = VAR_21;

   if (VAR_20 > VAR_12->size - VAR_17)
     VAR_20 = VAR_12->size - VAR_17;

   if (VAR_20 != 0)
     {

       if (! FUNC_13 (VAR_11, VAR_20))
  return VAR_1;
       if (FUNC_3 ((void *) (VAR_15 + VAR_17), VAR_20, VAR_11)
    != VAR_20)
  return VAR_1;
       VAR_17 += VAR_20;
     }


   if (VAR_14 && (*VAR_16) && (*VAR_16)->address == VAR_17)
     {
       while (VAR_14
       && (*VAR_16) && (*VAR_16)->address == VAR_17)
  {
    arelent *VAR_22 = *VAR_16;
    bfd_signed_vma VAR_23;
    switch (VAR_22->howto->size)
      {
      case 2:
        VAR_23 = FUNC_6 (VAR_11,
           VAR_15 + VAR_17);
        VAR_17 += 4;
        break;
      case 1:
        VAR_23 = FUNC_5 (VAR_11,
           VAR_15 + VAR_17);
        VAR_17 += 2;
        break;
      case 0:
        VAR_23 = FUNC_7 (VAR_11,
          VAR_15 + VAR_17);
        VAR_17++;
        break;
      default:
        VAR_23 = 0;
        FUNC_0 ();
        return VAR_1;
      }

    VAR_23 &= VAR_22->howto->src_mask;

    if (VAR_22->howto->pc_relative
        && ! VAR_22->howto->pcrel_offset)
      VAR_23 += VAR_22->address;

    if (! FUNC_11 (VAR_11,
      VAR_6))
      return VAR_1;

    if (VAR_22->sym_ptr_ptr != (asymbol **) ((void*)0))
      {
        if (! FUNC_12 (VAR_11, VAR_22->addend + VAR_23,
         *(VAR_22->sym_ptr_ptr),
         VAR_22->howto->pc_relative,
         (unsigned) VAR_12->index))
   return VAR_1;
      }
    else
      {
        if (! FUNC_12 (VAR_11, VAR_22->addend + VAR_23,
         (asymbol *) ((void*)0),
         VAR_22->howto->pc_relative,
         (unsigned) VAR_12->index))
   return VAR_1;
      }

    if (VAR_13
        != FUNC_4 (VAR_22->howto))
      {
        bfd_vma VAR_24 = FUNC_4 (VAR_22->howto);
        if (! FUNC_13 (VAR_11, VAR_24))
   return VAR_1;
      }
    if (! FUNC_11 (VAR_11,
      VAR_5))
      return VAR_1;

    VAR_14--;
    VAR_16++;
  }

     }
 }
    }

  return VAR_3;
}
