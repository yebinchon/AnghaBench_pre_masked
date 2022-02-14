
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ time; } ;
union smb_dir_cache {TYPE_1__ head; } ;
struct smb_sb_info {int dummy; } ;
struct page {int dummy; } ;
struct inode {int i_data; } ;


 int FUNC_0 (struct page*) ;
 scalar_t__ FUNC_1 (struct smb_sb_info*) ;
 int FUNC_2 (struct page*) ;
 struct page* FUNC_3 (int *,int ) ;
 scalar_t__ VAR_0 ;
 union smb_dir_cache* FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;
 struct smb_sb_info* FUNC_7 (struct inode*) ;
 int FUNC_8 (struct page*) ;

void
FUNC_9(struct inode * VAR_1)
{
 struct smb_sb_info *VAR_2 = FUNC_7(VAR_1);
 union smb_dir_cache *VAR_3 = ((void*)0);
 struct page *VAR_4 = ((void*)0);

 VAR_4 = FUNC_3(&VAR_1->i_data, 0);
 if (!VAR_4)
  goto out;

 if (!FUNC_0(VAR_4))
  goto out_unlock;

 VAR_3 = FUNC_4(VAR_4);
 VAR_3->head.time = VAR_0 - FUNC_1(VAR_2);

 FUNC_5(VAR_4);
 FUNC_2(VAR_4);
out_unlock:
 FUNC_8(VAR_4);
 FUNC_6(VAR_4);
out:
 return;
}
