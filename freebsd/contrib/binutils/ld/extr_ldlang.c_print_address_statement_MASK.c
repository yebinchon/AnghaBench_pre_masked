
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int address; int section_name; } ;
typedef TYPE_1__ lang_address_statement_type ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 () ;

__attribute__((used)) static void
FUNC_4 (lang_address_statement_type *VAR_0)
{
  FUNC_2 (FUNC_0("Address of section %s set to "), VAR_0->section_name);
  FUNC_1 (VAR_0->address);
  FUNC_3 ();
}
