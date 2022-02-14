
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_sb_info {int dummy; } ;
struct smb_request {char* rq_buffer; int rq_ldata; int rq_lparm; char* rq_parm; int rq_err; int rq_rcls; scalar_t__ rq_flags; int * rq_data; int rq_trans2_command; } ;
struct dentry {int dummy; } ;


 int FUNC_0 (char*,int,int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,char*,int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*,char*,int,int ,int ) ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (struct smb_request*) ;
 int FUNC_5 (struct smb_sb_info*,char*,scalar_t__,struct dentry*,int *) ;
 int FUNC_6 (struct smb_request*) ;

__attribute__((used)) static int
FUNC_7(struct smb_sb_info *VAR_3, struct dentry *VAR_4,
   struct smb_request *VAR_5, int VAR_6)
{
 char *VAR_7, *VAR_8;
 int VAR_9;

 VAR_8 = VAR_5->rq_buffer;
 FUNC_3(VAR_8, 0, VAR_6);
 FUNC_0(VAR_8, 2, 0);
 VAR_9 = FUNC_5(VAR_3, VAR_8+6, VAR_1+1, VAR_4, ((void*)0));
 if (VAR_9 < 0)
  goto out;
 VAR_7 = VAR_8 + 6 + VAR_9;

 VAR_5->rq_trans2_command = VAR_2;
 VAR_5->rq_ldata = 0;
 VAR_5->rq_data = ((void*)0);
 VAR_5->rq_lparm = VAR_7 - VAR_8;
 VAR_5->rq_parm = VAR_8;
 VAR_5->rq_flags = 0;
 VAR_9 = FUNC_4(VAR_5);
 if (VAR_9 < 0)
  goto out;
 if (VAR_5->rq_rcls != 0) {
  FUNC_2("for %s: result=%d, rcls=%d, err=%d\n",
   &VAR_8[6], VAR_9, VAR_5->rq_rcls, VAR_5->rq_err);
  VAR_9 = FUNC_6(VAR_5);
  goto out;
 }
 VAR_9 = -VAR_0;
 if (VAR_5->rq_ldata < 22) {
  FUNC_1("not enough data for %s, len=%d\n",
    &VAR_8[6], VAR_5->rq_ldata);
  goto out;
 }

 VAR_9 = 0;
out:
 return VAR_9;
}
