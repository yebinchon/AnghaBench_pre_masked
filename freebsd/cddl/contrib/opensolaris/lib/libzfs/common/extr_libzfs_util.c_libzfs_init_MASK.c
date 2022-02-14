
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int libzfs_prop_debug; int * libzfs_sharetab; int * libzfs_mnttab; int libzfs_fd; } ;
typedef TYPE_1__ libzfs_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 void* FUNC_3 (int ,char*) ;
 int FUNC_4 (TYPE_1__*) ;
 int * FUNC_5 (char*) ;
 scalar_t__ FUNC_6 () ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 () ;

libzfs_handle_t *
FUNC_13(void)
{
 libzfs_handle_t *VAR_5;

 if ((VAR_5 = FUNC_0(1, sizeof (libzfs_handle_t))) == ((void*)0)) {
  return (((void*)0));
 }

 if (FUNC_7() < 0) {
  FUNC_4(VAR_5);
  return (((void*)0));
 }

 if ((VAR_5->libzfs_fd = FUNC_9(VAR_3, VAR_2)) < 0) {
  FUNC_4(VAR_5);
  return (((void*)0));
 }

 if ((VAR_5->libzfs_mnttab = FUNC_3(VAR_1, "r")) == ((void*)0)) {
  (void) FUNC_1(VAR_5->libzfs_fd);
  FUNC_4(VAR_5);
  return (((void*)0));
 }

 VAR_5->libzfs_sharetab = FUNC_3(VAR_4, "r");

 if (FUNC_6() != 0) {
  (void) FUNC_1(VAR_5->libzfs_fd);
  (void) FUNC_2(VAR_5->libzfs_mnttab);
  (void) FUNC_2(VAR_5->libzfs_sharetab);
  FUNC_4(VAR_5);
  return (((void*)0));
 }

 FUNC_10();
 FUNC_12();
 FUNC_11();
 FUNC_8(VAR_5);

 if (FUNC_5("ZFS_PROP_DEBUG") != ((void*)0)) {
  VAR_5->libzfs_prop_debug = VAR_0;
 }

 return (VAR_5);
}
