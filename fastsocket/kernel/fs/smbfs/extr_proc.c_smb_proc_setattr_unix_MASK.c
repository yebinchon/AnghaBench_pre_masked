
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u64 ;
struct smb_sb_info {int dummy; } ;
struct smb_request {char* rq_buffer; int rq_ldata; char* rq_data; int rq_lparm; char* rq_parm; scalar_t__ rq_flags; int rq_trans2_command; } ;
struct iattr {int ia_valid; unsigned int ia_mode; unsigned int ia_size; unsigned int ia_uid; unsigned int ia_gid; int ia_mtime; int ia_atime; int ia_ctime; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,int,int ) ;
 int VAR_7 ;
 int FUNC_2 (char*,int,unsigned int) ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 scalar_t__ VAR_10 ;
 unsigned int VAR_11 ;
 int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 int VAR_16 ;
 int FUNC_3 (char*,int ,int ) ;
 struct smb_sb_info* FUNC_4 (struct dentry*) ;
 int FUNC_5 (struct smb_request*) ;
 struct smb_request* FUNC_6 (struct smb_sb_info*,int ) ;
 int FUNC_7 (struct smb_sb_info*,char*,scalar_t__,struct dentry*,int *) ;
 int FUNC_8 (unsigned int) ;
 int FUNC_9 (struct smb_request*) ;
 unsigned int FUNC_10 (int ) ;

int
FUNC_11(struct dentry *VAR_17, struct iattr *VAR_18,
        unsigned int VAR_19, unsigned int VAR_20)
{
 struct smb_sb_info *VAR_21 = FUNC_4(VAR_17);
 u64 VAR_22;
 char *VAR_23, *VAR_24;
 int VAR_25;
 char VAR_26[100];
 struct smb_request *VAR_27;

 VAR_25 = -VAR_7;
 if (! (VAR_27 = FUNC_6(VAR_21, VAR_8)))
  goto out;
 VAR_24 = VAR_27->rq_buffer;

 FUNC_0("valid flags = 0x%04x\n", VAR_18->ia_valid);

 FUNC_3(VAR_24, 0, VAR_12);
 FUNC_1(VAR_24, 2, 0);
 VAR_25 = FUNC_7(VAR_21, VAR_24+6, VAR_10+1, VAR_17, ((void*)0));
 if (VAR_25 < 0)
  goto out_free;
 VAR_23 = VAR_24 + 6 + VAR_25;
 FUNC_2(VAR_26, 0, VAR_13);
 FUNC_2(VAR_26, 8, VAR_13);
 FUNC_2(VAR_26, 16, VAR_14);
 FUNC_2(VAR_26, 24, VAR_14);
 FUNC_2(VAR_26, 32, VAR_14);
 FUNC_2(VAR_26, 40, VAR_15);
 FUNC_2(VAR_26, 48, VAR_9);
 FUNC_1(VAR_26, 56, FUNC_8(VAR_18->ia_mode));
 FUNC_2(VAR_26, 60, VAR_19);
 FUNC_2(VAR_26, 68, VAR_20);
 FUNC_2(VAR_26, 76, 0);
 FUNC_2(VAR_26, 84, VAR_11);
 FUNC_2(VAR_26, 92, 0);

 if (VAR_18->ia_valid & VAR_5) {
  FUNC_2(VAR_26, 0, VAR_18->ia_size);
  FUNC_2(VAR_26, 8, 0);
 }







 if (VAR_18->ia_valid & VAR_1) {
  VAR_22 = FUNC_10(VAR_18->ia_ctime);
  FUNC_2(VAR_26, 16, VAR_22);
 }
 if (VAR_18->ia_valid & VAR_0) {
  VAR_22 = FUNC_10(VAR_18->ia_atime);
  FUNC_2(VAR_26, 24, VAR_22);
 }
 if (VAR_18->ia_valid & VAR_4) {
  VAR_22 = FUNC_10(VAR_18->ia_mtime);
  FUNC_2(VAR_26, 32, VAR_22);
 }

 if (VAR_18->ia_valid & VAR_6) {
  FUNC_2(VAR_26, 40, VAR_18->ia_uid);
 }
 if (VAR_18->ia_valid & VAR_2) {
  FUNC_2(VAR_26, 48, VAR_18->ia_gid);
 }

 if (VAR_18->ia_valid & VAR_3) {
  FUNC_2(VAR_26, 84, VAR_18->ia_mode);
 }

 VAR_27->rq_trans2_command = VAR_16;
 VAR_27->rq_ldata = 100;
 VAR_27->rq_data = VAR_26;
 VAR_27->rq_lparm = VAR_23 - VAR_24;
 VAR_27->rq_parm = VAR_24;
 VAR_27->rq_flags = 0;
 VAR_25 = FUNC_5(VAR_27);

out_free:
 FUNC_9(VAR_27);
out:
 return VAR_25;
}
