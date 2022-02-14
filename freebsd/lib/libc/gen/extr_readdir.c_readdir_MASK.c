
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct dirent {int dummy; } ;
struct TYPE_4__ {int dd_lock; } ;
typedef TYPE_1__ DIR ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct dirent* FUNC_2 (TYPE_1__*,int ) ;

struct dirent *
FUNC_3(DIR *VAR_2)
{
 struct dirent *VAR_3;

 if (VAR_1)
  FUNC_0(&VAR_2->dd_lock);
 VAR_3 = FUNC_2(VAR_2, VAR_0);
 if (VAR_1)
  FUNC_1(&VAR_2->dd_lock);
 return (VAR_3);
}
