
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_sb_info {int dummy; } ;
struct smb_request {int rq_header; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct smb_sb_info* FUNC_1 (struct dentry*) ;
 struct smb_request* FUNC_2 (struct smb_sb_info*,int ) ;
 int FUNC_3 (struct smb_request*,int ,int ,int ) ;
 int FUNC_4 (struct smb_request*) ;
 int FUNC_5 (struct smb_request*,char*) ;
 char* FUNC_6 (struct smb_request*,int ,int,int ) ;
 int FUNC_7 (struct smb_request*,char**,struct dentry*,int *) ;
 int VAR_6 ;

int
FUNC_8(struct dentry *VAR_7, struct dentry *VAR_8)
{
 struct smb_sb_info *VAR_9 = FUNC_1(VAR_7);
 char *VAR_10;
 int VAR_11;
 struct smb_request *VAR_12;

 VAR_11 = -VAR_0;
 if (! (VAR_12 = FUNC_2(VAR_9, VAR_1)))
  goto out;

 VAR_10 = FUNC_6(VAR_12, VAR_2, 1, 0);
 FUNC_0(VAR_12->rq_header, VAR_6, VAR_5 | VAR_4 | VAR_3);
 VAR_11 = FUNC_7(VAR_12, &VAR_10, VAR_7, ((void*)0));
 if (VAR_11 < 0)
  goto out_free;
 VAR_11 = FUNC_7(VAR_12, &VAR_10, VAR_8, ((void*)0));
 if (VAR_11 < 0)
  goto out_free;
 FUNC_5(VAR_12, VAR_10);

 if ((VAR_11 = FUNC_3(VAR_12, VAR_2, 0, 0)) < 0)
  goto out_free;
 VAR_11 = 0;

out_free:
 FUNC_4(VAR_12);
out:
 return VAR_11;
}
