
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*) ;
 int VAR_1 ;

void
FUNC_4(void)
{
 if (! FUNC_3("MOUNT_FUSEFS_CALL_BY_LIB")) {
  FUNC_0();
  FUNC_2(VAR_1, "description of options:\n");
 }






 FUNC_2(VAR_1,
         "    -o allow_other         allow access to other users\n"

         "    -o default_permissions enable permission checking by kernel\n"
  "    -o intr                interruptible mount\n"




         "    -o subtype=NAME        set filesystem type\n"
         "    -o max_read=N          set maximum size of read requests\n"
         "    -o noprivate           allow secondary mounting of the filesystem\n"
         "    -o neglect_shares      don't report EBUSY when unmount attempted\n"
         "                           in presence of secondary mounts\n"
         "    -o push_symlinks_in    prefix absolute symlinks with mountpoint\n"
         );
 FUNC_1(VAR_0);
}
