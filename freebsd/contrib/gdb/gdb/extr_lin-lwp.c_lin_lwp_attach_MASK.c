
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lwp_info {int cloned; int stopped; int resumed; int status; } ;
typedef int pid_t ;
struct TYPE_2__ {int (* to_attach ) (char*,int) ;} ;


 int FUNC_0 (int,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (scalar_t__) ;
 int VAR_2 ;
 struct lwp_info* FUNC_5 (int ) ;
 TYPE_1__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_6 (int ,char*,long) ;
 int FUNC_7 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int,int*,int ) ;
 int FUNC_11 (char*,int ) ;

__attribute__((used)) static void
FUNC_12 (char *VAR_8, int VAR_9)
{
  struct lwp_info *VAR_10;
  pid_t VAR_11;
  int VAR_12;



  VAR_3.to_attach (VAR_8, VAR_9);


  VAR_10 = FUNC_5 (FUNC_0 (FUNC_1 (VAR_7), FUNC_1 (VAR_7)));




  VAR_11 = FUNC_10 (FUNC_1 (VAR_7), &VAR_12, 0);
  if (VAR_11 == -1 && VAR_5 == VAR_0)
    {
      FUNC_11 ("%s is a cloned process", FUNC_9 (VAR_7));


      VAR_11 = FUNC_10 (FUNC_1 (VAR_7), &VAR_12, VAR_2);
      VAR_10->cloned = 1;
    }

  FUNC_7 (VAR_11 == FUNC_1 (VAR_7)
       && FUNC_2 (VAR_12) && FUNC_3 (VAR_12) == VAR_1);

  VAR_10->stopped = 1;


  VAR_10->status = FUNC_4 (VAR_1);
  VAR_10->resumed = 1;
  if (VAR_4)
    {
      FUNC_6 (VAR_6,
     "LLA: waitpid %ld, faking SIGSTOP\n", (long) VAR_11);
    }
}
