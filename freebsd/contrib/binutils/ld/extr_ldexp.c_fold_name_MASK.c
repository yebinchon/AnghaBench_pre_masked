
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_9__ ;
typedef struct TYPE_33__ TYPE_8__ ;
typedef struct TYPE_32__ TYPE_7__ ;
typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_20__ ;
typedef struct TYPE_25__ TYPE_1__ ;
typedef struct TYPE_24__ TYPE_19__ ;
typedef struct TYPE_23__ TYPE_16__ ;
typedef struct TYPE_22__ TYPE_12__ ;
typedef struct TYPE_21__ TYPE_11__ ;


struct TYPE_28__ {int * next; int * abfd; } ;
struct TYPE_27__ {int value; TYPE_20__* section; } ;
struct TYPE_29__ {TYPE_3__ undef; TYPE_2__ def; } ;
struct bfd_link_hash_entry {TYPE_4__ u; int type; } ;
struct TYPE_31__ {TYPE_9__* bfd_section; int processed_vma; int * load_base; int processed_lma; } ;
typedef TYPE_6__ lang_output_section_statement_type ;
struct TYPE_32__ {int length; int origin; } ;
typedef TYPE_7__ lang_memory_region_type ;
struct TYPE_30__ {char* name; } ;
struct TYPE_25__ {int node_code; } ;
struct TYPE_33__ {TYPE_5__ name; TYPE_1__ type; } ;
typedef TYPE_8__ etree_type ;
typedef int bfd_vma ;
struct TYPE_34__ {int lma; int size; int alignment_power; } ;
typedef TYPE_9__ asection ;
struct TYPE_26__ {int output_offset; TYPE_9__* output_section; } ;
struct TYPE_24__ {struct bfd_link_hash_entry* undefs_tail; } ;
struct TYPE_21__ {int value; int valid_p; int section; } ;
struct TYPE_23__ {int phase; int assigning_to_dot; int dot; TYPE_11__ result; } ;
struct TYPE_22__ {TYPE_19__* hash; } ;






 int FUNC_0 () ;
 int VAR_0 ;






 int VAR_1 ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_20__*) ;
 int FUNC_5 (TYPE_19__*,struct bfd_link_hash_entry*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,TYPE_12__*) ;
 struct bfd_link_hash_entry* FUNC_8 (int ,TYPE_12__*,char*,int ,int ,int ) ;
 int VAR_8 ;
 int FUNC_9 (int ,...) ;
 int FUNC_10 (int *) ;
 TYPE_16__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 TYPE_7__* FUNC_11 (char*,int ) ;
 TYPE_6__* FUNC_12 (char*) ;
 int VAR_13 ;
 int FUNC_13 (char*) ;
 int FUNC_14 (char*) ;
 TYPE_12__ VAR_14 ;
 int FUNC_15 () ;
 int FUNC_16 (TYPE_11__*,int ,int) ;
 int FUNC_17 (int) ;
 int FUNC_18 (int,int *,TYPE_9__*) ;
 int FUNC_19 (int ) ;
 int VAR_15 ;
 int FUNC_20 (char*,char*) ;

