
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* lca_name; int * lca_info; } ;
typedef TYPE_1__ linfo_cb_arg_t ;
typedef int ctf_lblinfo_t ;
typedef int ctf_file_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,TYPE_1__*) ;
 int FUNC_1 (int *,int ) ;
 int VAR_2 ;

int
FUNC_2(ctf_file_t *VAR_3, const char *VAR_4, ctf_lblinfo_t *VAR_5)
{
 linfo_cb_arg_t VAR_6;
 int VAR_7;

 VAR_6.lca_name = VAR_4;
 VAR_6.lca_info = VAR_5;

 if ((VAR_7 = FUNC_0(VAR_3, VAR_2, &VAR_6)) == VAR_0)
  return (VAR_7);

 if (VAR_7 != 1)
  return (FUNC_1(VAR_3, VAR_1));

 return (0);
}
