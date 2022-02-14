
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct insn_data {TYPE_1__* operand; } ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef enum extraction_pattern { ____Placeholder_extraction_pattern } extraction_pattern ;
struct TYPE_2__ {int mode; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 () ;
 struct insn_data* VAR_8 ;
 int VAR_9 ;

enum machine_mode
FUNC_1 (enum extraction_pattern VAR_10, int VAR_11)
{
  const struct insn_data *VAR_12;

  switch (VAR_10)
    {
    case 128:
      if (VAR_5)
 {
   VAR_12 = &VAR_8[VAR_2];
   break;
 }
      return VAR_6;

    case 130:
      if (VAR_3)
 {
   VAR_12 = &VAR_8[VAR_0];
   break;
 }
      return VAR_6;

    case 129:
      if (VAR_4)
 {
   VAR_12 = &VAR_8[VAR_1];
   break;
 }
      return VAR_6;

    default:
      FUNC_0 ();
    }

  if (VAR_11 == -1)
    return VAR_7;



  if (VAR_12->operand[VAR_11].mode == VAR_7)
    return VAR_9;
  return VAR_12->operand[VAR_11].mode;
}
