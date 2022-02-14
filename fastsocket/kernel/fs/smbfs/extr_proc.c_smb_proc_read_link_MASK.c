
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_sb_info {int dummy; } ;
struct smb_request {char* rq_buffer; int rq_ldata; int rq_lparm; char* rq_parm; int * rq_data; int rq_err; int rq_rcls; scalar_t__ rq_flags; int rq_trans2_command; } ;
struct dentry {int dummy; } ;


 int FUNC_0 (char*,char*,...) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (char*,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (struct smb_request*) ;
 struct smb_request* FUNC_5 (struct smb_sb_info*,int ) ;
 int FUNC_6 (struct smb_sb_info*,char*,scalar_t__,struct dentry*,int *) ;
 int FUNC_7 (struct smb_request*) ;
 int FUNC_8 (char*,int *,int) ;

int
FUNC_9(struct smb_sb_info *VAR_5, struct dentry *VAR_6,
     char *VAR_7, int VAR_8)
{
 char *VAR_9, *VAR_10;
 int VAR_11;
 struct smb_request *VAR_12;

 FUNC_0("readlink of %s/%s\n", FUNC_1(VAR_6));

 VAR_11 = -VAR_0;
 if (! (VAR_12 = FUNC_5(VAR_5, VAR_1)))
  goto out;
 VAR_10 = VAR_12->rq_buffer;

 FUNC_3(VAR_10, 0, VAR_3);
 FUNC_2(VAR_10, 2, 0);
 VAR_11 = FUNC_6(VAR_5, VAR_10+6, VAR_2+1, VAR_6, ((void*)0));
 if (VAR_11 < 0)
  goto out_free;
 VAR_9 = VAR_10 + 6 + VAR_11;

 VAR_12->rq_trans2_command = VAR_4;
 VAR_12->rq_ldata = 0;
 VAR_12->rq_data = ((void*)0);
 VAR_12->rq_lparm = VAR_9 - VAR_10;
 VAR_12->rq_parm = VAR_10;
 VAR_12->rq_flags = 0;
 VAR_11 = FUNC_4(VAR_12);
 if (VAR_11 < 0)
  goto out_free;
 FUNC_0("for %s: result=%d, rcls=%d, err=%d\n",
  &VAR_10[6], VAR_11, VAR_12->rq_rcls, VAR_12->rq_err);


 VAR_11 = VAR_8;
 if (VAR_12->rq_ldata < VAR_8)
  VAR_11 = VAR_12->rq_ldata;
 FUNC_8(VAR_7, VAR_12->rq_data, VAR_11);

out_free:
 FUNC_7(VAR_12);
out:
 return VAR_11;
}
