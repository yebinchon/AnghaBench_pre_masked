
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dwarf_section {unsigned char* start; unsigned long size; char* name; unsigned long address; } ;
struct TYPE_2__ {unsigned int num_loc_offsets; unsigned long* loc_offsets; unsigned int pointer_size; unsigned long cu_offset; int* have_frame_base; unsigned long base_address; } ;


 char* FUNC_0 (char*) ;
 void* FUNC_1 (unsigned char*,int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (unsigned char*,unsigned int,unsigned short,unsigned long) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (void*) ;
 unsigned int VAR_1 ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (char) ;
 int VAR_2 ;
 int FUNC_8 (char*,...) ;

__attribute__((used)) static int
FUNC_9 (struct dwarf_section *VAR_3, void *VAR_4)
{
  unsigned char *VAR_5 = VAR_3->start;
  unsigned char *VAR_6;
  unsigned long VAR_7;
  unsigned char *VAR_8 = VAR_5;
  unsigned int VAR_9 = 0;
  unsigned long VAR_10 = 0;
  unsigned int VAR_11 = 0;
  unsigned int VAR_12;
  unsigned int VAR_13;
  int VAR_14 = 0;
  int VAR_15 = 1;
  unsigned char *VAR_16;

  VAR_7 = VAR_3->size;
  VAR_6 = VAR_5 + VAR_7;

  if (VAR_7 == 0)
    {
      FUNC_6 (FUNC_0("\nThe %s section is empty.\n"), VAR_3->name);
      return 0;
    }

  FUNC_5 (VAR_4);




  for (VAR_12 = 0; VAR_12 < VAR_1; VAR_12++)
    {
      unsigned int VAR_17;

      VAR_17 = VAR_0 [VAR_12].num_loc_offsets;
      VAR_9 += VAR_17;


      if (VAR_15 && VAR_17 != 0)
 {
   if (!VAR_14)
     {

       VAR_10 = VAR_0 [VAR_12].loc_offsets [0];
       VAR_11 = VAR_12;
       VAR_14 = 1;
       VAR_13 = 1;
     }
   else
     VAR_13 = 0;

   for (; VAR_13 < VAR_17; VAR_13++)
     {
       if (VAR_10 >
    VAR_0 [VAR_12].loc_offsets [VAR_13])
  {
    VAR_15 = 0;
    break;
  }
       VAR_10 = VAR_0 [VAR_12].loc_offsets [VAR_13];
     }
 }
    }

  if (!VAR_15)

    FUNC_3 (FUNC_0("Location lists in .debug_info section aren't in ascending order!\n"));

  if (!VAR_14)
    FUNC_3 (FUNC_0("No location lists in .debug_info section!\n"));


  if (VAR_0 [VAR_11].num_loc_offsets > 0
      && VAR_0 [VAR_11].loc_offsets [0] != VAR_3->address)
    FUNC_8 (FUNC_0("Location lists in %s section start at 0x%lx\n"),
   VAR_3->name, VAR_0 [VAR_11].loc_offsets [0]);

  FUNC_6 (FUNC_0("Contents of the %s section:\n\n"), VAR_3->name);
  FUNC_6 (FUNC_0("    Offset   Begin    End      Expression\n"));

  VAR_14 = 0;
  for (VAR_12 = VAR_11; VAR_12 < VAR_1; VAR_12++)
    {
      unsigned long VAR_18;
      unsigned long VAR_19;
      unsigned short VAR_20;
      unsigned long VAR_21;
      unsigned int VAR_22;
      unsigned long VAR_23;
      unsigned long VAR_24;
      int VAR_25;
      int VAR_26;

      VAR_22 = VAR_0 [VAR_12].pointer_size;
      VAR_23 = VAR_0 [VAR_12].cu_offset;

      for (VAR_13 = 0; VAR_13 < VAR_0 [VAR_12].num_loc_offsets; VAR_13++)
 {
   VAR_26 = VAR_0 [VAR_12].have_frame_base [VAR_13];

   VAR_21 = VAR_0 [VAR_12].loc_offsets [VAR_13] - VAR_3->address;
   VAR_16 = VAR_8 + VAR_21;
   VAR_24 = VAR_0 [VAR_12].base_address;

   if (!VAR_14)
     VAR_14 = 1;
   else
     {
       if (VAR_5 < VAR_16)
  FUNC_8 (FUNC_0("There is a hole [0x%lx - 0x%lx] in .debug_loc section.\n"),
        (long)(VAR_5 - VAR_8), (long)(VAR_16 - VAR_8));
       else if (VAR_5 > VAR_16)
  FUNC_8 (FUNC_0("There is an overlap [0x%lx - 0x%lx] in .debug_loc section.\n"),
        (long)(VAR_5 - VAR_8), (long)(VAR_16 - VAR_8));
     }
   VAR_5 = VAR_16;

   if (VAR_21 >= VAR_7)
     {
       FUNC_8 (FUNC_0("Offset 0x%lx is bigger than .debug_loc section size.\n"),
      VAR_21);
       continue;
     }

   while (1)
     {
       if (VAR_5 + 2 * VAR_22 > VAR_6)
  {
    FUNC_8 (FUNC_0("Location list starting at offset 0x%lx is not terminated.\n"),
   VAR_21);
    break;
  }

       VAR_18 = FUNC_1 (VAR_5, VAR_22);
       VAR_5 += VAR_22;
       VAR_19 = FUNC_1 (VAR_5, VAR_22);
       VAR_5 += VAR_22;

       if (VAR_18 == 0 && VAR_19 == 0)
  {
    FUNC_6 (FUNC_0("    %8.8lx <End of list>\n"), VAR_21);
    break;
  }


       if (VAR_18 == -1UL && VAR_19 != -1UL)
  {
    VAR_24 = VAR_19;
    FUNC_6 (FUNC_0("    %8.8lx %8.8lx %8.8lx (base address)\n"),
     VAR_21, VAR_18, VAR_19);
    continue;
  }

       if (VAR_5 + 2 > VAR_6)
  {
    FUNC_8 (FUNC_0("Location list starting at offset 0x%lx is not terminated.\n"),
   VAR_21);
    break;
  }

       VAR_20 = FUNC_1 (VAR_5, 2);
       VAR_5 += 2;

       if (VAR_5 + VAR_20 > VAR_6)
  {
    FUNC_8 (FUNC_0("Location list starting at offset 0x%lx is not terminated.\n"),
   VAR_21);
    break;
  }

       FUNC_6 ("    %8.8lx %8.8lx %8.8lx (",
        VAR_21, VAR_18 + VAR_24, VAR_19 + VAR_24);
       VAR_25 = FUNC_2 (VAR_5,
           VAR_22,
           VAR_20,
           VAR_23);
       FUNC_7 (')');

       if (VAR_25 && !VAR_26)
  FUNC_6 (FUNC_0(" [without DW_AT_frame_base]"));

       if (VAR_18 == VAR_19)
  FUNC_4 (FUNC_0(" (start == end)"), VAR_2);
       else if (VAR_18 > VAR_19)
  FUNC_4 (FUNC_0(" (start > end)"), VAR_2);

       FUNC_7 ('\n');

       VAR_5 += VAR_20;
     }
 }
    }
  return 1;
}
