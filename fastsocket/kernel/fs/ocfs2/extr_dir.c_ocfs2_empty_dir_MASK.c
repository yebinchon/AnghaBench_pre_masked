
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_empty_dir_priv {int seen_other; int seen_dot_dot; int seen_dot; } ;
struct inode {int dummy; } ;
typedef int priv ;
typedef int loff_t ;
struct TYPE_2__ {scalar_t__ ip_blkno; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct ocfs2_empty_dir_priv*,int ,int) ;
 int FUNC_2 (int ,char*,unsigned long long) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct inode*,int *,struct ocfs2_empty_dir_priv*,int ) ;
 scalar_t__ FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*,struct ocfs2_empty_dir_priv*) ;
 int VAR_1 ;

int FUNC_7(struct inode *VAR_2)
{
 int VAR_3;
 loff_t VAR_4 = 0;
 struct ocfs2_empty_dir_priv VAR_5;

 FUNC_1(&VAR_5, 0, sizeof(VAR_5));

 if (FUNC_5(VAR_2)) {
  VAR_3 = FUNC_6(VAR_2, &VAR_5);
  if (VAR_3)
   FUNC_3(VAR_3);




 }

 VAR_3 = FUNC_4(VAR_2, &VAR_4, &VAR_5, VAR_1);
 if (VAR_3)
  FUNC_3(VAR_3);

 if (!VAR_5.seen_dot || !VAR_5.seen_dot_dot) {
  FUNC_2(VAR_0, "bad directory (dir #%llu) - no `.' or `..'\n",
       (unsigned long long)FUNC_0(VAR_2)->ip_blkno);



  return 1;
 }

 return !VAR_5.seen_other;
}
