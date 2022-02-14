
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {unsigned int next_free_entry; scalar_t__ symbol; TYPE_1__* literals; } ;
typedef TYPE_3__ literal_pool ;
struct TYPE_6__ {scalar_t__ X_op; int X_add_number; scalar_t__ X_unsigned; scalar_t__ X_add_symbol; scalar_t__ X_op_symbol; } ;
struct TYPE_7__ {TYPE_1__ exp; } ;
struct TYPE_9__ {TYPE_2__ reloc; int error; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 TYPE_3__* FUNC_1 () ;
 TYPE_4__ VAR_5 ;

__attribute__((used)) static int
FUNC_2 (void)
{
  literal_pool * VAR_6;
  unsigned int VAR_7;

  VAR_6 = FUNC_1 ();


  for (VAR_7 = 0; VAR_7 < VAR_6->next_free_entry; VAR_7 ++)
    {
      if ((VAR_6->literals[VAR_7].X_op == VAR_5.reloc.exp.X_op)
   && (VAR_5.reloc.exp.X_op == VAR_2)
   && (VAR_6->literals[VAR_7].X_add_number
       == VAR_5.reloc.exp.X_add_number)
   && (VAR_6->literals[VAR_7].X_unsigned
       == VAR_5.reloc.exp.X_unsigned))
 break;

      if ((VAR_6->literals[VAR_7].X_op == VAR_5.reloc.exp.X_op)
   && (VAR_5.reloc.exp.X_op == VAR_3)
   && (VAR_6->literals[VAR_7].X_add_number
       == VAR_5.reloc.exp.X_add_number)
   && (VAR_6->literals[VAR_7].X_add_symbol
       == VAR_5.reloc.exp.X_add_symbol)
   && (VAR_6->literals[VAR_7].X_op_symbol
       == VAR_5.reloc.exp.X_op_symbol))
 break;
    }


  if (VAR_7 == VAR_6->next_free_entry)
    {
      if (VAR_7 >= VAR_1)
 {
   VAR_5.error = FUNC_0("literal pool overflow");
   return VAR_0;
 }

      VAR_6->literals[VAR_7] = VAR_5.reloc.exp;
      VAR_6->next_free_entry += 1;
    }

  VAR_5.reloc.exp.X_op = VAR_3;
  VAR_5.reloc.exp.X_add_number = ((int) VAR_7) * 4;
  VAR_5.reloc.exp.X_add_symbol = VAR_6->symbol;

  return VAR_4;
}
