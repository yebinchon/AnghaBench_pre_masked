
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cleanup {int dummy; } ;
typedef int ptid_t ;
typedef enum target_signal { ____Placeholder_target_signal } target_signal ;
struct TYPE_2__ {int (* to_resume ) (int ,int,int) ;} ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct cleanup*) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ) ;
 struct cleanup* FUNC_5 () ;
 int FUNC_6 (int ,int,int) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static void
FUNC_7 (ptid_t VAR_3, int VAR_4, enum target_signal VAR_5)
{
  struct cleanup *VAR_6 = FUNC_5 ();

  if (FUNC_0 (VAR_3) == -1)
    VAR_1 = FUNC_4 (VAR_1);
  else if (FUNC_2 (VAR_3))
    VAR_3 = FUNC_4 (VAR_3);


  FUNC_3 (VAR_0, ((void*)0));

  VAR_2->to_resume (VAR_3, VAR_4, VAR_5);

  FUNC_1 (VAR_6);
}
