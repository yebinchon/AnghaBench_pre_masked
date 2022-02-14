
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int (* finish ) (int ) ;} ;
struct TYPE_7__ {int (* final_write_globals ) () ;} ;
struct TYPE_9__ {TYPE_2__ decls; int (* clear_binding_stack ) () ;int (* parse_file ) (int ) ;} ;
struct TYPE_6__ {int (* file_end ) () ;} ;
struct TYPE_8__ {TYPE_1__ asm_out; } ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 TYPE_5__* VAR_5 ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 () ;
 scalar_t__ VAR_6 ;
 int FUNC_6 () ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_7 (int ,char*,char*,char*) ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;
 TYPE_4__ VAR_10 ;
 int VAR_11 ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_14 (int ) ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 int FUNC_17 (int ) ;
 int FUNC_18 () ;
 TYPE_3__ VAR_14 ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ) ;
 char* VAR_15 ;
 int FUNC_21 () ;

__attribute__((used)) static void
FUNC_22 (void)
{


  FUNC_8 ();
  FUNC_9 (VAR_11);
  FUNC_2 (VAR_4);

  FUNC_20 (VAR_1);



  VAR_10.parse_file (VAR_12);



  VAR_10.clear_binding_stack ();



  FUNC_19 (VAR_1);

  if (VAR_9 || VAR_6 || VAR_13)
    return;

  VAR_10.decls.final_write_globals ();
  FUNC_0 ();
  FUNC_6 ();




  FUNC_1 ();


  if (VAR_7)
    FUNC_10 ();

  FUNC_12 ();
  FUNC_11 ();



  FUNC_21 ();


  FUNC_20 (VAR_2);






  (*VAR_5->finish) (VAR_11);
  FUNC_19 (VAR_2);



  FUNC_3 ();


  FUNC_13 ();
  VAR_14.asm_out.file_end ();
}
