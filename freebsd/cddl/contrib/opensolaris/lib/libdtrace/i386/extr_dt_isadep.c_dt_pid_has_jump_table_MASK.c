
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ulong_t ;
typedef int uint8_t ;
struct ps_prochandle {int dummy; } ;
typedef int pid_t ;
struct TYPE_6__ {int ftps_size; int ftps_func; } ;
typedef TYPE_1__ fasttrap_probe_spec_t ;
typedef int dtrace_hdl_t ;
struct TYPE_8__ {char pr_dmodel; int pr_pid; } ;
struct TYPE_7__ {scalar_t__ st_value; } ;
typedef TYPE_2__ GElf_Sym ;


 int FUNC_0 (int) ;
 char VAR_0 ;
 TYPE_5__* FUNC_1 (struct ps_prochandle*) ;
 int FUNC_2 (char*,int,...) ;
 int FUNC_3 (int*,int *,int ,scalar_t__,char) ;
 char FUNC_4 (struct ps_prochandle*) ;
 int FUNC_5 (struct ps_prochandle*) ;

__attribute__((used)) static int
FUNC_6(struct ps_prochandle *VAR_1, dtrace_hdl_t *VAR_2,
    uint8_t *VAR_3, fasttrap_probe_spec_t *VAR_4, const GElf_Sym *VAR_5)
{
 ulong_t VAR_6;
 int VAR_7;




 pid_t VAR_8 = FUNC_5(VAR_1);
 char VAR_9 = FUNC_4(VAR_1);







 for (VAR_6 = 0; VAR_6 < VAR_4->ftps_size; VAR_6 += VAR_7) {
  VAR_7 = FUNC_3(&VAR_3[VAR_6], VAR_2, VAR_8, VAR_5->st_value + VAR_6,
      VAR_9);




  if (VAR_7 <= 0) {
   FUNC_2("error at %#lx (assuming jump table)\n", VAR_6);
   return (1);
  }
 }

 return (0);
}
