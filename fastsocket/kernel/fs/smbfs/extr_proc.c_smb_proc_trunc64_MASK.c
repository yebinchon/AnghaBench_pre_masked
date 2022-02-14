
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smb_sb_info {int dummy; } ;
struct smb_request {char* rq_buffer; int rq_ldata; char* rq_data; int rq_lparm; char* rq_parm; scalar_t__ rq_rcls; int rq_flags; int rq_trans2_command; } ;
struct inode {int dummy; } ;
typedef int loff_t ;
struct TYPE_2__ {int fileid; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ) ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*,int,int ) ;
 struct smb_sb_info* FUNC_3 (struct inode*) ;
 int FUNC_4 (struct smb_request*) ;
 struct smb_request* FUNC_5 (struct smb_sb_info*,int) ;
 int FUNC_6 (struct smb_request*) ;
 int FUNC_7 (struct smb_request*) ;

__attribute__((used)) static int
FUNC_8(struct inode *VAR_4, loff_t VAR_5)
{
 struct smb_sb_info *VAR_6 = FUNC_3(VAR_4);
 int VAR_7;
 char *VAR_8;
 char *VAR_9;
 struct smb_request *VAR_10;

 VAR_7 = -VAR_0;
 if (! (VAR_10 = FUNC_5(VAR_6, 14)))
  goto out;

 VAR_8 = VAR_10->rq_buffer;
 VAR_9 = VAR_10->rq_buffer + 6;


 FUNC_2(VAR_8, 0, FUNC_1(VAR_4)->fileid);
 FUNC_2(VAR_8, 2, VAR_2);
 FUNC_2(VAR_8, 4, 0);
 FUNC_0(VAR_9, 0, VAR_5);

 VAR_10->rq_trans2_command = VAR_3;
 VAR_10->rq_ldata = 8;
 VAR_10->rq_data = VAR_9;
 VAR_10->rq_lparm = 6;
 VAR_10->rq_parm = VAR_8;
 VAR_10->rq_flags |= VAR_1;
 VAR_7 = FUNC_4(VAR_10);
 if (VAR_7 < 0)
  goto out_free;

 VAR_7 = 0;
 if (VAR_10->rq_rcls != 0)
  VAR_7 = FUNC_6(VAR_10);

out_free:
 FUNC_7(VAR_10);
out:
 return VAR_7;
}
