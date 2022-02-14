
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smb_sb_info {int dummy; } ;
struct smb_request {int rq_header; } ;
struct TYPE_2__ {scalar_t__ tv_nsec; int tv_sec; } ;
struct smb_fattr {TYPE_1__ f_mtime; TYPE_1__ f_atime; TYPE_1__ f_ctime; int f_size; int attr; } ;
struct dentry {int dummy; } ;


 int FUNC_0 (struct dentry*) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct smb_sb_info*,int ) ;
 int FUNC_4 (char*,int ,TYPE_1__) ;
 struct smb_request* FUNC_5 (struct smb_sb_info*,int ) ;
 int FUNC_6 (struct smb_request*,int ,int,int ) ;
 int FUNC_7 (struct smb_request*) ;
 int FUNC_8 (struct smb_request*,char*) ;
 char* FUNC_9 (struct smb_request*,int ,int ,int ) ;
 int FUNC_10 (struct smb_request*,char**,struct dentry*,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_11(struct smb_sb_info *VAR_6, struct dentry *VAR_7,
        struct smb_fattr *VAR_8)
{
 int VAR_9;
 char *VAR_10;
 struct smb_request *VAR_11;

 VAR_9 = -VAR_0;
 if (! (VAR_11 = FUNC_5(VAR_6, VAR_1)))
  goto out;

 VAR_10 = FUNC_9(VAR_11, VAR_2, 0, 0);
 VAR_9 = FUNC_10(VAR_11, &VAR_10, VAR_7, ((void*)0));
 if (VAR_9 < 0)
   goto out_free;
 FUNC_8(VAR_11, VAR_10);

 if ((VAR_9 = FUNC_6(VAR_11, VAR_2, 10, 0)) < 0)
  goto out_free;
 VAR_8->attr = FUNC_2(VAR_11->rq_header, VAR_3);
 VAR_8->f_mtime.tv_sec = FUNC_3(VAR_6, FUNC_1(VAR_11->rq_header, VAR_4));
 VAR_8->f_mtime.tv_nsec = 0;
 VAR_8->f_size = FUNC_1(VAR_11->rq_header, VAR_5);
 VAR_8->f_ctime = VAR_8->f_mtime;
 VAR_8->f_atime = VAR_8->f_mtime;




 VAR_9 = 0;

out_free:
 FUNC_7(VAR_11);
out:
 return VAR_9;
}
