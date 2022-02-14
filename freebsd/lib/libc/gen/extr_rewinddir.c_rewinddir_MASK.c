
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int dd_flags; int dd_lock; scalar_t__ dd_loc; scalar_t__ dd_seek; int dd_fd; } ;
typedef TYPE_1__ DIR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,int ,int ) ;

void
FUNC_5(DIR *VAR_4)
{

 if (VAR_3)
  FUNC_1(&VAR_4->dd_lock);
 VAR_4->dd_flags &= ~VAR_2;
 if (VAR_4->dd_flags & VAR_1)
  FUNC_0(VAR_4, 0);
 else {
  (void) FUNC_4(VAR_4->dd_fd, 0, VAR_0);
  VAR_4->dd_seek = 0;
 }
 VAR_4->dd_loc = 0;
 FUNC_3(VAR_4);
 if (VAR_3)
  FUNC_2(&VAR_4->dd_lock);
}
