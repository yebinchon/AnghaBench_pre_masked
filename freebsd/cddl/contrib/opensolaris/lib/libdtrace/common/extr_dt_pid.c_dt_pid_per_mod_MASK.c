
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_9__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ uint_t ;
typedef int u_longlong_t ;
struct TYPE_11__ {int pr_vaddr; } ;
typedef TYPE_1__ prmap_t ;
typedef int dtrace_hdl_t ;
typedef int dt_proc_t ;
struct TYPE_12__ {char const* dpp_obj; char* dpp_func; char* dpp_mod; scalar_t__ dpp_nmatches; int dpp_pr; int dpp_lmid; scalar_t__* dpp_stret; int * dpp_dpr; int * dpp_pcb; int * dpp_dtp; } ;
typedef TYPE_2__ dt_pid_probe_t ;
typedef int dt_pcb_t ;
struct TYPE_14__ {scalar_t__ pr_dmodel; } ;
struct TYPE_13__ {unsigned int st_size; scalar_t__ st_shndx; scalar_t__ st_value; int st_info; scalar_t__ st_other; scalar_t__ st_name; } ;
typedef TYPE_3__ GElf_Sym ;
typedef unsigned int Elf64_Xword ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int ,scalar_t__,char*,int ,TYPE_3__*) ;
 int * FUNC_4 (int ,scalar_t__) ;
 TYPE_9__* FUNC_5 (int ) ;
 int FUNC_6 (int ,char const*,int ,int,int ,TYPE_2__*) ;
 scalar_t__ FUNC_7 (int ,int ,char const*,char*,TYPE_3__*,int *) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_8 (char*,char const*,int ,int ,int ,int ) ;
 int FUNC_9 (int *,int *,int *,int *,int ,char*,char*,char*) ;
 int FUNC_10 (TYPE_2__*,TYPE_3__*,char*) ;
 int VAR_10 ;
 scalar_t__ FUNC_11 (char*,char*) ;
 int FUNC_12 (char*) ;
 char const* FUNC_13 (char const*,char) ;

__attribute__((used)) static int
FUNC_14(void *VAR_11, const prmap_t *VAR_12, const char *VAR_13)
{
 dt_pid_probe_t *VAR_14 = VAR_11;
 dtrace_hdl_t *VAR_15 = VAR_14->dpp_dtp;
 dt_pcb_t *VAR_16 = VAR_14->dpp_pcb;
 dt_proc_t *VAR_17 = VAR_14->dpp_dpr;
 GElf_Sym VAR_18;

 if (VAR_13 == ((void*)0))
  return (0);






 if ((VAR_14->dpp_obj = FUNC_13(VAR_13, '/')) == ((void*)0))
  VAR_14->dpp_obj = VAR_13;
 else
  VAR_14->dpp_obj++;
 VAR_14->dpp_stret[0] = 0;
 VAR_14->dpp_stret[1] = 0;
 VAR_14->dpp_stret[2] = 0;
 VAR_14->dpp_stret[3] = 0;


 FUNC_8("%s stret %llx %llx %llx %llx\n", VAR_13,
     (u_longlong_t)VAR_14->dpp_stret[0], (u_longlong_t)VAR_14->dpp_stret[1],
     (u_longlong_t)VAR_14->dpp_stret[2], (u_longlong_t)VAR_14->dpp_stret[3]);






 if (!FUNC_12(VAR_14->dpp_func)) {
  if (FUNC_7(VAR_14->dpp_pr, VAR_14->dpp_lmid, VAR_13,
      VAR_14->dpp_func, &VAR_18, ((void*)0)) != 0) {
   if (FUNC_11("-", VAR_14->dpp_func) == 0) {
    VAR_18.st_name = 0;
    VAR_18.st_info =
        FUNC_0(VAR_7, VAR_8);
    VAR_18.st_other = 0;
    VAR_18.st_value = 0;




    VAR_18.st_size = ~((Elf64_Xword) 0);


   } else if (!FUNC_12(VAR_14->dpp_mod)) {
    return (FUNC_9(VAR_15, VAR_16, VAR_17, ((void*)0),
        VAR_2,
        "failed to lookup '%s' in module '%s'",
        VAR_14->dpp_func, VAR_14->dpp_mod));
   } else {
    return (0);
   }
  }




  if (FUNC_1(VAR_18.st_info) != VAR_8 ||
      VAR_18.st_shndx == VAR_6 || VAR_18.st_size == 0)
   return (0);
  (void) FUNC_3(VAR_14->dpp_pr, VAR_18.st_value, VAR_14->dpp_func,
      VAR_1, &VAR_18);

  return (FUNC_10(VAR_14, &VAR_18, VAR_14->dpp_func));
 } else {
  uint_t VAR_19 = VAR_14->dpp_nmatches;

  if (FUNC_6(VAR_14->dpp_pr, VAR_13, VAR_5,
      VAR_0 | VAR_9, VAR_10, VAR_14) == 1)
   return (1);

  if (VAR_19 == VAR_14->dpp_nmatches) {




   if (FUNC_6(VAR_14->dpp_pr, VAR_13, VAR_3,
       VAR_0 | VAR_9, VAR_10, VAR_14) == 1)
    return (1);
  }
 }

 return (0);
}
