
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_9__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct relocation_info {int dummy; } ;
typedef int bfd_size_type ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_12__ {int i; } ;
struct TYPE_13__ {TYPE_2__ udata; TYPE_1__* section; } ;
typedef TYPE_3__ asymbol ;
struct TYPE_14__ {unsigned int reloc_count; int target_index; TYPE_5__** orelocation; } ;
typedef TYPE_4__ asection ;
struct TYPE_15__ {TYPE_3__** sym_ptr_ptr; int * howto; int address; } ;
typedef TYPE_5__ arelent ;
struct TYPE_16__ {TYPE_3__* symbol; } ;
struct TYPE_11__ {TYPE_4__* output_section; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,unsigned char*) ;
 int VAR_1 ;
 TYPE_9__* VAR_2 ;
 int FUNC_2 (void*,int,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (TYPE_4__*) ;
 scalar_t__ FUNC_5 (TYPE_4__*) ;
 scalar_t__ FUNC_6 (TYPE_4__*) ;
 struct relocation_info* FUNC_7 (int) ;
 int FUNC_8 (struct relocation_info*) ;
 int * VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static bfd_boolean
FUNC_9 (bfd *VAR_8, asection *VAR_9)
{
  arelent **VAR_10;
  int VAR_11 = 0;
  int VAR_12;
  int VAR_13;
  int VAR_14;
  unsigned int VAR_15 = VAR_9->reloc_count;
  struct relocation_info *VAR_16, *VAR_17;
  bfd_size_type VAR_18;
  int VAR_19, VAR_20, VAR_21, VAR_22;

  if (VAR_15 == 0)
    return VAR_1;

  VAR_10 = VAR_9->orelocation;
  VAR_18 = (bfd_size_type) VAR_15 * sizeof (struct relocation_info);
  VAR_16 = FUNC_7 (VAR_18);
  if (!VAR_16 && VAR_18 != 0)
    return VAR_0;

  if (FUNC_3 (VAR_8))
    {

      VAR_20 = 0x80;
      VAR_19 = 0x10;
      VAR_21 = 0x40;
      VAR_14 = 0x20;
      VAR_22 = 0x02;
      VAR_13 = 0x08;
    }
  else
    {

      VAR_20 = 0x01;
      VAR_19 = 0x08;
      VAR_21 = 0x04;
      VAR_14 = 0x02;
      VAR_22 = 0x40;
      VAR_13 = 0x10;
    }

  for (VAR_17 = VAR_16; VAR_15 > 0; --VAR_15, ++VAR_17, ++VAR_10)
    {
      arelent *VAR_23 = *VAR_10;
      unsigned char *VAR_24 = (unsigned char *) VAR_17;
      asymbol *VAR_25 = *(VAR_23->sym_ptr_ptr);
      asection *VAR_26 = VAR_25->section->output_section;

      FUNC_1 (VAR_8, VAR_23->address, VAR_24);


      VAR_12 = 0;


      if (VAR_23->howto== &VAR_5)
 VAR_24[7] = VAR_22 + VAR_20 + VAR_21;
      else if (VAR_23->howto == &VAR_7)
 VAR_24[7] = VAR_20 + VAR_21;
      else if (VAR_23->howto == &VAR_6)
 VAR_24[7] = VAR_20 + VAR_14;
      else if (VAR_23->howto == &VAR_4)
 VAR_24[7] = VAR_21 + VAR_13;
      else if (VAR_23->howto >= VAR_3
        && VAR_23->howto <= (VAR_3 + FUNC_0 (VAR_3) - 1))
 {

   VAR_12 = -2;
   VAR_11 = 0;
   VAR_24[7] = (VAR_20
      | ((VAR_23->howto - VAR_3) << 1));
 }
      else
 VAR_24[7] = VAR_21;

      if (VAR_12 != 0)
                                            ;
      else if (FUNC_5 (VAR_26)
        || FUNC_4 (VAR_26)
        || FUNC_6 (VAR_26))
 {
   if (VAR_2->symbol == VAR_25)
     {


       VAR_12 = 0;
       VAR_11 = 0;
     }
   else
     {

       VAR_11 = 1;
       VAR_12 = (*VAR_23->sym_ptr_ptr)->udata.i;
     }
 }
      else
 {

   VAR_11 = 0;
   VAR_12 = VAR_26->target_index;
 }

      if (FUNC_3 (VAR_8))
 {
   VAR_24[4] = (unsigned char) (VAR_12 >> 16);
   VAR_24[5] = (unsigned char) (VAR_12 >> 8);
   VAR_24[6] = (unsigned char) (VAR_12 );
 }
      else
 {
   VAR_24[6] = (unsigned char) (VAR_12 >> 16);
   VAR_24[5] = (unsigned char) (VAR_12>> 8);
   VAR_24[4] = (unsigned char) (VAR_12 );
 }

      if (VAR_11)
 VAR_24[7] |= VAR_19;
    }

  if (FUNC_2 ((void *) VAR_16, VAR_18, VAR_8) != VAR_18)
    {
      FUNC_8 (VAR_16);
      return VAR_0;
    }

  FUNC_8 (VAR_16);

  return VAR_1;
}
