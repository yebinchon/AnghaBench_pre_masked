
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct smb_sb_info {int dummy; } ;
struct smb_request {char* rq_buffer; int rq_ldata; char* rq_data; int rq_lparm; char* rq_parm; scalar_t__ rq_rcls; int rq_err; scalar_t__ rq_flags; int rq_trans2_command; } ;
struct TYPE_6__ {void* tv_sec; scalar_t__ tv_nsec; } ;
struct TYPE_5__ {scalar_t__ tv_nsec; void* tv_sec; } ;
struct TYPE_4__ {scalar_t__ tv_nsec; void* tv_sec; } ;
struct smb_fattr {int attr; int f_size; TYPE_3__ f_mtime; TYPE_2__ f_atime; TYPE_1__ f_ctime; } ;
struct dentry {int dummy; } ;
typedef int __u16 ;


 int FUNC_0 (char*,int,int ) ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*,char*,int,int) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (char*,char*,int,...) ;
 int FUNC_4 (char*,int,int) ;
 int FUNC_5 (char*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_6 (struct smb_sb_info*,int,int) ;
 int FUNC_7 (struct smb_request*) ;
 struct smb_request* FUNC_8 (struct smb_sb_info*,int ) ;
 int FUNC_9 (struct smb_sb_info*,char*,scalar_t__,struct dentry*,int *) ;
 int FUNC_10 (struct smb_request*) ;
 int FUNC_11 (struct smb_request*) ;

__attribute__((used)) static int
FUNC_12(struct smb_sb_info *VAR_9, struct dentry *VAR_10,
   struct smb_fattr *VAR_11)
{
 char *VAR_12, *VAR_13;
 __u16 VAR_14, VAR_15;
 int VAR_16, VAR_17;
 struct smb_request *VAR_18;

 VAR_17 = -VAR_2;
 if (! (VAR_18 = FUNC_8(VAR_9, VAR_3)))
  goto out;
 VAR_12 = VAR_18->rq_buffer;
 VAR_13 = VAR_12 + 12;

 VAR_16 = FUNC_9(VAR_9, VAR_13, VAR_4+1, VAR_10,((void*)0));
 if (VAR_16 < 0) {
  VAR_17 = VAR_16;
  goto out_free;
 }
 FUNC_3("name=%s, len=%d\n", VAR_13, VAR_16);
 FUNC_4(VAR_12, 0, VAR_8 | VAR_7 | VAR_6);
 FUNC_4(VAR_12, 2, 1);
 FUNC_4(VAR_12, 4, 1);
 FUNC_4(VAR_12, 6, 1);
 FUNC_0(VAR_12, 8, 0);

 VAR_18->rq_trans2_command = VAR_5;
 VAR_18->rq_ldata = 0;
 VAR_18->rq_data = ((void*)0);
 VAR_18->rq_lparm = 12 + VAR_16;
 VAR_18->rq_parm = VAR_12;
 VAR_18->rq_flags = 0;
 VAR_17 = FUNC_7(VAR_18);
 if (VAR_17 < 0)
  goto out_free;
 if (VAR_18->rq_rcls != 0) {
  VAR_17 = FUNC_10(VAR_18);





  goto out_free;
 }

 VAR_17 = -VAR_0;
 if (VAR_18->rq_ldata < 22 || FUNC_5(VAR_18->rq_parm, 2) != 1) {
  FUNC_2("bad result for %s, len=%d, count=%d\n",
    VAR_13, VAR_18->rq_ldata, FUNC_5(VAR_18->rq_parm, 2));
  goto out_free;
 }




 VAR_14 = FUNC_5(VAR_18->rq_data, 0);
 VAR_15 = FUNC_5(VAR_18->rq_data, 2);
 VAR_11->f_ctime.tv_sec = FUNC_6(VAR_9, VAR_14, VAR_15);
 VAR_11->f_ctime.tv_nsec = 0;

 VAR_14 = FUNC_5(VAR_18->rq_data, 4);
 VAR_15 = FUNC_5(VAR_18->rq_data, 6);
 VAR_11->f_atime.tv_sec = FUNC_6(VAR_9, VAR_14, VAR_15);
 VAR_11->f_atime.tv_nsec = 0;

 VAR_14 = FUNC_5(VAR_18->rq_data, 8);
 VAR_15 = FUNC_5(VAR_18->rq_data, 10);
 VAR_11->f_mtime.tv_sec = FUNC_6(VAR_9, VAR_14, VAR_15);
 VAR_11->f_mtime.tv_nsec = 0;
 FUNC_3("name=%s, date=%x, time=%x, mtime=%ld\n",
  VAR_13, VAR_14, VAR_15, VAR_11->f_mtime.tv_sec);
 VAR_11->f_size = FUNC_1(VAR_18->rq_data, 12);

 VAR_11->attr = FUNC_5(VAR_18->rq_data, 20);
 VAR_17 = 0;

out_free:
 FUNC_11(VAR_18);
out:
 return VAR_17;
}
