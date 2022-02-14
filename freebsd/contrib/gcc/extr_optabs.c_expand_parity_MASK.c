
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
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int,int ,scalar_t__,int ,scalar_t__,int,int ) ;
 scalar_t__ FUNC_5 (int,TYPE_2__*,scalar_t__,int ,int) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 () ;
 TYPE_2__* VAR_6 ;
 scalar_t__ FUNC_8 (scalar_t__,int,int,int,int) ;

__attribute__((used)) static rtx
FUNC_9 (enum machine_mode VAR_7, rtx VAR_8, rtx VAR_9)
{
  enum mode_class VAR_10 = FUNC_1 (VAR_7);
  if (FUNC_0 (VAR_10))
    {
      enum machine_mode VAR_11;
      for (VAR_11 = VAR_7; VAR_11 != VAR_3;
    VAR_11 = FUNC_2 (VAR_11))
 {
   if (VAR_6->handlers[(int) VAR_11].insn_code
       != VAR_0)
     {
       rtx VAR_12, VAR_13, VAR_14;

       VAR_14 = FUNC_7 ();

       if (VAR_9 == 0)
  VAR_9 = FUNC_6 (VAR_7);
       VAR_12 = FUNC_8 (VAR_8, VAR_11, VAR_7, 1, 0);
       VAR_13 = FUNC_5 (VAR_11, VAR_6, VAR_12, VAR_1,
      1);
       if (VAR_13 != 0)
  VAR_13 = FUNC_4 (VAR_11, VAR_4, VAR_13, VAR_5,
         VAR_9, 1, VAR_2);
       if (VAR_13 == 0)
  FUNC_3 (VAR_14);

       return VAR_13;
     }
 }
    }
  return 0;
}
