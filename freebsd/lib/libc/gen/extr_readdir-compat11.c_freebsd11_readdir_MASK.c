
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct freebsd11_dirent {int dummy; } ;
struct dirent {int dummy; } ;
struct TYPE_4__ {int dd_lock; struct freebsd11_dirent* dd_compat_de; } ;
typedef TYPE_1__ DIR ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct dirent* FUNC_2 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_3 (struct freebsd11_dirent*,struct dirent*) ;
 struct freebsd11_dirent* FUNC_4 (int) ;

struct freebsd11_dirent *
FUNC_5(DIR *VAR_2)
{
 struct freebsd11_dirent *VAR_3;
 struct dirent *VAR_4;

 if (VAR_1)
  FUNC_0(&VAR_2->dd_lock);
 VAR_4 = FUNC_2(VAR_2, VAR_0);
 if (VAR_4 != ((void*)0)) {
  if (VAR_2->dd_compat_de == ((void*)0))
   VAR_2->dd_compat_de = FUNC_4(sizeof(struct
       freebsd11_dirent));
  if (FUNC_3(VAR_2->dd_compat_de, VAR_4))
   VAR_3 = VAR_2->dd_compat_de;
  else
   VAR_3 = ((void*)0);
 } else
  VAR_3 = ((void*)0);
 if (VAR_1)
  FUNC_1(&VAR_2->dd_lock);

 return (VAR_3);
}
