
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_sb_info {int dummy; } ;
struct smb_request {int dummy; } ;
struct dentry {int dummy; } ;
typedef int __u8 ;


 int VAR_0 ;
 int VAR_1 ;
 struct smb_sb_info* FUNC_0 (struct dentry*) ;
 struct smb_request* FUNC_1 (struct smb_sb_info*,int ) ;
 int FUNC_2 (struct smb_request*,int ,int ,int ) ;
 int FUNC_3 (struct smb_request*) ;
 int FUNC_4 (struct smb_request*,char*) ;
 char* FUNC_5 (struct smb_request*,int ,int ,int ) ;
 int FUNC_6 (struct smb_request*,char**,struct dentry*,int *) ;

__attribute__((used)) static int
FUNC_7(struct dentry *VAR_2, __u8 VAR_3)
{
 struct smb_sb_info *VAR_4 = FUNC_0(VAR_2);
 char *VAR_5;
 int VAR_6;
 struct smb_request *VAR_7;

 VAR_6 = -VAR_0;
 if (! (VAR_7 = FUNC_1(VAR_4, VAR_1)))
  goto out;

 VAR_5 = FUNC_5(VAR_7, VAR_3, 0, 0);
 VAR_6 = FUNC_6(VAR_7, &VAR_5, VAR_2, ((void*)0));
 if (VAR_6 < 0)
  goto out_free;
 FUNC_4(VAR_7, VAR_5);

 VAR_6 = FUNC_2(VAR_7, VAR_3, 0, 0);
 if (VAR_6 < 0)
  goto out_free;
 VAR_6 = 0;

out_free:
 FUNC_3(VAR_7);
out:
 return VAR_6;
}
