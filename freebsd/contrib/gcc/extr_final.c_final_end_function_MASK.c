
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int (* end_epilogue ) (int ,int ) ;int (* end_function ) (int ) ;} ;
struct TYPE_4__ {int (* function_epilogue ) (int ,int ) ;} ;
struct TYPE_5__ {TYPE_1__ asm_out; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 TYPE_3__* VAR_3 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 () ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 TYPE_2__ VAR_7 ;
 scalar_t__ VAR_8 ;

void
FUNC_7 (void)
{
  FUNC_0 ();

  (*VAR_3->end_function) (VAR_4);



  VAR_7.asm_out.function_epilogue (VAR_2, FUNC_3 ());


  (*VAR_3->end_epilogue) (VAR_6, VAR_5);






}
