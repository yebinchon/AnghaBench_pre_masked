
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct stat_data_v1 {int dummy; } ;
struct TYPE_7__ {int tv_sec; } ;
struct TYPE_6__ {int tv_sec; } ;
struct TYPE_5__ {int tv_sec; } ;
struct inode {int i_rdev; int i_mode; TYPE_3__ i_mtime; TYPE_2__ i_ctime; TYPE_1__ i_atime; int i_nlink; int i_gid; int i_uid; } ;
typedef int loff_t ;
struct TYPE_8__ {int i_first_direct_byte; } ;


 TYPE_4__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct stat_data_v1*,int ) ;
 int FUNC_5 (struct stat_data_v1*,int ) ;
 int FUNC_6 (struct stat_data_v1*,int ) ;
 int FUNC_7 (struct stat_data_v1*,int ) ;
 int FUNC_8 (struct stat_data_v1*,int ) ;
 int FUNC_9 (struct stat_data_v1*,int ) ;
 int FUNC_10 (struct stat_data_v1*,int ) ;
 int FUNC_11 (struct stat_data_v1*,int ) ;
 int FUNC_12 (struct stat_data_v1*,int ) ;
 int FUNC_13 (struct stat_data_v1*,int ) ;
 int FUNC_14 (struct stat_data_v1*,int ) ;
 int FUNC_15 (struct inode*,int ) ;

__attribute__((used)) static void FUNC_16(void *VAR_1, struct inode *VAR_2, loff_t VAR_3)
{
 struct stat_data_v1 *VAR_4 = (struct stat_data_v1 *)VAR_1;

 FUNC_9(VAR_4, VAR_2->i_mode);
 FUNC_14(VAR_4, VAR_2->i_uid);
 FUNC_8(VAR_4, VAR_2->i_gid);
 FUNC_11(VAR_4, VAR_2->i_nlink);
 FUNC_13(VAR_4, VAR_3);
 FUNC_4(VAR_4, VAR_2->i_atime.tv_sec);
 FUNC_6(VAR_4, VAR_2->i_ctime.tv_sec);
 FUNC_10(VAR_4, VAR_2->i_mtime.tv_sec);

 if (FUNC_2(VAR_2->i_mode) || FUNC_1(VAR_2->i_mode))
  FUNC_12(VAR_4, FUNC_3(VAR_2->i_rdev));
 else
  FUNC_5(VAR_4, FUNC_15(VAR_2, VAR_0));


 FUNC_7(VAR_4,
        FUNC_0(VAR_2)->i_first_direct_byte);
}
