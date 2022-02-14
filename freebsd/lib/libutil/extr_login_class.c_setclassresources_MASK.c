
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct rlimit {int rlim_max; int rlim_cur; } ;
struct login_res {char* what; int why; int (* who ) (TYPE_1__*,char*,int ,int ) ;} ;
typedef int rlim_t ;
struct TYPE_7__ {int lc_class; } ;
typedef TYPE_1__ login_cap_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,struct rlimit*) ;
 struct login_res* VAR_2 ;
 int FUNC_1 (int ,struct rlimit*) ;
 int FUNC_2 (char*,char*,char*) ;
 int FUNC_3 (TYPE_1__*,char*,int ,int ) ;
 int FUNC_4 (TYPE_1__*,char*,int ,int ) ;
 int FUNC_5 (TYPE_1__*,char*,int ,int ) ;
 int FUNC_6 (TYPE_1__*,char*,int ,int ) ;
 int FUNC_7 (int ,char*,char*,...) ;

void
FUNC_8(login_cap_t *VAR_3)
{
    struct login_res *VAR_4;

    if (VAR_3 == ((void*)0))
 return;

    for (VAR_4 = VAR_2; VAR_4->what != ((void*)0); ++VAR_4) {
 struct rlimit VAR_5;
 if (FUNC_0(VAR_4->why, &VAR_5) != 0)
     FUNC_7(VAR_0, "getting %s resource limit: %m", VAR_4->what);
 else {
     char VAR_6[40];
     char VAR_7[40];
     rlim_t VAR_8 = VAR_5.rlim_cur;
     rlim_t VAR_9 = VAR_5.rlim_max;

     FUNC_2(VAR_6, "%s-cur", VAR_4->what);
     FUNC_2(VAR_7, "%s-max", VAR_4->what);

     VAR_8 = (*VAR_4->who)(VAR_3, VAR_4->what, VAR_8, VAR_8);
     VAR_9 = (*VAR_4->who)(VAR_3, VAR_4->what, VAR_9, VAR_9);
     VAR_5.rlim_cur = (*VAR_4->who)(VAR_3, VAR_6, VAR_8, VAR_8);
     VAR_5.rlim_max = (*VAR_4->who)(VAR_3, VAR_7, VAR_9, VAR_9);

     if (FUNC_1(VAR_4->why, &VAR_5) == -1)
  FUNC_7(VAR_1, "set class '%s' resource limit %s: %m", VAR_3->lc_class, VAR_4->what);
 }
    }
}
