
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int addend_exp; TYPE_2__* section; int * name; TYPE_5__* howto; TYPE_1__* output_section; scalar_t__ output_offset; } ;
typedef TYPE_3__ lang_reloc_statement_type ;
typedef scalar_t__ bfd_vma ;
typedef int bfd_size_type ;
struct TYPE_9__ {int name; } ;
struct TYPE_7__ {int * name; } ;
struct TYPE_6__ {scalar_t__ vma; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,int *,...) ;
 scalar_t__ VAR_1 ;
 int FUNC_5 () ;
 int FUNC_6 () ;

__attribute__((used)) static void
FUNC_7 (lang_reloc_statement_type *VAR_2)
{
  int VAR_3;
  bfd_vma VAR_4;
  bfd_size_type VAR_5;

  FUNC_3 ();
  for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
    FUNC_6 ();

  VAR_4 = VAR_2->output_offset;
  if (VAR_2->output_section != ((void*)0))
    VAR_4 += VAR_2->output_section->vma;

  VAR_5 = FUNC_1 (VAR_2->howto);

  FUNC_4 ("0x%V %W RELOC %s ", VAR_4, VAR_5, VAR_2->howto->name);

  if (VAR_2->name != ((void*)0))
    FUNC_4 ("%s+", VAR_2->name);
  else
    FUNC_4 ("%s+", VAR_2->section->name);

  FUNC_2 (VAR_2->addend_exp);

  FUNC_5 ();

  VAR_1 = VAR_4 + FUNC_0 (VAR_5);
}
