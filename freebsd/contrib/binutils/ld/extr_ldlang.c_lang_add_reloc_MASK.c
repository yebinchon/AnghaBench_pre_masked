
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef union etree_union {int dummy; } etree_union ;
typedef int reloc_howto_type ;
struct TYPE_3__ {char const* name; scalar_t__ output_offset; int * output_section; scalar_t__ addend_value; union etree_union* addend_exp; int * section; int * howto; int reloc; } ;
typedef TYPE_1__ lang_reloc_statement_type ;
typedef int bfd_reloc_code_real_type ;
typedef int asection ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ,int ) ;
 int VAR_1 ;

void
FUNC_1 (bfd_reloc_code_real_type VAR_2,
  reloc_howto_type *VAR_3,
  asection *VAR_4,
  const char *VAR_5,
  union etree_union *VAR_6)
{
  lang_reloc_statement_type *VAR_7 = FUNC_0 (VAR_0, VAR_1);

  VAR_7->reloc = VAR_2;
  VAR_7->howto = VAR_3;
  VAR_7->section = VAR_4;
  VAR_7->name = VAR_5;
  VAR_7->addend_exp = VAR_6;

  VAR_7->addend_value = 0;
  VAR_7->output_section = ((void*)0);
  VAR_7->output_offset = 0;
}
