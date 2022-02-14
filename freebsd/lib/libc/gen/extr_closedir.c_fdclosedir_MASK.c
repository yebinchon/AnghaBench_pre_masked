
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dd_fd; void* dd_compat_de; int dd_lock; scalar_t__ dd_buf; scalar_t__ dd_loc; } ;
typedef TYPE_1__ DIR ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (void*) ;

int
FUNC_5(DIR *VAR_1)
{
 int VAR_2;

 if (VAR_0)
  FUNC_1(&VAR_1->dd_lock);
 VAR_2 = VAR_1->dd_fd;
 VAR_1->dd_fd = -1;
 VAR_1->dd_loc = 0;
 FUNC_4((void *)VAR_1->dd_buf);
 FUNC_4(VAR_1->dd_compat_de);
 FUNC_3(VAR_1);
 if (VAR_0) {
  FUNC_2(&VAR_1->dd_lock);
  FUNC_0(&VAR_1->dd_lock);
 }
 FUNC_4((void *)VAR_1);
 return (VAR_2);
}
