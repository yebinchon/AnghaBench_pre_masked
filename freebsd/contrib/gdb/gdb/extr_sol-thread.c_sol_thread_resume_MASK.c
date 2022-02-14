
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cleanup {int dummy; } ;
typedef int ptid_t ;
typedef enum target_signal { ____Placeholder_target_signal } target_signal ;
struct TYPE_4__ {int ptid; } ;
struct TYPE_3__ {int (* to_resume ) (int ,int,int) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct cleanup*) ;
 int FUNC_3 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_4 () ;
 TYPE_1__ VAR_3 ;
 struct cleanup* FUNC_5 () ;
 int FUNC_6 (int ,int,int) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (char*,int ) ;

__attribute__((used)) static void
FUNC_9 (ptid_t VAR_4, int VAR_5, enum target_signal VAR_6)
{
  struct cleanup *VAR_7;

  VAR_7 = FUNC_5 ();

  VAR_0 = FUNC_7 (VAR_0, FUNC_1 (VAR_2.ptid));
  if (FUNC_1 (VAR_0) == -1)
    VAR_0 = FUNC_4 ();

  if (FUNC_1 (VAR_4) != -1)
    {
      ptid_t VAR_8 = VAR_4;

      VAR_4 = FUNC_7 (VAR_4, -2);
      if (FUNC_1 (VAR_4) == -2)
 FUNC_3 ("This version of Solaris can't start inactive threads.");
      if (VAR_1 && FUNC_1 (VAR_4) == -1)
 FUNC_8 ("Specified thread %ld seems to have terminated",
   FUNC_0 (VAR_8));
    }

  VAR_3.to_resume (VAR_4, VAR_5, VAR_6);

  FUNC_2 (VAR_7);
}
