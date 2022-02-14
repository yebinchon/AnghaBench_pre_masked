
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
struct TYPE_6__ {int decl; } ;
struct TYPE_4__ {scalar_t__ (* promote_function_args ) (int ) ;} ;
struct TYPE_5__ {TYPE_1__ calls; } ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (unsigned int) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 TYPE_3__* VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (unsigned int,int*,int*) ;
 int FUNC_8 (int ,int ,int ) ;
 scalar_t__ FUNC_9 (int ) ;
 TYPE_2__ VAR_5 ;

__attribute__((used)) static void
FUNC_10 (void)
{
  unsigned int VAR_6;
  rtx VAR_7;
  enum machine_mode VAR_8;
  int VAR_9;
  rtx VAR_10 = FUNC_6 ();

  if (VAR_5.calls.promote_function_args (FUNC_3 (VAR_3->decl)))
    {
      for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)



 if (FUNC_0 (FUNC_2 (VAR_6))
     && (VAR_7 = FUNC_7 (VAR_6, &VAR_8, &VAR_9)) != 0)
   {
     FUNC_8
       (VAR_7, VAR_10, FUNC_5 ((VAR_9 ? VAR_2
        : VAR_1),
       FUNC_1 (VAR_7),
       FUNC_4 (VAR_8, VAR_4)));
   }
    }
}
