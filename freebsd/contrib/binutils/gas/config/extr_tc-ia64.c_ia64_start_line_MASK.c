
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int manual_bundling_on; } ;
struct TYPE_7__ {int manual_bundling_off; } ;
struct TYPE_5__ {scalar_t__ X_op; } ;
struct TYPE_6__ {int manual_bundling; int default_explicit_mode; int mode_explicitly_set; scalar_t__ explicit_mode; scalar_t__ detect_dv; TYPE_1__ qp; } ;


 TYPE_4__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_3__ VAR_3 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char) ;
 scalar_t__ FUNC_4 () ;
 char* VAR_4 ;
 int FUNC_5 (int,int ,int ) ;
 TYPE_2__ VAR_5 ;

void
FUNC_6 ()
{
  static int VAR_6;

  if (!VAR_6) {


    VAR_6 = 1;
    return;
  }

  if (VAR_5.qp.X_op == VAR_2)
    FUNC_1 ("qualifying predicate not followed by instruction");
  VAR_5.qp.X_op = VAR_1;

  if (FUNC_4 ())
    return;

  if (VAR_4[0] == ';' && VAR_4[-1] == ';')
    {
      if (VAR_5.detect_dv && !VAR_5.explicit_mode)
 {
   static int VAR_7;

   if (!VAR_7)
     {
       VAR_7 = 1;
       FUNC_2 (FUNC_0("Explicit stops are ignored in auto mode"));
     }
 }
      else
 FUNC_5 (1, 0, 0);
    }
  else if (VAR_4[-1] == '{')
    {
      if (VAR_5.manual_bundling)
 FUNC_2 ("Found '{' when manual bundling is already turned on");
      else
 VAR_0.manual_bundling_on = 1;
      VAR_5.manual_bundling = 1;



      if (VAR_5.detect_dv && !VAR_5.explicit_mode)
 {
   if (!VAR_5.mode_explicitly_set
       && !VAR_5.default_explicit_mode)
     FUNC_3 ('E');
   else
     FUNC_2 (FUNC_0("Found '{' after explicit switch to automatic mode"));
 }
    }
  else if (VAR_4[-1] == '}')
    {
      if (!VAR_5.manual_bundling)
 FUNC_2 ("Found '}' when manual bundling is off");
      else
 VAR_3.manual_bundling_off = 1;
      VAR_5.manual_bundling = 0;


      if (VAR_5.detect_dv
   && VAR_5.explicit_mode
   && !VAR_5.mode_explicitly_set
   && !VAR_5.default_explicit_mode)
 FUNC_3 ('A');
    }
}
