
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int tree ;
struct TYPE_3__ {int (* globalize_label ) (int *,char const*) ;} ;
struct TYPE_4__ {TYPE_1__ asm_out; scalar_t__ (* binds_local_p ) (int ) ;} ;
typedef int FILE ;


 int FUNC_0 (int *,char const*,char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *,char const*) ;
 int FUNC_7 (int *,char const*) ;
 TYPE_2__ VAR_3 ;

void
FUNC_8 (FILE *VAR_4, tree VAR_5, const char *VAR_6)
{



  if (FUNC_3 (FUNC_1 (VAR_5)))
    {


      int VAR_7 = ((*VAR_3.binds_local_p) (VAR_5)
        && FUNC_4 (VAR_5));



      if ((VAR_2 || !VAR_1)
   && FUNC_2 (VAR_5) == VAR_0)
 {
   FUNC_0 (VAR_4, VAR_6, "function");
   (*VAR_3.asm_out.globalize_label) (VAR_4, VAR_6);
 }
      else if (VAR_7 && !VAR_1)
 (*VAR_3.asm_out.globalize_label) (VAR_4, VAR_6);
    }
}
