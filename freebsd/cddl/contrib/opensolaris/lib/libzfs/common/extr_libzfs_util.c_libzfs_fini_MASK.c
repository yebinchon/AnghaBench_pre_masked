
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ libzfs_sharetab; scalar_t__ libzfs_mnttab; int libzfs_fd; } ;
typedef TYPE_1__ libzfs_handle_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;

void
FUNC_9(libzfs_handle_t *VAR_1)
{
 (void) FUNC_0(VAR_1->libzfs_fd);
 if (VAR_1->libzfs_mnttab)
  (void) FUNC_1(VAR_1->libzfs_mnttab);
 if (VAR_1->libzfs_sharetab)
  (void) FUNC_1(VAR_1->libzfs_sharetab);
 FUNC_7(VAR_1);
 FUNC_8(VAR_1);



 FUNC_6(VAR_1);
 FUNC_5(VAR_1);
 FUNC_3();
 FUNC_2(VAR_1);
}
