
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_sb_info {int dummy; } ;
struct smb_request {int rq_header; } ;
struct kstatfs {long f_blocks; long f_bavail; long f_bfree; int f_bsize; } ;
struct dentry {int d_sb; } ;


 int VAR_0 ;
 struct smb_sb_info* FUNC_0 (int ) ;
 long VAR_1 ;
 int VAR_2 ;
 char* FUNC_1 (int ) ;
 int VAR_3 ;
 long FUNC_2 (char*,int) ;
 struct smb_request* FUNC_3 (struct smb_sb_info*,int ) ;
 int FUNC_4 (struct smb_request*,int ,int,int ) ;
 int FUNC_5 (struct smb_request*) ;
 int FUNC_6 (struct smb_request*,int ,int ,int ) ;

int
FUNC_7(struct dentry *VAR_4, struct kstatfs *VAR_5)
{
 struct smb_sb_info *VAR_6 = FUNC_0(VAR_4->d_sb);
 int VAR_7;
 char *VAR_8;
 long VAR_9;
 struct smb_request *VAR_10;

 VAR_7 = -VAR_0;
 if (! (VAR_10 = FUNC_3(VAR_6, 0)))
  goto out;

 FUNC_6(VAR_10, VAR_3, 0, 0);
 if ((VAR_7 = FUNC_4(VAR_10, VAR_3, 5, 0)) < 0)
  goto out_free;
 VAR_8 = FUNC_1(VAR_10->rq_header);
 VAR_9 = (FUNC_2(VAR_8, 2) * FUNC_2(VAR_8, 4)) >> VAR_1;
 VAR_5->f_blocks = FUNC_2(VAR_8, 0) * VAR_9;
 VAR_5->f_bsize = VAR_2;
 VAR_5->f_bavail = VAR_5->f_bfree = FUNC_2(VAR_8, 6) * VAR_9;
 VAR_7 = 0;

out_free:
 FUNC_5(VAR_10);
out:
 return VAR_7;
}
