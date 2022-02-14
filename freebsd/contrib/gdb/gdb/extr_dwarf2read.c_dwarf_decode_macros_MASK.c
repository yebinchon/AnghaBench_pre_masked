
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct macro_source_file {struct macro_source_file* included_by; } ;
struct line_header {int dummy; } ;
struct dwarf2_cu {int objfile; } ;
typedef enum dwarf_macinfo_record_type { ____Placeholder_dwarf_macinfo_record_type } dwarf_macinfo_record_type ;
typedef int bfd ;







 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 () ;
 char* VAR_0 ;
 int VAR_1 ;
 struct macro_source_file* FUNC_2 (int,int,struct macro_source_file*,char*,struct line_header*,int ) ;
 int FUNC_3 (struct macro_source_file*,int,char*) ;
 int FUNC_4 (struct macro_source_file*,int,char*) ;
 int FUNC_5 (int *,char*) ;
 char* FUNC_6 (int *,char*,int*) ;
 int FUNC_7 (int *,char*,int*) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_8 (struct line_header *VAR_3, unsigned int VAR_4,
                     char *VAR_5, bfd *VAR_6,
                     struct dwarf2_cu *VAR_7)
{
  char *VAR_8, *VAR_9;
  struct macro_source_file *VAR_10 = 0;

  if (VAR_0 == ((void*)0))
    {
      FUNC_0 (&VAR_2, "missing .debug_macinfo section");
      return;
    }

  VAR_8 = VAR_0 + VAR_4;
  VAR_9 = VAR_0 + VAR_1;

  for (;;)
    {
      enum dwarf_macinfo_record_type VAR_11;


      if (VAR_8 >= VAR_9)
        {
   FUNC_1 ();
          return;
        }

      VAR_11 = FUNC_5 (VAR_6, VAR_8);
      VAR_8++;

      switch (VAR_11)
        {


        case 0:
          return;

        case 132:
        case 129:
          {
            int VAR_12;
            int VAR_13;
            char *VAR_14;

            VAR_13 = FUNC_7 (VAR_6, VAR_8, &VAR_12);
            VAR_8 += VAR_12;
            VAR_14 = FUNC_6 (VAR_6, VAR_8, &VAR_12);
            VAR_8 += VAR_12;

            if (! VAR_10)
       FUNC_0 (&VAR_2,
    "debug info gives macro %s outside of any file: %s",
    VAR_11 ==
    132 ? "definition" : VAR_11 ==
    129 ? "undefinition" :
    "something-or-other", VAR_14);
            else
              {
                if (VAR_11 == 132)
                  FUNC_4 (VAR_10, VAR_13, VAR_14);
                else if (VAR_11 == 129)
                  FUNC_3 (VAR_10, VAR_13, VAR_14);
              }
          }
          break;

        case 130:
          {
            int VAR_15;
            int VAR_16, VAR_17;

            VAR_16 = FUNC_7 (VAR_6, VAR_8, &VAR_15);
            VAR_8 += VAR_15;
            VAR_17 = FUNC_7 (VAR_6, VAR_8, &VAR_15);
            VAR_8 += VAR_15;

            VAR_10 = FUNC_2 (VAR_17, VAR_16,
                                             VAR_10, VAR_5,
                                             VAR_3, VAR_7->objfile);
          }
          break;

        case 131:
          if (! VAR_10)
     FUNC_0 (&VAR_2,
         "macro debug info has an unmatched `close_file' directive");
          else
            {
              VAR_10 = VAR_10->included_by;
              if (! VAR_10)
                {
                  enum dwarf_macinfo_record_type VAR_18;







                  if (VAR_8 >= VAR_9)
                    {
        FUNC_1 ();
                      return;
                    }



                  VAR_18 = FUNC_5 (VAR_6, VAR_8);
                  if (VAR_18 != 0)
      FUNC_0 (&VAR_2,
          "no terminating 0-type entry for macros in `.debug_macinfo' section");

                  return;
                }
            }
          break;

        case 128:
          {
            int VAR_19;
            int VAR_20;
            char *VAR_21;

            VAR_20 = FUNC_7 (VAR_6, VAR_8, &VAR_19);
            VAR_8 += VAR_19;
            VAR_21 = FUNC_6 (VAR_6, VAR_8, &VAR_19);
            VAR_8 += VAR_19;


          }
          break;
        }
    }
}
