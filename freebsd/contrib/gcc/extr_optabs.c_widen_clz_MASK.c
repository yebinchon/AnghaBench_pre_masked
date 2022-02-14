
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ rtx ;
typedef enum mode_class { ____Placeholder_mode_class } mode_class ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
struct TYPE_5__ {TYPE_1__* handlers; } ;
struct TYPE_4__ {scalar_t__ insn_code; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int,int ,scalar_t__,int ,scalar_t__,int,int ) ;
 scalar_t__ FUNC_7 (int,TYPE_2__*,scalar_t__,int ,int) ;
 scalar_t__ FUNC_8 (int) ;
 scalar_t__ FUNC_9 () ;
 int VAR_5 ;
 scalar_t__ FUNC_10 (scalar_t__,int,int,int,int) ;

__attribute__((used)) static rtx
FUNC_11 (enum machine_mode VAR_6, rtx VAR_7, rtx VAR_8)
{
  enum mode_class VAR_9 = FUNC_3 (VAR_6);
  if (FUNC_0 (VAR_9))
    {
      enum machine_mode VAR_10;
      for (VAR_10 = FUNC_4 (VAR_6);
    VAR_10 != VAR_3;
    VAR_10 = FUNC_4 (VAR_10))
 {
   if (VAR_4->handlers[(int) VAR_10].insn_code
       != VAR_0)
     {
       rtx VAR_11, VAR_12, VAR_13;

       VAR_13 = FUNC_9 ();

       if (VAR_8 == 0)
  VAR_8 = FUNC_8 (VAR_6);
       VAR_11 = FUNC_10 (VAR_7, VAR_10, VAR_6, 1, 0);
       VAR_12 = FUNC_7 (VAR_10, VAR_4, VAR_11, VAR_1, 1);
       if (VAR_12 != 0)
  VAR_12 = FUNC_6 (VAR_10, VAR_5, VAR_12,
         FUNC_1 (FUNC_2 (VAR_10)
           - FUNC_2 (VAR_6)),
         VAR_8, 1, VAR_2);
       if (VAR_12 == 0)
  FUNC_5 (VAR_13);

       return VAR_12;
     }
 }
    }
  return 0;
}
