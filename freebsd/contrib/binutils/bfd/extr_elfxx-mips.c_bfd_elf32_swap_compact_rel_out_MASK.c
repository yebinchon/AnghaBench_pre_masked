
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int bfd ;
struct TYPE_6__ {int reserved1; int reserved0; int offset; int id2; int num; int id1; } ;
struct TYPE_5__ {int reserved1; int reserved0; int offset; int id2; int num; int id1; } ;
typedef TYPE_1__ Elf32_compact_rel ;
typedef TYPE_2__ Elf32_External_compact_rel ;


 int FUNC_0 (int *,int ,int ) ;

__attribute__((used)) static void
FUNC_1 (bfd *VAR_0, const Elf32_compact_rel *VAR_1,
    Elf32_External_compact_rel *VAR_2)
{
  FUNC_0 (VAR_0, VAR_1->id1, VAR_2->id1);
  FUNC_0 (VAR_0, VAR_1->num, VAR_2->num);
  FUNC_0 (VAR_0, VAR_1->id2, VAR_2->id2);
  FUNC_0 (VAR_0, VAR_1->offset, VAR_2->offset);
  FUNC_0 (VAR_0, VAR_1->reserved0, VAR_2->reserved0);
  FUNC_0 (VAR_0, VAR_1->reserved1, VAR_2->reserved1);
}
