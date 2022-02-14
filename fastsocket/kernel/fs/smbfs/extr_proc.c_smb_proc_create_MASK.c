
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct smb_sb_info {int dummy; } ;
struct smb_request {int rq_header; } ;
struct dentry {int dummy; } ;
typedef int __u16 ;


 int FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 struct smb_sb_info* FUNC_3 (struct dentry*) ;
 struct smb_request* FUNC_4 (struct smb_sb_info*,int ) ;
 int FUNC_5 (struct smb_request*,int ,int,int ) ;
 int FUNC_6 (struct smb_request*) ;
 int FUNC_7 (struct smb_request*,char*) ;
 char* FUNC_8 (struct smb_request*,int ,int,int ) ;
 int FUNC_9 (struct smb_request*,char**,struct dentry*,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_10 (struct smb_sb_info*,int ) ;

int
FUNC_11(struct dentry *VAR_5, __u16 VAR_6, time_t VAR_7, __u16 *VAR_8)
{
 struct smb_sb_info *VAR_9 = FUNC_3(VAR_5);
 char *VAR_10;
 int VAR_11;
 struct smb_request *VAR_12;

 VAR_11 = -VAR_0;
 if (! (VAR_12 = FUNC_4(VAR_9, VAR_1)))
  goto out;

 VAR_10 = FUNC_8(VAR_12, VAR_2, 3, 0);
 FUNC_1(VAR_12->rq_header, VAR_3, VAR_6);
 FUNC_0(VAR_12->rq_header, VAR_4, FUNC_10(VAR_9, VAR_7));
 VAR_11 = FUNC_9(VAR_12, &VAR_10, VAR_5, ((void*)0));
 if (VAR_11 < 0)
  goto out_free;
 FUNC_7(VAR_12, VAR_10);

 VAR_11 = FUNC_5(VAR_12, VAR_2, 1, 0);
 if (VAR_11 < 0)
  goto out_free;

 *VAR_8 = FUNC_2(VAR_12->rq_header, VAR_3);
 VAR_11 = 0;

out_free:
 FUNC_6(VAR_12);
out:
 return VAR_11;
}
