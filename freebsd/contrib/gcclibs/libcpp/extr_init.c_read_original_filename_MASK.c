
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ type; int flags; } ;
typedef TYPE_2__ cpp_token ;
struct TYPE_10__ {int in_directive; } ;
struct TYPE_12__ {TYPE_1__ state; } ;
typedef TYPE_3__ cpp_reader ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (TYPE_3__*,int) ;
 TYPE_2__* FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;

__attribute__((used)) static void
FUNC_4 (cpp_reader *VAR_3)
{
  const cpp_token *VAR_4, *VAR_5;



  VAR_4 = FUNC_2 (VAR_3);
  if (VAR_4->type == VAR_0)
    {
      VAR_3->state.in_directive = 1;
      VAR_5 = FUNC_2 (VAR_3);
      FUNC_0 (VAR_3, 1);
      VAR_3->state.in_directive = 0;


      if (VAR_5->type == VAR_1)
 {
   FUNC_1 (VAR_3, VAR_4->flags & VAR_2);
   FUNC_3 (VAR_3);
   return;
 }
    }


  FUNC_0 (VAR_3, 1);
}
