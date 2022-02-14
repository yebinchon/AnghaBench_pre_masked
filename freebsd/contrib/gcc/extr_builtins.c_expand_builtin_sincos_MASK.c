
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tree ;
typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
struct TYPE_5__ {TYPE_1__* handlers; } ;
struct TYPE_4__ {scalar_t__ insn_code; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_4 ;
 int FUNC_5 (int ) ;
 int VAR_5 ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_2__*,int ,int ,int ,int ) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 TYPE_2__* VAR_6 ;
 int FUNC_11 (int ,int ,int ,int ,int ) ;

__attribute__((used)) static rtx
FUNC_12 (tree VAR_7)
{
  rtx VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
  tree VAR_13 = FUNC_1 (VAR_7, 1);
  enum machine_mode VAR_14;
  tree VAR_15, VAR_16, VAR_17;
  int VAR_18;

  if (!FUNC_11 (VAR_13, VAR_3,
    VAR_2, VAR_2, VAR_4))
    return 0;

  VAR_15 = FUNC_3 (VAR_13);
  VAR_16 = FUNC_3 (FUNC_0 (VAR_13));
  VAR_17 = FUNC_3 (FUNC_0 (FUNC_0 (VAR_13)));


  VAR_14 = FUNC_4 (FUNC_2 (VAR_15));


  if (VAR_6->handlers[(int) VAR_14].insn_code == VAR_0)
    return VAR_1;

  VAR_11 = FUNC_10 (VAR_14);
  VAR_12 = FUNC_10 (VAR_14);

  VAR_8 = FUNC_7 (VAR_15);
  VAR_9 = FUNC_7 (FUNC_5 (VAR_16));
  VAR_10 = FUNC_7 (FUNC_5 (VAR_17));



  VAR_18 = FUNC_8 (VAR_6, VAR_8, VAR_12, VAR_11, 0);
  FUNC_9 (VAR_18);



  FUNC_6 (VAR_9, VAR_11);
  FUNC_6 (VAR_10, VAR_12);

  return VAR_5;
}
