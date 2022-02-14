
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int pr_vaddr; } ;
typedef TYPE_1__ prmap_t ;
typedef int name ;
struct TYPE_7__ {char const* dpp_obj; int dpp_mod; scalar_t__ dpp_lmid; int dpp_pr; } ;
typedef TYPE_2__ dt_pid_probe_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,scalar_t__*) ;
 int FUNC_1 (char*,int,scalar_t__,char*) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__ const*,char const*) ;
 scalar_t__ FUNC_3 (char const*,int ) ;
 char const* FUNC_4 (char const*,char) ;

__attribute__((used)) static int
FUNC_5(void *VAR_1, const prmap_t *VAR_2, const char *VAR_3)
{
 char VAR_4[VAR_0];
 dt_pid_probe_t *VAR_5 = VAR_1;

 if (FUNC_3(VAR_3, VAR_5->dpp_mod))
  return (FUNC_2(VAR_5, VAR_2, VAR_3));




 VAR_5->dpp_lmid = 0;


 if ((VAR_5->dpp_obj = FUNC_4(VAR_3, '/')) == ((void*)0))
  VAR_5->dpp_obj = VAR_3;
 else
  VAR_5->dpp_obj++;

 if (FUNC_3(VAR_5->dpp_obj, VAR_5->dpp_mod))
  return (FUNC_2(VAR_5, VAR_2, VAR_3));





 FUNC_1(VAR_4, sizeof (VAR_4), VAR_5->dpp_lmid, VAR_5->dpp_obj);

 if (FUNC_3(VAR_4, VAR_5->dpp_mod))
  return (FUNC_2(VAR_5, VAR_2, VAR_3));

 return (0);
}
