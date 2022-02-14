
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_14__ ;
typedef struct TYPE_16__ TYPE_13__ ;
typedef struct TYPE_15__ TYPE_12__ ;


struct TYPE_21__ {int value; } ;
struct TYPE_22__ {TYPE_4__ def; } ;
struct bfd_link_hash_entry {TYPE_5__ u; } ;
struct TYPE_25__ {int bfd_section; } ;
typedef TYPE_8__ lang_output_section_statement_type ;
struct TYPE_26__ {TYPE_14__* exp; } ;
typedef TYPE_9__ lang_assignment_statement_type ;
typedef int etree_type ;
typedef int bfd_vma ;
typedef int bfd_boolean ;
struct TYPE_24__ {TYPE_6__* section; int value; scalar_t__ valid_p; } ;
struct TYPE_23__ {scalar_t__ vma; } ;
struct TYPE_20__ {char* dst; int * src; } ;
struct TYPE_19__ {int * child; } ;
struct TYPE_18__ {scalar_t__ node_class; } ;
struct TYPE_17__ {TYPE_3__ assign; TYPE_2__ assert_s; TYPE_1__ type; } ;
struct TYPE_16__ {TYPE_7__ result; } ;
struct TYPE_15__ {int hash; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 struct bfd_link_hash_entry* FUNC_0 (int ,char*,scalar_t__,scalar_t__,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (TYPE_14__*) ;
 TYPE_13__ VAR_4 ;
 TYPE_12__ VAR_5 ;
 int FUNC_3 (char*,...) ;
 int VAR_6 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (char const*,int *) ;

__attribute__((used)) static void
FUNC_7 (lang_assignment_statement_type *VAR_7,
    lang_output_section_statement_type *VAR_8)
{
  unsigned int VAR_9;
  bfd_boolean VAR_10;
  bfd_boolean VAR_11 = VAR_2;
  etree_type *VAR_12;

  for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++)
    FUNC_5 ();

  if (VAR_7->exp->type.node_class == VAR_3)
    {
      VAR_10 = VAR_0;
      VAR_12 = VAR_7->exp->assert_s.child;
      VAR_11 = VAR_2;
    }
  else
    {
      const char *VAR_13 = VAR_7->exp->assign.dst;

      VAR_10 = (VAR_13[0] == '.' && VAR_13[1] == 0);
      VAR_12 = VAR_7->exp->assign.src;
      VAR_11 = VAR_10 || (FUNC_6 (VAR_13, VAR_12) == VAR_0);
    }

  FUNC_1 (VAR_12, VAR_8->bfd_section, &VAR_6);
  if (VAR_4.result.valid_p)
    {
      bfd_vma VAR_14;

      if (VAR_11)
 {
   VAR_14 = VAR_4.result.value;

   if (VAR_4.result.section)
     VAR_14 += VAR_4.result.section->vma;

   FUNC_3 ("0x%V", VAR_14);
   if (VAR_10)
     VAR_6 = VAR_14;
 }
      else
 {
   struct bfd_link_hash_entry *VAR_15;

   VAR_15 = FUNC_0 (VAR_5.hash, VAR_7->exp->assign.dst,
        VAR_0, VAR_0, VAR_2);
   if (VAR_15)
     {
       VAR_14 = VAR_15->u.def.value;

       if (VAR_4.result.section)
       VAR_14 += VAR_4.result.section->vma;

       FUNC_3 ("[0x%V]", VAR_14);
     }
   else
     FUNC_3 ("[unresolved]");
 }
    }
  else
    {
      FUNC_3 ("*undef*   ");



    }

  FUNC_3 ("                ");
  FUNC_2 (VAR_7->exp);
  FUNC_4 ();
}
