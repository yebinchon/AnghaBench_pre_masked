
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd {int dummy; } ;
typedef scalar_t__ mode_t ;
typedef int login_cap_t ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 scalar_t__ FUNC_0 (int *,char*,scalar_t__,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct passwd const*,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static mode_t
FUNC_4(login_cap_t *VAR_5, const struct passwd *VAR_6,
  mode_t VAR_7, unsigned long VAR_8)
{
    if (VAR_5) {

 if (VAR_8 & VAR_3)
     FUNC_3(VAR_5);

 if (VAR_8 & VAR_4)
     VAR_7 = (mode_t)FUNC_0(VAR_5, "umask", VAR_7, VAR_7);

 if (VAR_8 & VAR_2)
     FUNC_2(VAR_5, VAR_6, 1);

 if (VAR_8 & VAR_1)
     FUNC_2(VAR_5, VAR_6, 0);

 if (VAR_8 & VAR_0)
     FUNC_1(VAR_5);
    }
    return (VAR_7);
}
