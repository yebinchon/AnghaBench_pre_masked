
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_sb_info {int dummy; } ;
struct smb_request {char* rq_buffer; char* rq_data; int rq_lparm; char* rq_parm; int rq_err; int rq_rcls; scalar_t__ rq_flags; scalar_t__ rq_ldata; int rq_trans2_command; } ;
struct dentry {int dummy; } ;


 int FUNC_0 (char*,char*,int,int ,int ) ;
 int FUNC_1 (char*,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (struct smb_request*) ;
 struct smb_request* FUNC_4 (struct smb_sb_info*,int ) ;
 int FUNC_5 (struct smb_sb_info*,char*,scalar_t__,struct dentry*,int *) ;
 int FUNC_6 (struct smb_request*) ;
 scalar_t__ FUNC_7 (char const*) ;

int
FUNC_8(struct smb_sb_info *VAR_5, struct dentry *VAR_6,
   const char *VAR_7)
{
 char *VAR_8, *VAR_9;
 int VAR_10;
 struct smb_request *VAR_11;

 VAR_10 = -VAR_0;
 if (! (VAR_11 = FUNC_4(VAR_5, VAR_1)))
  goto out;
 VAR_9 = VAR_11->rq_buffer;

 FUNC_2(VAR_9, 0, VAR_3);
 FUNC_1(VAR_9, 2, 0);
 VAR_10 = FUNC_5(VAR_5, VAR_9 + 6, VAR_2+1, VAR_6, ((void*)0));
 if (VAR_10 < 0)
  goto out_free;
 VAR_8 = VAR_9 + 6 + VAR_10;

 VAR_11->rq_trans2_command = VAR_4;
 VAR_11->rq_ldata = FUNC_7(VAR_7) + 1;
 VAR_11->rq_data = (char *) VAR_7;
 VAR_11->rq_lparm = VAR_8 - VAR_9;
 VAR_11->rq_parm = VAR_9;
 VAR_11->rq_flags = 0;
 VAR_10 = FUNC_3(VAR_11);
 if (VAR_10 < 0)
  goto out_free;

 FUNC_0("for %s: result=%d, rcls=%d, err=%d\n",
  &VAR_9[6], VAR_10, VAR_11->rq_rcls, VAR_11->rq_err);
 VAR_10 = 0;

out_free:
 FUNC_6(VAR_11);
out:
 return VAR_10;
}
