
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int rtx ;
struct TYPE_3__ {int total_size; scalar_t__ lr_save_offset; scalar_t__ push_p; scalar_t__ lr_save_p; } ;
typedef TYPE_1__ rs6000_stack_t ;
typedef int HOST_WIDE_INT ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,scalar_t__) ;
 TYPE_1__* FUNC_4 () ;
 int VAR_4 ;

void
FUNC_5 (rtx VAR_5, rtx VAR_6)
{
  rs6000_stack_t *VAR_7 = FUNC_4 ();
  rtx VAR_8[2];

  VAR_8[0] = VAR_5;
  VAR_8[1] = VAR_6;

  if (VAR_7->lr_save_p)
    {
      rtx VAR_9 = VAR_4;
      HOST_WIDE_INT VAR_10 = 0;
      rtx VAR_11;

      if (VAR_3
   || VAR_2
   || VAR_7->total_size > 32767)
 {
   VAR_11 = FUNC_1 (VAR_1, VAR_9);
   FUNC_0 (VAR_8[1], VAR_11);
   VAR_9 = VAR_8[1];
 }
      else if (VAR_7->push_p)
 VAR_10 = VAR_7->total_size;

      VAR_11 = FUNC_3 (VAR_9, VAR_7->lr_save_offset + VAR_10);
      VAR_11 = FUNC_1 (VAR_1, VAR_11);
      FUNC_0 (VAR_11, VAR_8[0]);
    }
  else
    FUNC_0 (FUNC_2 (VAR_1, VAR_0), VAR_8[0]);
}
