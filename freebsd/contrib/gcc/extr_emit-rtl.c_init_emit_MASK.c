
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct function {TYPE_1__* emit; } ;
struct emit_status {int dummy; } ;
typedef int rtx ;
struct TYPE_2__ {int regno_pointer_align_length; int regno_pointer_align; } ;
typedef int REG_POINTER ;
typedef int REGNO_POINTER_ALIGN ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct function* VAR_6 ;
 int VAR_7 ;
 int * VAR_8 ;
 int VAR_9 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_10 ;
 int * VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (void*,int ,int) ;
 void* VAR_13 ;
 void* VAR_14 ;
 int * VAR_15 ;
 int VAR_16 ;

void
FUNC_4 (void)
{
  struct function *VAR_17 = VAR_6;

  VAR_17->emit = FUNC_0 (sizeof (struct emit_status));
  VAR_8 = ((void*)0);
  VAR_11 = ((void*)0);
  VAR_7 = 1;
  VAR_13 = VAR_3 + 1;
  VAR_12 = VAR_5;
  VAR_9 = VAR_10;
  VAR_15 = ((void*)0);



  VAR_17->emit->regno_pointer_align_length = VAR_3 + 101;

  VAR_17->emit->regno_pointer_align
    = FUNC_1 (VAR_17->emit->regno_pointer_align_length
    * sizeof (unsigned char));

  VAR_14
    = FUNC_0 (VAR_17->emit->regno_pointer_align_length * sizeof (rtx));


  FUNC_3 (VAR_14,
   VAR_16,
   VAR_1 * sizeof (rtx));


  FUNC_2 (VAR_17->emit);



  REG_POINTER (VAR_18) = 1;
  REG_POINTER (VAR_19) = 1;
  REG_POINTER (VAR_20) = 1;
  REG_POINTER (VAR_21) = 1;

  REG_POINTER (VAR_22) = 1;
  REG_POINTER (VAR_23) = 1;
  REG_POINTER (VAR_24) = 1;
  REG_POINTER (VAR_25) = 1;
  REG_POINTER (VAR_26) = 1;
}
