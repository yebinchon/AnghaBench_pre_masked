
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int rtx ;
struct TYPE_3__ {int (* globalize_label ) (int ,char*) ;} ;
struct TYPE_4__ {TYPE_1__ asm_out; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int ,char*) ;
 TYPE_2__ VAR_3 ;

void
FUNC_11 (rtx VAR_4, rtx VAR_5, rtx VAR_6)
{
  rtx VAR_7, VAR_8 = FUNC_0 (8);



  if (!VAR_1)
    {
      static bool VAR_9 = 0;

      if (!VAR_9)
 {
   VAR_9 = 1;
   (*VAR_3.asm_out.globalize_label) (VAR_2,
           "__ia64_trampoline");
 }
    }


  VAR_4 = FUNC_1 (VAR_0, VAR_4);
  VAR_5 = FUNC_1 (VAR_0, VAR_5);
  VAR_6 = FUNC_1 (VAR_0, VAR_6);


  VAR_7 = FUNC_6 (VAR_0);
  FUNC_4 (VAR_7, VAR_4);



  FUNC_4 (FUNC_7 (VAR_0, VAR_7),
    FUNC_8 (VAR_0, "__ia64_trampoline"));
  FUNC_3 (FUNC_5 (VAR_7, VAR_7, VAR_8));

  FUNC_4 (FUNC_7 (VAR_0, VAR_7),
    FUNC_2 (FUNC_9 (VAR_4, 16)));
  FUNC_3 (FUNC_5 (VAR_7, VAR_7, VAR_8));


  FUNC_4 (FUNC_7 (VAR_0, VAR_7), VAR_5);
  FUNC_3 (FUNC_5 (VAR_7, VAR_7, VAR_8));


  FUNC_4 (FUNC_7 (VAR_0, VAR_7), VAR_6);
}
