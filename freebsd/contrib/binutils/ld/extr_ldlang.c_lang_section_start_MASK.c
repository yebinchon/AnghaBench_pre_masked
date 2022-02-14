
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int segment_type ;
struct TYPE_3__ {char const* section_name; int const* segment; int * address; } ;
typedef TYPE_1__ lang_address_statement_type ;
typedef int etree_type ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ,int ) ;
 int VAR_1 ;

void
FUNC_1 (const char *VAR_2, etree_type *VAR_3,
      const segment_type *VAR_4)
{
  lang_address_statement_type *VAR_5;

  VAR_5 = FUNC_0 (VAR_0, VAR_1);
  VAR_5->section_name = VAR_2;
  VAR_5->address = VAR_3;
  VAR_5->segment = VAR_4;
}
