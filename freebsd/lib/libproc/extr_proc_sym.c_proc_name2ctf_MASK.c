
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct proc_handle {int dummy; } ;
struct TYPE_3__ {int pr_mapname; } ;
typedef TYPE_1__ prmap_t ;
typedef int ctf_file_t ;


 int * FUNC_0 (int ,int*) ;
 TYPE_1__* FUNC_1 (struct proc_handle*,char const*) ;

ctf_file_t *
FUNC_2(struct proc_handle *VAR_0, const char *VAR_1)
{

 ctf_file_t *VAR_2;
 prmap_t *VAR_3;
 int VAR_4;

 if ((VAR_3 = FUNC_1(VAR_0, VAR_1)) == ((void*)0))
  return (((void*)0));

 VAR_2 = FUNC_0(VAR_3->pr_mapname, &VAR_4);
 return (VAR_2);





}
