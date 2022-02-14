
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ui_file {int dummy; } ;
struct reggroup {int dummy; } ;
struct regcache {TYPE_1__* descr; } ;
struct gdbarch {int dummy; } ;
struct cleanup {int dummy; } ;
typedef enum regcache_dump_what { ____Placeholder_regcache_dump_what } regcache_dump_what ;
struct TYPE_2__ {int legacy_p; int nr_raw_registers; int nr_cooked_registers; int sizeof_raw_registers; int sizeof_raw_register_valid_p; int* register_offset; int* sizeof_register; struct gdbarch* gdbarch; } ;


 long FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_3 (int) ;
 int VAR_3 ;
 int FUNC_4 (int ) ;
 char* FUNC_5 (int ) ;
 int FUNC_6 (struct cleanup*) ;
 int FUNC_7 (struct ui_file*,int ,unsigned char*,int) ;
 int FUNC_8 (struct ui_file*,char*,...) ;
 int FUNC_9 (int) ;
 scalar_t__ FUNC_10 (struct gdbarch*,int,struct reggroup*) ;
 struct cleanup* FUNC_11 (int ,char*) ;
 int VAR_4 ;
 int FUNC_12 (struct regcache*,int,unsigned char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_13 (struct regcache*,int,unsigned char*) ;
 int FUNC_14 (struct regcache*,int) ;
 int FUNC_15 (struct reggroup*) ;
 struct reggroup* FUNC_16 (struct gdbarch*,struct reggroup*) ;
 int FUNC_17 (struct gdbarch*,int) ;
 int FUNC_18 (char const*) ;
 scalar_t__ FUNC_19 (char const*,char const*,int ) ;
 int FUNC_20 (char**,char*,int) ;
 int VAR_8 ;

__attribute__((used)) static void
FUNC_21 (struct regcache *VAR_9, struct ui_file *VAR_10,
        enum regcache_dump_what VAR_11)
{
  struct cleanup *VAR_12 = FUNC_11 (VAR_4, ((void*)0));
  struct gdbarch *VAR_13 = VAR_9->descr->gdbarch;
  int VAR_14;
  int VAR_15 = 0;
  int VAR_16 = 0;
  int VAR_17 = 0;
  int VAR_18 = 0;
  long VAR_19 = 0;
  unsigned char VAR_20[VAR_0];
  FUNC_9 (VAR_9->descr->nr_cooked_registers
       == (VAR_2 + VAR_1));

  for (VAR_14 = -1; VAR_14 < VAR_9->descr->nr_cooked_registers; VAR_14++)
    {

      if (VAR_14 < 0)
 FUNC_8 (VAR_10, " %-10s", "Name");
      else
 {
   const char *VAR_21 = FUNC_3 (VAR_14);
   if (VAR_21 == ((void*)0))
     VAR_21 = "";
   else if (VAR_21[0] == '\0')
     VAR_21 = "''";
   FUNC_8 (VAR_10, " %-10s", VAR_21);
 }


      if (VAR_14 < 0)
 FUNC_8 (VAR_10, " %4s", "Nr");
      else
 FUNC_8 (VAR_10, " %4d", VAR_14);


      if (VAR_14 < 0)
 FUNC_8 (VAR_10, " %4s", "Rel");
      else if (VAR_14 < VAR_2)
 FUNC_8 (VAR_10, " %4d", VAR_14);
      else
 FUNC_8 (VAR_10, " %4d", (VAR_14 - VAR_2));


      if (VAR_14 < 0)
 FUNC_8 (VAR_10, " %6s  ", "Offset");
      else
 {
   FUNC_8 (VAR_10, " %6ld",
         VAR_9->descr->register_offset[VAR_14]);
   if (VAR_19 != VAR_9->descr->register_offset[VAR_14]
       || VAR_19 != FUNC_0 (VAR_14)
       || (VAR_14 > 0
    && (VAR_9->descr->register_offset[VAR_14]
        != (VAR_9->descr->register_offset[VAR_14 - 1]
     + VAR_9->descr->sizeof_register[VAR_14 - 1])))
       )
     {
       if (!VAR_17)
  VAR_17 = ++VAR_15;
       FUNC_8 (VAR_10, "*%d", VAR_17);
     }
   else
     FUNC_8 (VAR_10, "  ");
   VAR_19 = (VAR_9->descr->register_offset[VAR_14]
        + VAR_9->descr->sizeof_register[VAR_14]);
 }


      if (VAR_14 < 0)
 FUNC_8 (VAR_10, " %5s ", "Size");
      else
 {
   FUNC_8 (VAR_10, " %5ld",
         VAR_9->descr->sizeof_register[VAR_14]);
   if ((VAR_9->descr->sizeof_register[VAR_14]
        != FUNC_1 (VAR_14))
       || (VAR_9->descr->sizeof_register[VAR_14]
    != FUNC_2 (VAR_14))
       || (VAR_9->descr->sizeof_register[VAR_14]
    != FUNC_4 (FUNC_17 (VAR_9->descr->gdbarch,
       VAR_14)))
       )
     {
       if (!VAR_16)
  VAR_16 = ++VAR_15;
       FUNC_8 (VAR_10, "*%d", VAR_16);
     }
   else
     FUNC_8 (VAR_10, " ");
 }


      {
 const char *VAR_22;
 if (VAR_14 < 0)
   VAR_22 = "Type";
 else
   {
     static const char VAR_23[] = "builtin_type";
     VAR_22 = FUNC_5 (FUNC_17 (VAR_9->descr->gdbarch, VAR_14));
     if (VAR_22 == ((void*)0))
       {
  char *VAR_24;
  if (!VAR_18)
    VAR_18 = ++VAR_15;
  FUNC_20 (&VAR_24, "*%d", VAR_18);
  FUNC_11 (VAR_8, VAR_24);
  VAR_22 = VAR_24;
       }

     if (FUNC_19 (VAR_22, VAR_23, FUNC_18 (VAR_23)) == 0)
       VAR_22 += FUNC_18 (VAR_23);
   }
 FUNC_8 (VAR_10, " %-15s", VAR_22);
      }


      FUNC_8 (VAR_10, " ");


      if (VAR_11 == VAR_7)
 {
   if (VAR_14 < 0)
     FUNC_8 (VAR_10, "Raw value");
   else if (VAR_14 >= VAR_9->descr->nr_raw_registers)
     FUNC_8 (VAR_10, "<cooked>");
   else if (!FUNC_14 (VAR_9, VAR_14))
     FUNC_8 (VAR_10, "<invalid>");
   else
     {
       FUNC_13 (VAR_9, VAR_14, VAR_20);
       FUNC_8 (VAR_10, "0x");
       FUNC_7 (VAR_10, VAR_3, VAR_20,
     FUNC_1 (VAR_14));
     }
 }


      if (VAR_11 == VAR_5)
 {
   if (VAR_14 < 0)
     FUNC_8 (VAR_10, "Cooked value");
   else
     {
       FUNC_12 (VAR_9, VAR_14, VAR_20);
       FUNC_8 (VAR_10, "0x");
       FUNC_7 (VAR_10, VAR_3, VAR_20,
     FUNC_2 (VAR_14));
     }
 }


      if (VAR_11 == VAR_6)
 {
   if (VAR_14 < 0)
     FUNC_8 (VAR_10, "Groups");
   else
     {
       const char *VAR_25 = "";
       struct reggroup *VAR_26;
       for (VAR_26 = FUNC_16 (VAR_13, ((void*)0));
     VAR_26 != ((void*)0);
     VAR_26 = FUNC_16 (VAR_13, VAR_26))
  {
    if (FUNC_10 (VAR_13, VAR_14, VAR_26))
      {
        FUNC_8 (VAR_10, "%s%s", VAR_25, FUNC_15 (VAR_26));
        VAR_25 = ",";
      }
  }
     }
 }

      FUNC_8 (VAR_10, "\n");
    }

  if (VAR_16)
    FUNC_8 (VAR_10, "*%d: Inconsistent register sizes.\n",
   VAR_16);
  if (VAR_17)
    FUNC_8 (VAR_10, "*%d: Inconsistent register offsets.\n",
   VAR_17);
  if (VAR_18)
    FUNC_8 (VAR_10,
   "*%d: Register type's name NULL.\n",
   VAR_18);
  FUNC_6 (VAR_12);
}
