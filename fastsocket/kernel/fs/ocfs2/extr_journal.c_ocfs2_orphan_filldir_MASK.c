
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct ocfs2_orphan_filldir_priv {struct inode* head; int osb; } ;
struct inode {int dummy; } ;
typedef int loff_t ;
struct TYPE_2__ {struct inode* ip_next_orphan; scalar_t__ ip_blkno; } ;


 scalar_t__ FUNC_0 (struct inode*) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 int FUNC_2 (int ,char*,unsigned long long) ;
 struct inode* FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (char*,char const*,int) ;

__attribute__((used)) static int FUNC_5(void *VAR_1, const char *VAR_2, int VAR_3,
    loff_t VAR_4, u64 VAR_5, unsigned VAR_6)
{
 struct ocfs2_orphan_filldir_priv *VAR_7 = VAR_1;
 struct inode *VAR_8;

 if (VAR_3 == 1 && !FUNC_4(".", VAR_2, 1))
  return 0;
 if (VAR_3 == 2 && !FUNC_4("..", VAR_2, 2))
  return 0;


 VAR_8 = FUNC_3(VAR_7->osb, VAR_5,
     VAR_0, 0);
 if (FUNC_0(VAR_8))
  return 0;

 FUNC_2(0, "queue orphan %llu\n",
      (unsigned long long)FUNC_1(VAR_8)->ip_blkno);


 FUNC_1(VAR_8)->ip_next_orphan = VAR_7->head;
 VAR_7->head = VAR_8;

 return 0;
}
