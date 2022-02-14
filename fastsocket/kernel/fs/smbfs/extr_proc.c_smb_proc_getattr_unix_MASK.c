
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_sb_info {int dummy; } ;
struct smb_request {int rq_data; } ;
struct smb_fattr {int dummy; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct smb_request* FUNC_0 (struct smb_sb_info*,int ) ;
 int FUNC_1 (struct smb_fattr*,struct smb_sb_info*,int ) ;
 int FUNC_2 (struct smb_sb_info*,struct dentry*,struct smb_request*,int ) ;
 int FUNC_3 (struct smb_request*) ;

__attribute__((used)) static int
FUNC_4(struct smb_sb_info *VAR_3, struct dentry *VAR_4,
        struct smb_fattr *VAR_5)
{
 struct smb_request *VAR_6;
 int VAR_7;

 VAR_7 = -VAR_0;
 if (! (VAR_6 = FUNC_0(VAR_3, VAR_1)))
  goto out;

 VAR_7 = FUNC_2(VAR_3, VAR_4, VAR_6,
      VAR_2);
 if (VAR_7 < 0)
  goto out_free;

 FUNC_1(VAR_5, VAR_3, VAR_6->rq_data);

out_free:
 FUNC_3(VAR_6);
out:
 return VAR_7;
}
