
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
 int FUNC_0 (int *,char const*,char**) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (char*,char**,int ) ;
 int FUNC_4 (int ,char*,int ,char const*,char*) ;

rlim_t
FUNC_5(login_cap_t *VAR_4, const char *VAR_5, rlim_t VAR_6, rlim_t VAR_7)
{
    char *VAR_8, *VAR_9, *VAR_10;
    int VAR_11;
    rlim_t VAR_12;

    VAR_3 = 0;
    if (VAR_4 == ((void*)0) || VAR_4->lc_cap == ((void*)0))
 return VAR_6;







    if ((VAR_11 = FUNC_0(VAR_4->lc_cap, VAR_5, &VAR_8)) == -1)
 return VAR_6;
    else if (VAR_11 < 0) {
 VAR_3 = VAR_0;
 return VAR_7;
    }


    if (FUNC_1(VAR_8))
 return VAR_2;






    VAR_3 = 0;
    VAR_12 = 0;
    VAR_10 = VAR_8;
    while (*VAR_8) {
 rlim_t VAR_13 = FUNC_3(VAR_8, &VAR_9, 0);
 rlim_t VAR_14 = 1;

 if (VAR_9 == ((void*)0) || VAR_9 == VAR_8 || VAR_3 != 0) {
 invalid:
     FUNC_4(VAR_1, "login_getcaptime: class '%s' bad value %s=%s",
     VAR_4->lc_class, VAR_5, VAR_10);
     VAR_3 = VAR_0;
     return VAR_7;
 }

 switch (*VAR_9++) {
 case 0:
     VAR_9--;
     break;
 case 's': case 'S':
     break;
 case 'm': case 'M':
     VAR_14 = 60;
     break;
 case 'h': case 'H':
     VAR_14 = 60L * 60L;
     break;
 case 'd': case 'D':
     VAR_14 = 60L * 60L * 24L;
     break;
 case 'w': case 'W':
     VAR_14 = 60L * 60L * 24L * 7L;
     break;
 case 'y': case 'Y':
     VAR_14 = 60L * 60L * 24L * 365L;
     break;
 default:
     goto invalid;
 }
 VAR_8 = VAR_9;
 VAR_12 += FUNC_2(VAR_13, VAR_14);
 if (VAR_3)
     goto invalid;
    }

    return VAR_12;
}
