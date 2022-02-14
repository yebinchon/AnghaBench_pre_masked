
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct real_format {scalar_t__ signbit_ro; scalar_t__ signbit_rw; int has_signed_zero; } ;
typedef scalar_t__ rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
struct TYPE_8__ {TYPE_2__* handlers; } ;
struct TYPE_7__ {TYPE_1__* handlers; } ;
struct TYPE_6__ {scalar_t__ insn_code; } ;
struct TYPE_5__ {scalar_t__ insn_code; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 struct real_format* FUNC_3 (int) ;
 int FUNC_4 (int) ;
 TYPE_4__* VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_5 (int,int ,scalar_t__,scalar_t__,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_6 (int,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_7 (int,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int) ;
 int FUNC_8 (int) ;
 TYPE_3__* VAR_7 ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ,int,scalar_t__,int) ;

rtx
FUNC_11 (rtx VAR_8, rtx VAR_9, rtx VAR_10)
{
  enum machine_mode VAR_11 = FUNC_2 (VAR_8);
  const struct real_format *VAR_12;
  bool VAR_13;
  rtx VAR_14;

  FUNC_8 (FUNC_4 (VAR_11));
  FUNC_8 (FUNC_2 (VAR_9) == VAR_11);


  VAR_14 = FUNC_5 (VAR_11, VAR_6, VAR_8, VAR_9,
         VAR_10, 0, VAR_4);
  if (VAR_14)
    return VAR_14;

  VAR_12 = FUNC_3 (VAR_11);
  if (VAR_12 == ((void*)0) || !VAR_12->has_signed_zero)
    return VAR_3;

  VAR_13 = 0;
  if (FUNC_1 (VAR_8) == VAR_2)
    {
      if (FUNC_9 (FUNC_0 (VAR_8)))
 VAR_8 = FUNC_10 (VAR_0, VAR_11, VAR_8, VAR_11);
      VAR_13 = 1;
    }

  if (VAR_12->signbit_ro >= 0
      && (FUNC_1 (VAR_8) == VAR_2
   || (VAR_7->handlers[VAR_11].insn_code != VAR_1
       && VAR_5->handlers[VAR_11].insn_code != VAR_1)))
    {
      VAR_14 = FUNC_6 (VAR_11, VAR_8, VAR_9, VAR_10,
         VAR_12->signbit_ro, VAR_13);
      if (VAR_14)
 return VAR_14;
    }

  if (VAR_12->signbit_rw < 0)
    return VAR_3;
  return FUNC_7 (VAR_11, VAR_8, VAR_9, VAR_10,
         VAR_12->signbit_rw, VAR_13);
}
