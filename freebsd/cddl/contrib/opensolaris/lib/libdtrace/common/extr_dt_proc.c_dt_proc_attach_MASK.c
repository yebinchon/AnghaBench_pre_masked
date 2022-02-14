
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int rd_err_e ;
struct TYPE_11__ {scalar_t__ pr_errno; } ;
struct TYPE_12__ {TYPE_1__ pr_lwp; } ;
typedef TYPE_2__ pstatus_t ;
struct TYPE_13__ {scalar_t__ dpr_pid; int dpr_proc; int * dpr_rtld; int dpr_lock; } ;
typedef TYPE_3__ dt_proc_t ;
typedef int dt_bkpt_f ;
struct TYPE_14__ {scalar_t__ st_value; } ;
typedef TYPE_4__ GElf_Sym ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 TYPE_2__* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int ,char*,char*,TYPE_4__*,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,int,char*) ;
 int FUNC_8 (TYPE_3__*,uintptr_t,int *,char*) ;
 int FUNC_9 (TYPE_3__*,int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_10 (TYPE_3__*,int ,char*) ;
 int VAR_8 ;
 char* FUNC_11 (int ) ;
 int FUNC_12 (int *,int ) ;
 char* FUNC_13 (int ) ;

__attribute__((used)) static void
FUNC_14(dt_proc_t *VAR_9, int VAR_10)
{



 rd_err_e VAR_11;
 GElf_Sym VAR_12;

 FUNC_6(FUNC_0(&VAR_9->dpr_lock));

 if (VAR_10) {





  FUNC_9(VAR_9, VAR_0);



 }
 if ((VAR_9->dpr_rtld = FUNC_1(VAR_9->dpr_proc)) != ((void*)0) &&
     (VAR_11 = FUNC_12(VAR_9->dpr_rtld, VAR_1)) == VAR_4) {



  FUNC_10(VAR_9, VAR_5, "RD_POSTINIT");



 } else {
  FUNC_7("pid %d: failed to enable rtld events: %s\n",
      (int)VAR_9->dpr_pid, VAR_9->dpr_rtld ? FUNC_11(VAR_11) :
      "rtld_db agent initialization failed");
 }

 FUNC_4(VAR_9->dpr_proc);

 if (FUNC_5(VAR_9->dpr_proc, VAR_2,
     "a.out", "main", &VAR_12, ((void*)0)) == 0) {
  (void) FUNC_8(VAR_9, (uintptr_t)VAR_12.st_value,
      (dt_bkpt_f *)VAR_7, "a.out`main");
 } else {
  FUNC_7("pid %d: failed to find a.out`main: %s\n",
      (int)VAR_9->dpr_pid, FUNC_13(VAR_8));
 }
}
