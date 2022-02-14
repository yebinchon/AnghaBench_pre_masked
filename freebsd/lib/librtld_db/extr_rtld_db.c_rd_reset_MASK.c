
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u_long ;
struct kinfo_vmentry {scalar_t__ kve_start; char* kve_path; } ;
struct kinfo_proc {int dummy; } ;
typedef int rd_err_e ;
struct TYPE_9__ {int rda_procstat; int rda_php; } ;
typedef TYPE_2__ rd_agent_t ;
struct TYPE_8__ {scalar_t__ a_val; } ;
struct TYPE_10__ {scalar_t__ a_type; TYPE_1__ a_un; } ;
typedef TYPE_3__ Elf_Auxinfo ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_3__*) ;
 int FUNC_3 (int ,struct kinfo_proc*) ;
 int FUNC_4 (int ,struct kinfo_vmentry*) ;
 TYPE_3__* FUNC_5 (int ,struct kinfo_proc*,int*) ;
 struct kinfo_proc* FUNC_6 (int ,int ,int ,int*) ;
 struct kinfo_vmentry* FUNC_7 (int ,struct kinfo_proc*,int*) ;
 scalar_t__ FUNC_8 (TYPE_2__*,char const*,scalar_t__) ;

rd_err_e
FUNC_9(rd_agent_t *VAR_4)
{
 struct kinfo_proc *VAR_5;
 struct kinfo_vmentry *VAR_6;
 Elf_Auxinfo *VAR_7;
 const char *VAR_8;
 u_long VAR_9;
 rd_err_e VAR_10;
 int VAR_11, VAR_12;

 VAR_5 = ((void*)0);
 VAR_7 = ((void*)0);
 VAR_6 = ((void*)0);
 VAR_10 = VAR_2;

 VAR_5 = FUNC_6(VAR_4->rda_procstat, VAR_1,
     FUNC_1(VAR_4->rda_php), &VAR_11);
 if (VAR_5 == ((void*)0))
  return (VAR_2);
 FUNC_0(VAR_11 == 1);

 VAR_7 = FUNC_5(VAR_4->rda_procstat, VAR_5, &VAR_11);
 if (VAR_7 == ((void*)0))
  goto err;

 VAR_9 = 0;
 for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++) {
  if (VAR_7[VAR_12].a_type == VAR_0) {
   VAR_9 = VAR_7[VAR_12].a_un.a_val;
   break;
  }
 }
 if (VAR_12 == VAR_11)
  goto err;

 VAR_8 = ((void*)0);
 VAR_6 = FUNC_7(VAR_4->rda_procstat, VAR_5, &VAR_11);
 if (VAR_6 == ((void*)0))
  goto err;
 for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++) {
  if (VAR_6[VAR_12].kve_start == VAR_9) {
   VAR_8 = VAR_6[VAR_12].kve_path;
   break;
  }
 }
 if (VAR_12 == VAR_11)
  goto err;

 if (FUNC_8(VAR_4, VAR_8, VAR_9) != 0)
  goto err;

 VAR_10 = VAR_3;

err:
 if (VAR_6 != ((void*)0))
  FUNC_4(VAR_4->rda_procstat, VAR_6);
 if (VAR_7 != ((void*)0))
  FUNC_2(VAR_4->rda_procstat, VAR_7);
 if (VAR_5 != ((void*)0))
  FUNC_3(VAR_4->rda_procstat, VAR_5);
 return (VAR_10);
}
