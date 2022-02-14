
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct objfile {int * obfd; } ;
struct comp_unit_head {unsigned int addr_size; int base_known; unsigned int base_address; } ;
struct dwarf2_cu {struct comp_unit_head header; struct objfile* objfile; } ;
struct die_info {int dummy; } ;
struct attribute {int dummy; } ;
typedef int bfd ;
typedef unsigned int CORE_ADDR ;


 unsigned int FUNC_0 (struct attribute*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_1 (struct attribute*) ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,...) ;
 struct attribute* FUNC_4 (struct die_info*,int ,struct dwarf2_cu*) ;
 char* VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int FUNC_5 (int *,char*,struct dwarf2_cu*,int*) ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_6 (struct die_info *VAR_7, CORE_ADDR *VAR_8,
        CORE_ADDR *VAR_9, struct dwarf2_cu *VAR_10)
{
  struct objfile *VAR_11 = VAR_10->objfile;
  struct comp_unit_head *VAR_12 = &VAR_10->header;
  struct attribute *VAR_13;
  bfd *VAR_14 = VAR_11->obfd;
  CORE_ADDR VAR_15 = 0;
  CORE_ADDR VAR_16 = 0;
  int VAR_17 = 0;

  VAR_13 = FUNC_4 (VAR_7, VAR_0, VAR_10);
  if (VAR_13)
    {
      VAR_16 = FUNC_0 (VAR_13);
      VAR_13 = FUNC_4 (VAR_7, VAR_1, VAR_10);
      if (VAR_13)
 VAR_15 = FUNC_0 (VAR_13);
      else

 return 0;


      VAR_17 = 1;
    }
  else
    {
      VAR_13 = FUNC_4 (VAR_7, VAR_2, VAR_10);
      if (VAR_13 != ((void*)0))
 {
   unsigned int VAR_18 = VAR_12->addr_size;
   CORE_ADDR VAR_19 = ~(~(CORE_ADDR)1 << (VAR_18 * 8 - 1));


   unsigned int VAR_20 = FUNC_1 (VAR_13);

   CORE_ADDR VAR_21;
   int VAR_22;
   int VAR_23;
   char *VAR_24;
   CORE_ADDR VAR_25;
   int VAR_26;

   VAR_22 = VAR_12->base_known;
   VAR_21 = VAR_12->base_address;

   if (VAR_20 >= VAR_5)
     {
       FUNC_3 (&VAR_6,
                  "Offset %d out of bounds for DW_AT_ranges attribute",
    VAR_20);
       return 0;
     }
   VAR_24 = VAR_4 + VAR_20;


   VAR_25 = FUNC_5 (VAR_14, VAR_24, VAR_10, &VAR_23);
   if ((VAR_25 & VAR_19) == VAR_19)
     {


       VAR_21 = FUNC_5 (VAR_14, VAR_24 + VAR_18, VAR_10, &VAR_23);
       VAR_24 += 2 * VAR_18;
       VAR_20 += 2 * VAR_18;
       VAR_22 = 1;
     }

   VAR_26 = 0;

   while (1)
     {
       CORE_ADDR VAR_27, VAR_28;

       VAR_27 = FUNC_5 (VAR_14, VAR_24, VAR_10, &VAR_23);
       VAR_24 += VAR_18;
       VAR_28 = FUNC_5 (VAR_14, VAR_24, VAR_10, &VAR_23);
       VAR_24 += VAR_18;
       VAR_20 += 2 * VAR_18;


       if (VAR_27 == 0 && VAR_28 == 0)

  break;




       if ((VAR_27 & VAR_19) == VAR_19)
  {


    VAR_21 = FUNC_5 (VAR_14, VAR_24 + VAR_18, VAR_10, &VAR_23);
    VAR_22 = 1;
    continue;
  }

       if (!VAR_22)
  {


    FUNC_3 (&VAR_6,
        "Invalid .debug_ranges data (no base address)");
    return 0;
  }

       VAR_27 += VAR_21;
       VAR_28 += VAR_21;





       if (! VAR_26)
  {
    VAR_15 = VAR_27;
    VAR_16 = VAR_28;
    VAR_26 = 1;
  }
       else
  {
    if (VAR_27 < VAR_15)
      VAR_15 = VAR_27;
    if (VAR_28 > VAR_16)
      VAR_16 = VAR_28;
  }
     }

   if (! VAR_26)


     return 0;

   VAR_17 = -1;
 }
    }

  if (VAR_16 < VAR_15)
    return 0;
  if (VAR_15 == 0 && (FUNC_2 (VAR_14) & VAR_3) == 0)
    return 0;

  *VAR_8 = VAR_15;
  *VAR_9 = VAR_16;
  return VAR_17;
}
