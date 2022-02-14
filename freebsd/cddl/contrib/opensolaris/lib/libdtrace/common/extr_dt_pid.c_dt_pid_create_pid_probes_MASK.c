
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ pr_vaddr; } ;
typedef TYPE_1__ prmap_t ;
struct TYPE_15__ {char* dtpd_mod; char* dtpd_func; char* dtpd_name; int * dtpd_provider; } ;
typedef TYPE_2__ dtrace_probedesc_t ;
typedef int dtrace_hdl_t ;
struct TYPE_16__ {int dpr_proc; } ;
typedef TYPE_3__ dt_proc_t ;
struct TYPE_17__ {char* dpp_mod; char* dpp_func; char* dpp_name; int dpp_pr; scalar_t__ dpp_last_taken; int * dpp_pcb; TYPE_3__* dpp_dpr; int * dpp_dtp; } ;
typedef TYPE_4__ dt_pid_probe_t ;
typedef int dt_pcb_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 TYPE_1__* FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,TYPE_4__*) ;
 int FUNC_2 (int *,int *,TYPE_3__*,int *,int ,char*,...) ;
 TYPE_1__* FUNC_3 (TYPE_2__*,int ) ;
 int VAR_4 ;
 int FUNC_4 (TYPE_4__*,TYPE_1__ const*,char*) ;
 char* FUNC_5 (char*,char) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,char*) ;
 scalar_t__ FUNC_8 (char*) ;

__attribute__((used)) static int
FUNC_9(dtrace_probedesc_t *VAR_5, dtrace_hdl_t *VAR_6,
    dt_pcb_t *VAR_7, dt_proc_t *VAR_8)
{
 dt_pid_probe_t VAR_9;
 int VAR_10 = 0;

 VAR_9.dpp_dtp = VAR_6;
 VAR_9.dpp_dpr = VAR_8;
 VAR_9.dpp_pr = VAR_8->dpr_proc;
 VAR_9.dpp_pcb = VAR_7;
 VAR_9.dpp_mod = VAR_5->dtpd_mod[0] != '\0' ? VAR_5->dtpd_mod : "*";
 VAR_9.dpp_func = VAR_5->dtpd_func[0] != '\0' ? VAR_5->dtpd_func : "*";
 VAR_9.dpp_name = VAR_5->dtpd_name[0] != '\0' ? VAR_5->dtpd_name : "*";
 VAR_9.dpp_last_taken = 0;

 if (FUNC_6(VAR_9.dpp_func, "-") == 0) {
  const prmap_t *VAR_11, *VAR_12;

  if (VAR_5->dtpd_mod[0] == '\0') {
   VAR_9.dpp_mod = VAR_5->dtpd_mod;
   (void) FUNC_7(VAR_5->dtpd_mod, "a.out");
  } else if (FUNC_8(VAR_9.dpp_mod) ||
      (VAR_11 = FUNC_0(VAR_9.dpp_pr, "a.out")) == ((void*)0) ||
      (VAR_12 = FUNC_0(VAR_9.dpp_pr, VAR_9.dpp_mod)) == ((void*)0) ||
      VAR_11->pr_vaddr != VAR_12->pr_vaddr) {
   return (FUNC_2(VAR_6, VAR_7, VAR_8, ((void*)0), VAR_1,
       "only the a.out module is valid with the "
       "'-' function"));
  }

  if (FUNC_8(VAR_9.dpp_name)) {
   return (FUNC_2(VAR_6, VAR_7, VAR_8, ((void*)0), VAR_2,
       "only individual addresses may be specified "
       "with the '-' function"));
  }
 }






 if (FUNC_8(VAR_9.dpp_mod)) {
  VAR_10 = FUNC_1(VAR_9.dpp_pr, VAR_4, &VAR_9);
 } else {
  const prmap_t *VAR_13;
  char *VAR_14;






  if ((VAR_13 = FUNC_3(VAR_5, VAR_9.dpp_pr)) != ((void*)0)) {
   if ((VAR_14 = FUNC_5(VAR_5->dtpd_mod, '`')) == ((void*)0))
    VAR_14 = VAR_5->dtpd_mod;
   else
    VAR_14++;

   VAR_10 = FUNC_4(&VAR_9, VAR_13, VAR_14);
  }
 }

 return (VAR_10);
}
