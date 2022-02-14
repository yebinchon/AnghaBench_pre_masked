
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int tree ;
typedef int rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef enum insn_code { ____Placeholder_insn_code } insn_code ;
struct TYPE_4__ {TYPE_1__* operand; } ;
struct TYPE_3__ {int (* predicate ) (int ,scalar_t__) ;} ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_6 (int ,int ,int ,int) ;
 int FUNC_7 (scalar_t__,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int,scalar_t__,int ,int ) ;
 int FUNC_10 (int ,int) ;
 TYPE_2__* VAR_2 ;
 int FUNC_11 (int ,scalar_t__) ;
 int FUNC_12 (int ,scalar_t__) ;

__attribute__((used)) static rtx
FUNC_13 (tree VAR_3, bool VAR_4, enum insn_code VAR_5)
{
  enum rtx_code VAR_6;
  tree VAR_7, VAR_8;
  rtx VAR_9, VAR_10;



  FUNC_8 (FUNC_0 (VAR_3));

  VAR_6 = FUNC_10 (FUNC_2 (VAR_3), VAR_4);
  VAR_7 = FUNC_3 (VAR_3, 0);
  VAR_8 = FUNC_3 (VAR_3, 1);


  VAR_9 = FUNC_6 (VAR_7, VAR_0, FUNC_5 (FUNC_4 (VAR_7)), 1);
  VAR_10 = FUNC_6 (VAR_8, VAR_0, FUNC_5 (FUNC_4 (VAR_8)), 1);

  if (!VAR_2[VAR_5].operand[4].predicate (VAR_9, FUNC_1 (VAR_9))
      && FUNC_1 (VAR_9) != VAR_1)
    VAR_9 = FUNC_7 (FUNC_1 (VAR_9), VAR_9);

  if (!VAR_2[VAR_5].operand[5].predicate (VAR_10, FUNC_1 (VAR_10))
      && FUNC_1 (VAR_10) != VAR_1)
    VAR_10 = FUNC_7 (FUNC_1 (VAR_10), VAR_10);

  return FUNC_9 (VAR_6, VAR_1, VAR_9, VAR_10);
}
