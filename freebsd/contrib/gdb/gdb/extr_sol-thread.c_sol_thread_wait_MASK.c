
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct target_waitstatus {scalar_t__ kind; } ;
struct cleanup {int dummy; } ;
typedef int ptid_t ;
struct TYPE_4__ {int ptid; } ;
struct TYPE_3__ {int (* to_wait ) (int ,struct target_waitstatus*) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct cleanup*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 TYPE_2__ VAR_3 ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 () ;
 TYPE_1__ VAR_4 ;
 int FUNC_10 (int ,int ) ;
 struct cleanup* FUNC_11 () ;
 int FUNC_12 (int ,struct target_waitstatus*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,int) ;
 int FUNC_15 (char*,int ) ;

__attribute__((used)) static ptid_t
FUNC_16 (ptid_t VAR_5, struct target_waitstatus *VAR_6)
{
  ptid_t VAR_7;
  ptid_t VAR_8;
  struct cleanup *VAR_9;

  VAR_8 = VAR_1;
  VAR_9 = FUNC_11 ();

  VAR_1 = FUNC_14 (VAR_1, FUNC_1 (VAR_3.ptid));
  if (FUNC_1 (VAR_1) == -1)
    VAR_1 = FUNC_9 ();

  if (FUNC_1 (VAR_5) != -1)
    {
      ptid_t VAR_10 = VAR_5;

      VAR_5 = FUNC_14 (VAR_5, -2);
      if (FUNC_1 (VAR_5) == -2)
 FUNC_4 ("This version of Solaris can't start inactive threads.");
      if (VAR_2 && FUNC_1 (VAR_5) == -1)
 FUNC_15 ("Specified thread %ld seems to have terminated",
   FUNC_0 (VAR_10));
    }

  VAR_7 = VAR_4.to_wait (VAR_5, VAR_6);

  if (VAR_6->kind != VAR_0)
    {

      VAR_7 = FUNC_7 (VAR_7);
      if (FUNC_1 (VAR_7) == -1)
 VAR_7 = VAR_8;


      if (FUNC_6 (VAR_7)
   && !FUNC_10 (VAR_7, VAR_8)
   && !FUNC_5 (VAR_7))
 {
   FUNC_8 ("[New %s]\n", FUNC_13 (VAR_7));
   FUNC_2 (VAR_7);
 }
    }





  FUNC_3 (VAR_9);

  return VAR_7;
}
