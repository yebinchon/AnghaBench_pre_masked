
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lwp_info {int step; int resumed; scalar_t__ stopped; scalar_t__ status; int ptid; } ;
typedef int ptid_t ;
typedef enum target_signal { ____Placeholder_target_signal } target_signal ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int,int) ;
 scalar_t__ VAR_1 ;
 struct lwp_info* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,char*,int ,char*) ;
 int FUNC_5 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char* FUNC_8 (int) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void
FUNC_10 (ptid_t VAR_7, int VAR_8, enum target_signal VAR_9)
{
  struct lwp_info *VAR_10;
  int VAR_11;


  VAR_11 = (FUNC_1 (VAR_7) == -1);

  if (VAR_11)
    FUNC_6 (VAR_6, ((void*)0));
  else
    FUNC_6 (VAR_5, ((void*)0));



  if (FUNC_1 (VAR_7) == -1)
    VAR_7 = VAR_3;

  VAR_10 = FUNC_3 (VAR_7);
  if (VAR_10)
    {
      VAR_7 = FUNC_7 (FUNC_0 (VAR_10->ptid));


      VAR_10->step = VAR_8;


      VAR_10->resumed = 1;



      if (VAR_10->status)
 {


   FUNC_5 (VAR_9 == VAR_0);
   return;
 }



      VAR_10->stopped = 0;
    }

  if (VAR_11)
    FUNC_6 (VAR_4, ((void*)0));

  FUNC_2 (VAR_7, VAR_8, VAR_9);
  if (VAR_1)
    FUNC_4 (VAR_2,
   "LLR: %s %s, %s (resume event thread)\n",
   VAR_8 ? "PTRACE_SINGLESTEP" : "PTRACE_CONT",
   FUNC_9 (VAR_7),
   VAR_9 ? FUNC_8 (VAR_9) : "0");
}
