
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct read_pe_section_data {scalar_t__ rva_start; scalar_t__ vma_offset; } ;
typedef int bfd ;
struct TYPE_4__ {int name; } ;
typedef TYPE_1__ asection ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2 (bfd *VAR_1, asection *VAR_2, void *VAR_3)
{
  struct read_pe_section_data *VAR_4 = VAR_3;
  int VAR_5 = FUNC_1 (VAR_2->name);

  if (VAR_5 != VAR_0)
    {



      VAR_4[VAR_5].vma_offset
 = FUNC_0 (VAR_1, VAR_2) - VAR_4[VAR_5].rva_start;
    }
}
