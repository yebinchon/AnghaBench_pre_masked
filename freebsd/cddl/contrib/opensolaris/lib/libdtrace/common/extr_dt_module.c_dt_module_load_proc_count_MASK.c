
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int prmap_t ;
struct TYPE_2__ {int dpa_count; int dpa_proc; } ;
typedef TYPE_1__ dt_module_cb_arg_t ;
typedef int ctf_file_t ;


 int * FUNC_0 (int ,char const*) ;

__attribute__((used)) static int
FUNC_1(void *VAR_0, const prmap_t *VAR_1, const char *VAR_2)
{
 ctf_file_t *VAR_3;
 dt_module_cb_arg_t *VAR_4 = VAR_0;


 VAR_3 = FUNC_0(VAR_4->dpa_proc, VAR_2);
 if (VAR_3 != ((void*)0))
  VAR_4->dpa_count++;
 return (0);
}
