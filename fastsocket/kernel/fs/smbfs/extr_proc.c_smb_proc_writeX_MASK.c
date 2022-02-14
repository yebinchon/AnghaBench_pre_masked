
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef char u8 ;
typedef int u32 ;
struct smb_sb_info {int dummy; } ;
struct smb_request {int rq_iovlen; int rq_header; int rq_flags; TYPE_1__* rq_iov; } ;
struct inode {int i_ino; } ;
typedef int loff_t ;
struct TYPE_4__ {int fileid; } ;
struct TYPE_3__ {char* iov_base; int iov_len; } ;


 int FUNC_0 (int ,int,int ) ;
 int VAR_0 ;
 TYPE_2__* FUNC_1 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*,int ,int,int,int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ) ;
 struct smb_sb_info* FUNC_5 (struct inode*) ;
 struct smb_request* FUNC_6 (struct smb_sb_info*,int ) ;
 int FUNC_7 (struct smb_request*,int ,int,int ) ;
 int FUNC_8 (struct smb_request*) ;
 char* FUNC_9 (struct smb_request*,int ,int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static int
FUNC_10(struct inode *VAR_14, loff_t VAR_15, int VAR_16, const char *VAR_17)
{
 struct smb_sb_info *VAR_18 = FUNC_5(VAR_14);
 int VAR_19;
 u8 *VAR_20;
 static u8 VAR_21[4];
 struct smb_request *VAR_22;

 VAR_19 = -VAR_0;
 if (! (VAR_22 = FUNC_6(VAR_18, 0)))
  goto out;

 FUNC_2("ino=%ld, fileid=%d, count=%d@%Ld\n",
  VAR_14->i_ino, FUNC_1(VAR_14)->fileid, VAR_16, VAR_15);

 VAR_20 = FUNC_9(VAR_22, VAR_2, 14, VAR_16 + 1);
 FUNC_3(VAR_22->rq_header, VAR_3, 0x00ff);
 FUNC_3(VAR_22->rq_header, VAR_4, 0);
 FUNC_3(VAR_22->rq_header, VAR_8, FUNC_1(VAR_14)->fileid);
 FUNC_0(VAR_22->rq_header, VAR_9, (u32)VAR_15);
 FUNC_0(VAR_22->rq_header, VAR_10, 0);
 FUNC_3(VAR_22->rq_header, VAR_11, 0);
 FUNC_3(VAR_22->rq_header, VAR_12, 0);
 FUNC_3(VAR_22->rq_header, VAR_13, 0);
 FUNC_3(VAR_22->rq_header, VAR_5, VAR_16);
 FUNC_3(VAR_22->rq_header, VAR_6, VAR_7 + 2 + 1);
 FUNC_0(VAR_22->rq_header, VAR_7, (u32)(VAR_15 >> 32));

 VAR_22->rq_iov[1].iov_base = VAR_21;
 VAR_22->rq_iov[1].iov_len = 1;
 VAR_22->rq_iov[2].iov_base = (char *) VAR_17;
 VAR_22->rq_iov[2].iov_len = VAR_16;
 VAR_22->rq_iovlen = 3;
 VAR_22->rq_flags |= VAR_1;

 VAR_19 = FUNC_7(VAR_22, VAR_2, 6, 0);
  if (VAR_19 >= 0)
  VAR_19 = FUNC_4(VAR_22->rq_header, VAR_8);

 FUNC_8(VAR_22);
out:
 return VAR_19;
}
