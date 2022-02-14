
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union i386_op {int dummy; } i386_op ;
typedef enum bfd_reloc_code_real { ____Placeholder_bfd_reloc_code_real } bfd_reloc_code_real ;
struct TYPE_2__ {unsigned int* types; int* reloc; union i386_op* op; } ;


 TYPE_1__ VAR_0 ;

__attribute__((used)) static void
FUNC_0 (int VAR_1, int VAR_2)
{
  union i386_op VAR_3;
  unsigned int VAR_4;
  enum bfd_reloc_code_real VAR_5;

  VAR_4 = VAR_0.types[VAR_2];
  VAR_0.types[VAR_2] = VAR_0.types[VAR_1];
  VAR_0.types[VAR_1] = VAR_4;
  VAR_3 = VAR_0.op[VAR_2];
  VAR_0.op[VAR_2] = VAR_0.op[VAR_1];
  VAR_0.op[VAR_1] = VAR_3;
  VAR_5 = VAR_0.reloc[VAR_2];
  VAR_0.reloc[VAR_2] = VAR_0.reloc[VAR_1];
  VAR_0.reloc[VAR_1] = VAR_5;
}
