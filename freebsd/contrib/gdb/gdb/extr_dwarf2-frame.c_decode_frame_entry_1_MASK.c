
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dwarf2_fde {char* instructions; char* end; TYPE_2__* cie; void* address_range; void* initial_location; } ;
struct dwarf2_cie {char* initial_instructions; int saw_z_augmentation; char* end; int encoding; scalar_t__ return_address_register; int data_alignment_factor; void* code_alignment_factor; scalar_t__ cie_pointer; } ;
struct comp_unit {char* dwarf_frame_buffer; int dwarf_frame_size; int abfd; TYPE_1__* objfile; int addr_size; } ;
typedef scalar_t__ ULONGEST ;
struct TYPE_4__ {int encoding; scalar_t__ saw_z_augmentation; } ;
struct TYPE_3__ {int objfile_obstack; } ;
typedef int LONGEST ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct comp_unit*,struct dwarf2_cie*) ;
 int FUNC_2 (struct comp_unit*,struct dwarf2_fde*) ;
 int VAR_3 ;
 int FUNC_3 (struct comp_unit*,char*,int) ;
 int FUNC_4 (int ) ;
 void* FUNC_5 (struct comp_unit*,scalar_t__) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int *,int) ;
 scalar_t__ FUNC_8 (int ,char*) ;
 scalar_t__ FUNC_9 (int ,char*) ;
 scalar_t__ FUNC_10 (int ,char*) ;
 void* FUNC_11 (struct comp_unit*,int,char*,unsigned int*) ;
 int FUNC_12 (int ,char*,unsigned int*) ;
 int FUNC_13 (int ,char*,unsigned int*) ;
 void* FUNC_14 (int ,char*,unsigned int*) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (char*) ;

__attribute__((used)) static char *
FUNC_17 (struct comp_unit *VAR_4, char *VAR_5, int VAR_6)
{
  char *VAR_7;
  LONGEST VAR_8;
  unsigned int VAR_9;
  int VAR_10;
  ULONGEST VAR_11;
  ULONGEST VAR_12;
  char *VAR_13;

  VAR_7 = VAR_5;
  VAR_8 = FUNC_12 (VAR_4->abfd, VAR_7, &VAR_9);
  VAR_7 += VAR_9;
  VAR_13 = VAR_7 + VAR_8;


  if (VAR_13 > VAR_4->dwarf_frame_buffer + VAR_4->dwarf_frame_size)
    return ((void*)0);

  if (VAR_8 == 0)
    return VAR_13;


  VAR_10 = (VAR_9 == 12);


  if (VAR_6)
    VAR_11 = 0;
  else if (VAR_10)
    VAR_11 = VAR_0;
  else
    VAR_11 = VAR_1;

  if (VAR_10)
    {
      VAR_12 = FUNC_10 (VAR_4->abfd, VAR_7);
      VAR_7 += 8;
    }
  else
    {
      VAR_12 = FUNC_9 (VAR_4->abfd, VAR_7);
      VAR_7 += 4;
    }

  if (VAR_12 == VAR_11)
    {

      struct dwarf2_cie *VAR_14;
      char *VAR_15;


      VAR_12 = VAR_5 - VAR_4->dwarf_frame_buffer;


      if (FUNC_5 (VAR_4, VAR_12))
 return VAR_13;

      VAR_14 = (struct dwarf2_cie *)
 FUNC_7 (&VAR_4->objfile->objfile_obstack,
         sizeof (struct dwarf2_cie));
      VAR_14->initial_instructions = ((void*)0);
      VAR_14->cie_pointer = VAR_12;




      VAR_14->encoding = FUNC_4 (VAR_4->addr_size);


      if (FUNC_8 (VAR_4->abfd, VAR_7) != VAR_2)
 return ((void*)0);
      VAR_7 += 1;


      VAR_15 = VAR_7;
      VAR_7 = VAR_15 + FUNC_16 (VAR_15) + 1;




      if (VAR_15[0] == 'e' && VAR_15[1] == 'h')
 {

   VAR_7 += FUNC_0 (VAR_3);
   VAR_15 += 2;
 }

      VAR_14->code_alignment_factor =
 FUNC_14 (VAR_4->abfd, VAR_7, &VAR_9);
      VAR_7 += VAR_9;

      VAR_14->data_alignment_factor =
 FUNC_13 (VAR_4->abfd, VAR_7, &VAR_9);
      VAR_7 += VAR_9;

      VAR_14->return_address_register = FUNC_8 (VAR_4->abfd, VAR_7);
      VAR_7 += 1;

      VAR_14->saw_z_augmentation = (*VAR_15 == 'z');
      if (VAR_14->saw_z_augmentation)
 {
   ULONGEST VAR_16;

   VAR_16 = FUNC_14 (VAR_4->abfd, VAR_7, &VAR_9);
   VAR_7 += VAR_9;
   if (VAR_7 > VAR_13)
     return ((void*)0);
   VAR_14->initial_instructions = VAR_7 + VAR_16;
   VAR_15++;
 }

      while (*VAR_15)
 {

   if (*VAR_15 == 'L')
     {

       VAR_7++;
       VAR_15++;
     }


   else if (*VAR_15 == 'R')
     {
       VAR_14->encoding = *VAR_7++;
       VAR_15++;
     }


   else if (*VAR_15 == 'P')
     {

       VAR_7 += FUNC_15 (*VAR_7++);
       VAR_15++;
     }



   else
     {
       if (VAR_14->initial_instructions == ((void*)0))
  return VAR_13;


       VAR_7 = VAR_14->initial_instructions;
       break;
     }
 }

      VAR_14->initial_instructions = VAR_7;
      VAR_14->end = VAR_13;

      FUNC_1 (VAR_4, VAR_14);
    }
  else
    {

      struct dwarf2_fde *VAR_17;





      if (VAR_6)
 {
   VAR_12 = VAR_7 - VAR_4->dwarf_frame_buffer - VAR_12;
   VAR_12 -= (VAR_10 ? 8 : 4);
 }


      if (VAR_12 >= VAR_4->dwarf_frame_size)
 return ((void*)0);

      VAR_17 = (struct dwarf2_fde *)
 FUNC_7 (&VAR_4->objfile->objfile_obstack,
         sizeof (struct dwarf2_fde));
      VAR_17->cie = FUNC_5 (VAR_4, VAR_12);
      if (VAR_17->cie == ((void*)0))
 {
   FUNC_3 (VAR_4, VAR_4->dwarf_frame_buffer + VAR_12,
         VAR_6);
   VAR_17->cie = FUNC_5 (VAR_4, VAR_12);
 }

      FUNC_6 (VAR_17->cie != ((void*)0));

      VAR_17->initial_location =
 FUNC_11 (VAR_4, VAR_17->cie->encoding, VAR_7, &VAR_9);
      VAR_7 += VAR_9;

      VAR_17->address_range =
 FUNC_11 (VAR_4, VAR_17->cie->encoding & 0x0f, VAR_7, &VAR_9);
      VAR_7 += VAR_9;





      if (VAR_17->cie->saw_z_augmentation)
 {
   ULONGEST VAR_18;

   VAR_18 = FUNC_14 (VAR_4->abfd, VAR_7, &VAR_9);
   VAR_7 += VAR_9 + VAR_18;
   if (VAR_7 > VAR_13)
     return ((void*)0);
 }

      VAR_17->instructions = VAR_7;
      VAR_17->end = VAR_13;

      FUNC_2 (VAR_4, VAR_17);
    }

  return VAR_13;
}
