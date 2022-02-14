
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int rlim_t ;
struct TYPE_3__ {int lc_class; int * lc_cap; } ;
typedef TYPE_1__ login_cap_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char const*,long*) ;
 int FUNC_1 (int *,char const*,char**) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (char*,char**,int ) ;
 int FUNC_4 (int ,char*,int ,char const*,char*) ;

rlim_t
FUNC_5(login_cap_t *VAR_4, const char *VAR_5, rlim_t VAR_6, rlim_t VAR_7)
{
    char *VAR_8, *VAR_9;
    int VAR_10;
    rlim_t VAR_11;

    if (VAR_4 == ((void*)0) || VAR_4->lc_cap == ((void*)0))
 return VAR_6;




    if ((VAR_10 = FUNC_1(VAR_4->lc_cap, VAR_5, &VAR_9)) == -1) {
 long VAR_12;

 if ((VAR_10 = FUNC_0(VAR_4->lc_cap, VAR_5, &VAR_12)) == -1)
     return VAR_6;
 else if (VAR_10 >= 0)
     return (rlim_t)VAR_12;
    }

    if (VAR_10 < 0) {
 VAR_3 = VAR_0;
 return VAR_7;
    }

    if (FUNC_2(VAR_9))
 return VAR_2;

    VAR_3 = 0;
    VAR_11 = FUNC_3(VAR_9, &VAR_8, 0);
    if (VAR_8 == ((void*)0) || VAR_8 == VAR_9 || VAR_3 != 0) {
 FUNC_4(VAR_1, "login_getcapnum: class '%s' bad value %s=%s",
        VAR_4->lc_class, VAR_5, VAR_9);
 VAR_3 = VAR_0;
 return VAR_7;
    }

    return VAR_11;
}
