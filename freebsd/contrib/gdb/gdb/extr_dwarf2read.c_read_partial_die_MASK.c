
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct partial_die_info {int offset; unsigned int abbrev; scalar_t__ lowpc; scalar_t__ highpc; int has_type; char* sibling; int has_pc_info; void* is_external; int * name; void* is_declaration; void* language; int locdesc; int has_children; int tag; } ;
struct dwarf2_cu {int dummy; } ;
struct attribute {int name; int form; } ;
struct abbrev_info {unsigned int num_attrs; int * attrs; int has_children; int tag; } ;
typedef int bfd ;


 void* FUNC_0 (struct attribute*) ;
 int FUNC_1 (struct attribute*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_2 (struct attribute*) ;
 void* FUNC_3 (struct attribute*) ;
 int VAR_3 ;
 int FUNC_4 (struct attribute*) ;
 int FUNC_5 (int *) ;
 char* FUNC_6 (int *) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 () ;
 int FUNC_9 (struct attribute*,struct dwarf2_cu*) ;
 int FUNC_10 (char*,char*) ;
 struct abbrev_info* FUNC_11 (unsigned int,struct dwarf2_cu*) ;
 char* VAR_4 ;
 int FUNC_12 (char*,unsigned int,char*) ;
 char* FUNC_13 (struct attribute*,int *,int *,char*,struct dwarf2_cu*) ;
 unsigned int FUNC_14 (int *,char*,unsigned int*) ;
 int VAR_5 ;
 struct partial_die_info VAR_6 ;

__attribute__((used)) static char *
FUNC_15 (struct partial_die_info *VAR_7, bfd *VAR_8,
    char *VAR_9, struct dwarf2_cu *VAR_10)
{
  unsigned int VAR_11, VAR_12, VAR_13;
  struct abbrev_info *VAR_14;
  struct attribute VAR_15;
  struct attribute VAR_16;
  int VAR_17 = 0;
  int VAR_18 = 0;
  int VAR_19 = 0;

  *VAR_7 = VAR_6;
  VAR_11 = FUNC_14 (VAR_8, VAR_9, &VAR_12);
  VAR_9 += VAR_12;
  if (!VAR_11)
    return VAR_9;

  VAR_14 = FUNC_11 (VAR_11, VAR_10);
  if (!VAR_14)
    {
      FUNC_12 ("Dwarf Error: Could not find abbrev number %d [in module %s]", VAR_11,
        FUNC_6 (VAR_8));
    }
  VAR_7->offset = VAR_9 - VAR_4;
  VAR_7->tag = VAR_14->tag;
  VAR_7->has_children = VAR_14->has_children;
  VAR_7->abbrev = VAR_11;

  for (VAR_13 = 0; VAR_13 < VAR_14->num_attrs; ++VAR_13)
    {
      VAR_9 = FUNC_13 (&VAR_15, &VAR_14->attrs[VAR_13], VAR_8, VAR_9, VAR_10);



      switch (VAR_15.name)
 {
 case 131:


   if (VAR_7->name == ((void*)0))
     VAR_7->name = FUNC_2 (&VAR_15);
   break;
 case 139:
   VAR_7->name = FUNC_2 (&VAR_15);
   break;
 case 132:
   VAR_18 = 1;
   VAR_7->lowpc = FUNC_0 (&VAR_15);
   break;
 case 135:
   VAR_19 = 1;
   VAR_7->highpc = FUNC_0 (&VAR_15);
   break;
 case 133:

          if (FUNC_4 (&VAR_15))
            {
        VAR_7->locdesc = FUNC_1 (&VAR_15);
            }
          else if (VAR_15.form == VAR_0 || VAR_15.form == VAR_1)
            {
       FUNC_8 ();
            }
          else
            {
       FUNC_10 ("DW_AT_location",
           "partial symbol information");
            }
   break;
 case 134:
   VAR_7->language = FUNC_3 (&VAR_15);
   break;
 case 136:
   VAR_7->is_external = FUNC_3 (&VAR_15);
   break;
 case 137:
   VAR_7->is_declaration = FUNC_3 (&VAR_15);
   break;
 case 128:
   VAR_7->has_type = 1;
   break;
 case 138:
 case 129:
   VAR_17 = 1;
   VAR_16 = VAR_15;
   break;
 case 130:


   if (VAR_15.form == VAR_2)
     FUNC_7 (&VAR_5, "ignoring absolute DW_AT_sibling");
   else
     VAR_7->sibling =
       VAR_4 + FUNC_9 (&VAR_15, VAR_10);
   break;
 default:
   break;
 }
    }




  if (VAR_17 && VAR_7->name == ((void*)0))
    {
      struct partial_die_info VAR_20;
      char *VAR_21;

      VAR_21 = VAR_4
 + FUNC_9 (&VAR_16, VAR_10);
      FUNC_15 (&VAR_20, VAR_8, VAR_21, VAR_10);
      if (VAR_20.name)
 {
   VAR_7->name = VAR_20.name;


   if (VAR_20.is_external)
     VAR_7->is_external = VAR_20.is_external;
 }
    }
  if (VAR_18 && VAR_19
      && VAR_7->lowpc < VAR_7->highpc
      && (VAR_7->lowpc != 0
   || (FUNC_5 (VAR_8) & VAR_3)))
    VAR_7->has_pc_info = 1;
  return VAR_9;
}