__attribute__((used)) static void
FUNC_21 (etree_type *VAR_16)
{
  FUNC_16 (&VAR_9.result, 0, sizeof (VAR_9.result));

  switch (VAR_16->type.node_code)
    {
    case 128:
      if (VAR_9.phase != VAR_11)
 {
   bfd_vma VAR_17 = 0;


   if (VAR_9.phase != VAR_12)
     VAR_17 = FUNC_7 (VAR_15, &VAR_14);
   FUNC_17 (VAR_17);
 }
      break;

    case 134:
      if (VAR_9.phase == VAR_11)
 FUNC_14 (VAR_16->name.name);
      else
 {
   struct bfd_link_hash_entry *VAR_18;
   int VAR_19
     = FUNC_13 (VAR_16->name.name);

   VAR_18 = FUNC_8 (VAR_15, &VAR_14,
         VAR_16->name.name,
         VAR_0, VAR_0, VAR_1);
   VAR_9.result.value = (VAR_18 != ((void*)0)
    && (VAR_18->type == VAR_4
        || VAR_18->type == VAR_5
        || VAR_18->type == VAR_3)
    && (VAR_19 == VAR_13
        || VAR_19 == -1));
   VAR_9.result.section = VAR_2;
   VAR_9.result.valid_p = VAR_1;
 }
      break;

    case 131:
      if (VAR_9.phase == VAR_11)
 ;
      else if (VAR_16->name.name[0] == '.' && VAR_16->name.name[1] == 0)
 FUNC_19 (VAR_9.dot);
      else
 {
   struct bfd_link_hash_entry *VAR_20;

   VAR_20 = FUNC_8 (VAR_15, &VAR_14,
         VAR_16->name.name,
         VAR_1, VAR_0, VAR_1);
   if (!VAR_20)
     FUNC_9 (FUNC_1("%P%F: bfd_link_hash_lookup failed: %E\n"));
   else if (VAR_20->type == VAR_4
     || VAR_20->type == VAR_5)
     {
       if (FUNC_4 (VAR_20->u.def.section))
  FUNC_17 (VAR_20->u.def.value);
       else
  {
    asection *VAR_21;

    VAR_21 = VAR_20->u.def.section->output_section;
    if (VAR_21 == ((void*)0))
      {
        if (VAR_9.phase != VAR_12)
   FUNC_9 (FUNC_1("%X%S: unresolvable symbol `%s'"
     " referenced in expression\n"),
          VAR_16->name.name);
      }
    else
      FUNC_18 (VAR_20->u.def.value + VAR_20->u.def.section->output_offset,
        ((void*)0), VAR_21);
  }
     }
   else if (VAR_9.phase == VAR_10
     || VAR_9.assigning_to_dot)
     FUNC_9 (FUNC_1("%F%S: undefined symbol `%s' referenced in expression\n"),
     VAR_16->name.name);
   else if (VAR_20->type == VAR_6)
     {
       VAR_20->type = VAR_7;
       VAR_20->u.undef.abfd = ((void*)0);
       if (VAR_20->u.undef.next == ((void*)0) && VAR_20 != VAR_14.hash->undefs_tail)
  FUNC_5 (VAR_14.hash, VAR_20);
     }
 }
      break;

    case 137:
      if (VAR_9.phase != VAR_11)
 {
   lang_output_section_statement_type *VAR_22;

   VAR_22 = FUNC_12 (VAR_16->name.name);
   if (VAR_22 == ((void*)0))
     {
       if (VAR_9.phase == VAR_10)
  FUNC_9 (FUNC_1("%F%S: undefined section `%s' referenced in expression\n"),
         VAR_16->name.name);
     }
   else if (VAR_22->processed_vma)
     FUNC_18 (0, ((void*)0), VAR_22->bfd_section);
 }
      break;

    case 132:
      if (VAR_9.phase != VAR_11)
 {
   lang_output_section_statement_type *VAR_23;

   VAR_23 = FUNC_12 (VAR_16->name.name);
   if (VAR_23 == ((void*)0))
     {
       if (VAR_9.phase == VAR_10)
  FUNC_9 (FUNC_1("%F%S: undefined section `%s' referenced in expression\n"),
         VAR_16->name.name);
     }
   else if (VAR_23->processed_lma)
     {
       if (VAR_23->load_base == ((void*)0))
  FUNC_17 (VAR_23->bfd_section->lma);
       else
  {
    FUNC_10 (VAR_23->load_base);
    FUNC_15 ();
  }
     }
 }
      break;

    case 129:
    case 136:
      if (VAR_9.phase != VAR_11)
 {
   lang_output_section_statement_type *VAR_24;

   VAR_24 = FUNC_12 (VAR_16->name.name);
   if (VAR_24 == ((void*)0))
     {
       if (VAR_9.phase == VAR_10)
  FUNC_9 (FUNC_1("%F%S: undefined section `%s' referenced in expression\n"),
         VAR_16->name.name);
       FUNC_17 (0);
     }
   else if (VAR_24->processed_vma)
     {
       bfd_vma VAR_25;

       if (VAR_16->type.node_code == 129)
  VAR_25 = VAR_24->bfd_section->size / FUNC_6 (VAR_15);
       else
  VAR_25 = (bfd_vma)1 << VAR_24->bfd_section->alignment_power;

       FUNC_17 (VAR_25);
     }
 }
      break;

    case 133:
      {
        lang_memory_region_type *VAR_26;

        VAR_26 = FUNC_11 (VAR_16->name.name, VAR_0);
        if (VAR_26 != ((void*)0))
          FUNC_17 (VAR_26->length);
        else
          FUNC_9 (FUNC_1("%F%S: undefined MEMORY region `%s'"
     " referenced in expression\n"), VAR_16->name.name);
      }
      break;

    case 130:
      {
        lang_memory_region_type *VAR_27;

        VAR_27 = FUNC_11 (VAR_16->name.name, VAR_0);
        if (VAR_27 != ((void*)0))
          FUNC_17 (VAR_27->origin);
        else
          FUNC_9 (FUNC_1("%F%S: undefined MEMORY region `%s'"
     " referenced in expression\n"), VAR_16->name.name);
      }
      break;

    case 135:
      if (FUNC_20 (VAR_16->name.name, "MAXPAGESIZE") == 0)
 FUNC_17 (FUNC_3 (VAR_8));
      else if (FUNC_20 (VAR_16->name.name, "COMMONPAGESIZE") == 0)
 FUNC_17 (FUNC_2 (VAR_8));
      else
 FUNC_9 (FUNC_1("%F%S: unknown constant `%s' referenced in expression\n"),
        VAR_16->name.name);
      break;

    default:
      FUNC_0 ();
      break;
    }
}
