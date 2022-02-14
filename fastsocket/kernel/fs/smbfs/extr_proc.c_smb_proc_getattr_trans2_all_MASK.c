
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_sb_info {int dummy; } ;
struct smb_request {int rq_data; } ;
struct smb_fattr {int f_size; int attr; void* f_mtime; void* f_atime; void* f_ctime; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int) ;
 struct smb_request* FUNC_2 (struct smb_sb_info*,int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (struct smb_sb_info*,struct dentry*,struct smb_request*,int ) ;
 int FUNC_5 (struct smb_request*) ;

__attribute__((used)) static int
FUNC_6(struct smb_sb_info *VAR_3, struct dentry *VAR_4,
       struct smb_fattr *VAR_5)
{
 struct smb_request *VAR_6;
 int VAR_7;

 VAR_7 = -VAR_0;
 if (! (VAR_6 = FUNC_2(VAR_3, VAR_1)))
  goto out;

 VAR_7 = FUNC_4(VAR_3, VAR_4, VAR_6,
      VAR_2);
 if (VAR_7 < 0)
  goto out_free;

 VAR_5->f_ctime = FUNC_3(FUNC_0(VAR_6->rq_data, 0));
 VAR_5->f_atime = FUNC_3(FUNC_0(VAR_6->rq_data, 8));
 VAR_5->f_mtime = FUNC_3(FUNC_0(VAR_6->rq_data, 16));

 VAR_5->attr = FUNC_1(VAR_6->rq_data, 32);


 VAR_5->f_size = FUNC_0(VAR_6->rq_data, 48);

out_free:
 FUNC_5(VAR_6);
out:
 return VAR_7;
}
