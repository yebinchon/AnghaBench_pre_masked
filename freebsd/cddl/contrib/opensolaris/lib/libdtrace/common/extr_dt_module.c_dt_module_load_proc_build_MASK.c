
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int pr_vaddr; } ;
typedef TYPE_1__ prmap_t ;
struct TYPE_6__ {int dpa_count; TYPE_4__* dpa_dmp; int dpa_proc; } ;
typedef TYPE_2__ dt_module_cb_arg_t ;
typedef int ctf_file_t ;
typedef int buf ;
struct TYPE_7__ {int ** dm_libctfn; int ** dm_libctfp; } ;
typedef scalar_t__ Lmid_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,scalar_t__*) ;
 int * FUNC_1 (int ,char const*) ;
 int FUNC_2 (int ,int ,char*,int) ;
 int FUNC_3 (int **,char*,scalar_t__,char*) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *,TYPE_4__*) ;
 int * FUNC_6 (char*) ;
 char* FUNC_7 (char*,char) ;

__attribute__((used)) static int
FUNC_8(void *VAR_1, const prmap_t *VAR_2, const char *VAR_3)
{
 ctf_file_t *VAR_4;
 char VAR_5[VAR_0], *VAR_6;
 dt_module_cb_arg_t *VAR_7 = VAR_1;
 int VAR_8 = VAR_7->dpa_count;
 Lmid_t VAR_9;

 VAR_4 = FUNC_1(VAR_7->dpa_proc, VAR_3);
 if (VAR_4 == ((void*)0))
  return (0);
 VAR_4 = FUNC_4(VAR_4);
 if (VAR_4 == ((void*)0))
  return (0);
 VAR_7->dpa_dmp->dm_libctfp[VAR_8] = VAR_4;
 (void) FUNC_2(VAR_7->dpa_proc, VAR_2->pr_vaddr, VAR_5, sizeof (VAR_5));
 if ((VAR_6 = FUNC_7(VAR_5, '/')) == ((void*)0))
  VAR_6 = VAR_5;
 else
  VAR_6++;






 if (FUNC_0(VAR_7->dpa_proc, VAR_2->pr_vaddr, &VAR_9) != 0)
  VAR_9 = 0;

 if (VAR_9 == 0)
  VAR_7->dpa_dmp->dm_libctfn[VAR_8] = FUNC_6(VAR_6);
 else
  (void) FUNC_3(&VAR_7->dpa_dmp->dm_libctfn[VAR_8],
      "LM%lx`%s", VAR_9, VAR_6);
 if (VAR_7->dpa_dmp->dm_libctfn[VAR_8] == ((void*)0))
  return (1);
 FUNC_5(VAR_4, VAR_7->dpa_dmp);
 VAR_7->dpa_count++;
 return (0);
}
