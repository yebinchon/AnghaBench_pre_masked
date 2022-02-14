
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct reg_pref {int dummy; } ;
struct costs {int dummy; } ;
typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
struct TYPE_2__ {int n_operands; char** constraints; int* operand_mode; int * operand; int n_alternatives; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const,char const*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int ) ;
 int VAR_5 ;
 int FUNC_5 (int ,int ) ;
 int VAR_6 ;
 struct costs VAR_7 ;
 TYPE_1__ VAR_8 ;
 int FUNC_6 (int ,int ,int ,int ,int ,int) ;
 int FUNC_7 (int ,int,int *,int*,char const**,int ,struct costs*,struct reg_pref*) ;

__attribute__((used)) static void
FUNC_8 (rtx VAR_9, struct costs *VAR_10,
        struct reg_pref *VAR_11)
{
  const char *VAR_12[VAR_1];
  enum machine_mode VAR_13[VAR_1];
  int VAR_14;

  for (VAR_14 = 0; VAR_14 < VAR_8.n_operands; VAR_14++)
    {
      VAR_12[VAR_14] = VAR_8.constraints[VAR_14];
      VAR_13[VAR_14] = VAR_8.operand_mode[VAR_14];
    }







  for (VAR_14 = 0; VAR_14 < VAR_8.n_operands; VAR_14++)
    {
      VAR_10[VAR_14] = VAR_7;

      if (FUNC_1 (VAR_8.operand[VAR_14]) == VAR_4)
 VAR_8.operand[VAR_14] = FUNC_4 (VAR_8.operand[VAR_14]);

      if (FUNC_3 (VAR_8.operand[VAR_14]))
 FUNC_6 (FUNC_2 (VAR_8.operand[VAR_14]),
        FUNC_5 (VAR_8.operand[VAR_14], 0),
        0, VAR_2, VAR_3, VAR_6 * 2);
      else if (VAR_12[VAR_14][0] == 'p'
        || FUNC_0 (VAR_12[VAR_14][0], VAR_12[VAR_14]))
 FUNC_6 (VAR_5, VAR_8.operand[VAR_14], 0, VAR_0,
        VAR_3, VAR_6 * 2);
    }





  for (VAR_14 = 0; VAR_14 < (int) VAR_8.n_operands - 1; VAR_14++)
    if (VAR_12[VAR_14][0] == '%')
      {
 const char *VAR_15[VAR_1];
 int VAR_16;




 for (VAR_16 = 0; VAR_16 < VAR_8.n_operands; VAR_16++)
   VAR_15[VAR_16] = VAR_12[VAR_16];

 VAR_15[VAR_14] = VAR_12[VAR_14+1];
 VAR_15[VAR_14+1] = VAR_12[VAR_14];
 FUNC_7 (VAR_8.n_alternatives, VAR_8.n_operands,
       VAR_8.operand, VAR_13,
       VAR_15, VAR_9, VAR_10, VAR_11);
      }

  FUNC_7 (VAR_8.n_alternatives, VAR_8.n_operands,
        VAR_8.operand, VAR_13,
        VAR_12, VAR_9, VAR_10, VAR_11);
}
