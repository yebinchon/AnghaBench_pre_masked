
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct super_block {int s_flags; } ;
struct TYPE_10__ {int vol_flags; int major_ver; int logfile_ino; } ;
typedef TYPE_1__ ntfs_volume ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (struct super_block*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct super_block*,char*,...) ;
 int FUNC_9 (TYPE_1__*) ;
 scalar_t__ FUNC_10 (TYPE_1__*,int) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (struct super_block*,char*) ;
 int FUNC_13 (TYPE_1__*,char*) ;
 int FUNC_14 () ;

__attribute__((used)) static int FUNC_15(struct super_block *VAR_7, int *VAR_8, char *VAR_9)
{
 ntfs_volume *VAR_10 = FUNC_0(VAR_7);

 FUNC_6("Entering with remount options string: %s", VAR_9);

 FUNC_4();


 *VAR_8 |= VAR_2;
 if (!FUNC_13(VAR_10, VAR_9)) {
  FUNC_14();
  return -VAR_0;
 }
 FUNC_14();
 FUNC_6("Done.");
 return 0;
}
