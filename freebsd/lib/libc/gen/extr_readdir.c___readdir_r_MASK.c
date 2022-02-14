
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct dirent {int dummy; } ;
struct TYPE_4__ {int dd_lock; } ;
typedef TYPE_1__ DIR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dirent*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct dirent* FUNC_3 (TYPE_1__*,int) ;
 int VAR_3 ;
 int FUNC_4 (struct dirent*,struct dirent*,int ) ;

int
FUNC_5(DIR *VAR_4, struct dirent *VAR_5, struct dirent **VAR_6)
{
 struct dirent *VAR_7;
 int VAR_8;

 VAR_8 = VAR_3;
 VAR_3 = 0;
 if (VAR_2)
  FUNC_1(&VAR_4->dd_lock);
 VAR_7 = FUNC_3(VAR_4, VAR_1 | VAR_0);
 if (VAR_7 != ((void*)0))
  FUNC_4(VAR_5, VAR_7, FUNC_0(VAR_7));
 if (VAR_2)
  FUNC_2(&VAR_4->dd_lock);

 if (VAR_3 != 0) {
  if (VAR_7 == ((void*)0))
   return (VAR_3);
 } else
  VAR_3 = VAR_8;

 if (VAR_7 != ((void*)0))
  *VAR_6 = VAR_5;
 else
  *VAR_6 = ((void*)0);

 return (0);
}
