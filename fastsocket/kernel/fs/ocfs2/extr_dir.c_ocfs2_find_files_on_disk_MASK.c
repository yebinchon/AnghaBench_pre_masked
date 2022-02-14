
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct ocfs2_dir_lookup_result {TYPE_1__* dl_entry; } ;
struct inode {int dummy; } ;
struct TYPE_4__ {scalar_t__ ip_blkno; } ;
struct TYPE_3__ {int inode; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct inode*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int,char const*,int *,unsigned long long) ;
 int FUNC_3 (char const*,int,struct inode*,struct ocfs2_dir_lookup_result*) ;

int FUNC_4(const char *VAR_1,
        int VAR_2,
        u64 *VAR_3,
        struct inode *VAR_4,
        struct ocfs2_dir_lookup_result *VAR_5)
{
 int VAR_6 = -VAR_0;

 FUNC_2(0, "name=%.*s, blkno=%p, inode=%llu\n", VAR_2, VAR_1, VAR_3,
      (unsigned long long)FUNC_0(VAR_4)->ip_blkno);

 VAR_6 = FUNC_3(VAR_1, VAR_2, VAR_4, VAR_5);
 if (VAR_6)
  goto leave;

 *VAR_3 = FUNC_1(VAR_5->dl_entry->inode);

 VAR_6 = 0;
leave:

 return VAR_6;
}
