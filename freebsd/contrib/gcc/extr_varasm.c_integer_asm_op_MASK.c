
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct asm_int_op {char const* hi; char const* si; char const* di; char const* ti; } ;
struct TYPE_3__ {char const* byte_op; struct asm_int_op unaligned_op; struct asm_int_op aligned_op; } ;
struct TYPE_4__ {TYPE_1__ asm_out; } ;


 TYPE_2__ VAR_0 ;

const char *
FUNC_0 (int VAR_1, int VAR_2)
{
  struct asm_int_op *VAR_3;

  if (VAR_2)
    VAR_3 = &VAR_0.asm_out.aligned_op;
  else
    VAR_3 = &VAR_0.asm_out.unaligned_op;

  switch (VAR_1)
    {
    case 1:
      return VAR_0.asm_out.byte_op;
    case 2:
      return VAR_3->hi;
    case 4:
      return VAR_3->si;
    case 8:
      return VAR_3->di;
    case 16:
      return VAR_3->ti;
    default:
      return ((void*)0);
    }
}
