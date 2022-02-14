
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {void (* to_rcmd ) (char*,struct ui_file*) ;} ;
struct TYPE_3__ {void (* to_rcmd ) (char*,struct ui_file*) ;} ;


 TYPE_2__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 void FUNC_0 (char*,struct ui_file*) ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 int FUNC_2 (char*,int ) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void
FUNC_3 (char *VAR_4,
   int VAR_5)
{
  if ((VAR_0.to_rcmd
       == (void (*) (char *, struct ui_file *)) VAR_3)
      || (VAR_0.to_rcmd == FUNC_0
   && (VAR_1.to_rcmd
       == (void (*) (char *, struct ui_file *)) VAR_3)))
    {
      FUNC_1 ("\"monitor\" command not supported by this target.\n");
    }
  FUNC_2 (VAR_4, VAR_2);
}
